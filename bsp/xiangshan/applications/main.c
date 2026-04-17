/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 */

#include <rtthread.h>
#include <rthw.h>
#include <riscv_io.h>
#include <stddef.h>
#include <stdint.h>
#include "drv_satellitestation.h"

void test_sender(void);
void test_receiver(void);

#define SAT_TEST_TARGET 2
#define SAT_TEST_MSG_COUNT 4

static const uint64_t sat_test_mbus_payloads[SAT_TEST_MSG_COUNT] = {
    0xFFFFFFAFULL,
    0x123456789AULL,
    0x12345678ULL,
    0xDDDDD1ULL,
};

static const uint64_t sat_test_sbus_payloads[SAT_TEST_MSG_COUNT] = {
    0xABCD0001ULL,
    0xABCD0002ULL,
    0xABCD0003ULL,
    0xABCD0004ULL,
};

static void send_payloads(const char *bus_name, int ch, const uint64_t *payloads, size_t count) {
    for (size_t i = 0; i < count; ++i) {
        rt_kprintf("Sending %s message %u on channel %d payload 0x%llX\n",
                   bus_name,
                   (unsigned int)(i + 1),
                   ch,
                   payloads[i]);
        sat_send(ch, SAT_TEST_TARGET, payloads[i]);
    }
}

static void drain_channel(int ch) {
    const char *bus_name = ch < nMBus ? "MBus" : "SBus";
    uint64_t count = sat_receiveBufferCnt(ch);

    if (count == 0) {
        return;
    }

    rt_kprintf("channel %d (%s) cnt is %lld\n", ch, bus_name, count);
    while (sat_receiveBufferCnt(ch) > 0) {
        rt_kprintf("payload is 0x%llX\n", sat_recv(ch));
    }
}

int main(void) {
    rt_kprintf("Hello RISC-V\n");
    rt_kprintf("Sat Test\n");
    rt_kprintf("This is core %u\n", __raw_hartid());
    if (__raw_hartid() == 1) {
        test_sender();
    } else if (__raw_hartid() == 2) {
        test_receiver();
    }
    rt_kprintf("\n****MAIN FINISH****\n");
    return 0;
}

void test_sender(void) {
    rt_kprintf("SENDER\n");
    sat_init();
    rt_kprintf("Local StateBus count is %u (MBus=%u, SBus=%u)\n",
               sat_localStateBusCount(),
               nMBus,
               nSBus);
    send_payloads("MBus", SAT_MBUS_CH(0), sat_test_mbus_payloads, SAT_TEST_MSG_COUNT);
    send_payloads("SBus", SAT_SBUS_CH(0), sat_test_sbus_payloads, SAT_TEST_MSG_COUNT);
    rt_kprintf("DONE\n");
}

static void sat_recv_handler(int vector, void *param) {
    if(vector != satelliteIRQNum) {rt_kprintf("WHAT?\n"); return;}
    rt_kprintf("\nThis is reciver handler\n");

    for (int ch = 0; ch < (int)sat_localStateBusCount(); ++ch) {
        drain_channel(ch);
    }
    rt_kprintf("DONE\n");
    return;
}

void test_receiver(void) {
    rt_kprintf("RECEIVER\n");
    sat_init();
    rt_kprintf("Local StateBus count is %u (MBus=%u, SBus=%u)\n",
               sat_localStateBusCount(),
               nMBus,
               nSBus);
    sat_interrupt_install(sat_recv_handler, NULL);
    rt_thread_delay(30);
}
