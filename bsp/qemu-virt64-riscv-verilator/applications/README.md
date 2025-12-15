# Verilated DUT on RT-Thread (qemu-virt64-riscv)

## 目标
在 RT-Thread qemu-virt64-riscv BSP 中运行 Verilator 生成的 `dut_162` 仿真程序，使用 C++ 测试逻辑（`applications/main.cpp`）。

## 关键裁剪点
- **单线程运行**：若运行环境缺少 pthread，需强制 `threads(1)`；本目录已将线程池改为 RT-Thread API，可按需开启多线程。
- **禁用计时/波形**：去除 coroutine/timing/trace 相关源码与生成选项：`--no-timing --no-trace`。
- **RT-Thread 适配宏**：使用 `-DVL_RT_THREAD -DVL_MT_DISABLED` 避免调用缺失的 libc/线程特性，使用自带的字符串/数学函数。
- **运行库精简**：只编译 `verilated.cpp`, `verilated_random.cpp`, `verilated_threads.cpp`，移除 FST/VCD/SAIF/timing 等不需要的文件。
- **小修补**：
  - `verilatedos.h`：包含 `<strings.h>`；在 RT-Thread 模式下使用全局 `trunc/round` 替代 `std::` 版本；格式宏 fallback。
  - `verilated.cpp`：提供 `strdup`/`exp2`/随机数的 RT-Thread 轻量实现，避免缺失的 `lrand48` 等。
  - 关闭 `thread_local` 的使用路径，保持单实例静态以避开 TLS。

## 生成模型
路径：`rt-thread/bsp/qemu-virt64-riscv/verilator-case/Makefile`
- 默认调用：`verilator -Wall --cc dut_162.v --exe tb_162.cpp -Mdir ../applications/verilated_dut_162 --no-timing --no-trace --threads 1 --CFLAGS "-DVL_RT_THREAD -DVL_MT_DISABLED"`
- 输出：`applications/verilated_dut_162/` 下的 `Vdut_162.*`。

## 应用构建集成
文件：`applications/SConscript`
- 编译源：`*.c`/`*.cpp` + `verilated_dut_162/*.cpp` + 运行库最小集。
- `CPPPATH`：应用目录、`verilated_dut_162`、`verilator_runtime`。
- `CPPDEFINES`：包含 `VL_RT_THREAD`。

## 运行入口
文件：`applications/main.cpp`
- 创建上下文后可按需设置线程数，默认跟随 Verilator 生成的 `threads()`。
- 重置与驱动 DUT 的测试序列，带有 `rt_kprintf`/`std::cout` 日志方便调试。
- 为避免退出流程触发异常，结尾保持循环休眠（`rt_thread_mdelay`)。

## 构建与运行
- 构建：`scons -j8`（在 `rt-thread/bsp/qemu-virt64-riscv`）。
- 运行：`./run.sh`（使用 BSP 提供的 QEMU 脚本）。

## 已知行为
- 文件系统未挂载会提示 `DFS.fs mount / failed ...`，但不影响仿真测试逻辑。
- 运行日志会打印 `[TB] ...`，确认 DUT 已构造并执行测试用例。
