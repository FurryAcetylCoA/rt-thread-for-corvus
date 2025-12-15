// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut_162.h for the primary calling header

#include "Vdut_162__pch.h"
#include "Vdut_162__Syms.h"
#include "Vdut_162___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__ico(Vdut_162___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut_162___024root___eval_triggers__ico(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_triggers__ico\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdut_162___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__act(Vdut_162___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut_162___024root___eval_triggers__act(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_triggers__act\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.areset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__areset__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__areset__0 = vlSelfRef.areset;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdut_162___024root___dump_triggers__act(vlSelf);
    }
#endif
}
