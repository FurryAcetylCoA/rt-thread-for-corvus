// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDUT_162__SYMS_H_
#define VERILATED_VDUT_162__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdut_162.h"

// INCLUDE MODULE CLASSES
#include "Vdut_162___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdut_162__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdut_162* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdut_162___024root             TOP;

    // CONSTRUCTORS
    Vdut_162__Syms(VerilatedContext* contextp, const char* namep, Vdut_162* modelp);
    ~Vdut_162__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
