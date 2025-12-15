// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut_150.h for the primary calling header

#ifndef VERILATED_VDUT_150___024ROOT_H_
#define VERILATED_VDUT_150___024ROOT_H_  // guard

#include "verilated.h"


class Vdut_150__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut_150___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(r,3,1);
    VL_OUT8(g,3,1);
    CData/*1:0*/ dut_150__DOT__state;
    CData/*1:0*/ dut_150__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdut_150__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_150___024root(Vdut_150__Syms* symsp, const char* v__name);
    ~Vdut_150___024root();
    VL_UNCOPYABLE(Vdut_150___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
