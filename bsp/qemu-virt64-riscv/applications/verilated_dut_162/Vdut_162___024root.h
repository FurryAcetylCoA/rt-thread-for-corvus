// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdut_162.h for the primary calling header

#ifndef VERILATED_VDUT_162___024ROOT_H_
#define VERILATED_VDUT_162___024ROOT_H_  // guard

#include "verilated.h"


class Vdut_162__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdut_162___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(areset,0,0);
    VL_IN8(predict_valid,0,0);
    VL_IN8(predict_pc,6,0);
    VL_OUT8(predict_taken,0,0);
    VL_OUT8(predict_history,6,0);
    VL_IN8(train_valid,0,0);
    VL_IN8(train_taken,0,0);
    VL_IN8(train_mispredicted,0,0);
    VL_IN8(train_history,6,0);
    VL_IN8(train_pc,6,0);
    CData/*6:0*/ dut_162__DOT__GHR;
    CData/*6:0*/ dut_162__DOT__train_index;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__areset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ dut_162__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 128> dut_162__DOT__PHT;
    VlNBACommitQueue<VlUnpacked<CData/*1:0*/, 128>, false, CData/*1:0*/, 1> __VdlyCommitQueuedut_162__DOT__PHT;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdut_162__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdut_162___024root(Vdut_162__Syms* symsp, const char* v__name);
    ~Vdut_162___024root();
    VL_UNCOPYABLE(Vdut_162___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
