// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut_150.h for the primary calling header

#include "Vdut_150__pch.h"
#include "Vdut_150___024root.h"

void Vdut_150___024root___ico_sequent__TOP__0(Vdut_150___024root* vlSelf);

void Vdut_150___024root___eval_ico(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_ico\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdut_150___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vdut_150__ConstPool__TABLE_h9a08d36a_0;

void Vdut_150___024root___ico_sequent__TOP__0(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___ico_sequent__TOP__0\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.r) << 2U) | (IData)(vlSelfRef.dut_150__DOT__state));
    vlSelfRef.dut_150__DOT__next_state = Vdut_150__ConstPool__TABLE_h9a08d36a_0
        [__Vtableidx1];
}

void Vdut_150___024root___eval_triggers__ico(Vdut_150___024root* vlSelf);

bool Vdut_150___024root___eval_phase__ico(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_phase__ico\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdut_150___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdut_150___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdut_150___024root___eval_act(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_act\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdut_150___024root___nba_sequent__TOP__0(Vdut_150___024root* vlSelf);

void Vdut_150___024root___eval_nba(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_nba\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut_150___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdut_150___024root___nba_sequent__TOP__0(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___nba_sequent__TOP__0\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.dut_150__DOT__state = ((IData)(vlSelfRef.resetn)
                                      ? (IData)(vlSelfRef.dut_150__DOT__next_state)
                                      : 0U);
    vlSelfRef.g = (((3U == (IData)(vlSelfRef.dut_150__DOT__state)) 
                    << 2U) | (((2U == (IData)(vlSelfRef.dut_150__DOT__state)) 
                               << 1U) | (1U == (IData)(vlSelfRef.dut_150__DOT__state))));
    __Vtableidx1 = (((IData)(vlSelfRef.r) << 2U) | (IData)(vlSelfRef.dut_150__DOT__state));
    vlSelfRef.dut_150__DOT__next_state = Vdut_150__ConstPool__TABLE_h9a08d36a_0
        [__Vtableidx1];
}

void Vdut_150___024root___eval_triggers__act(Vdut_150___024root* vlSelf);

bool Vdut_150___024root___eval_phase__act(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_phase__act\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut_150___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdut_150___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut_150___024root___eval_phase__nba(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_phase__nba\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut_150___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_150___024root___dump_triggers__ico(Vdut_150___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_150___024root___dump_triggers__nba(Vdut_150___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_150___024root___dump_triggers__act(Vdut_150___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut_150___024root___eval(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vdut_150___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("dut_150.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdut_150___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdut_150___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dut_150.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdut_150___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dut_150.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdut_150___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdut_150___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut_150___024root___eval_debug_assertions(Vdut_150___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_150___024root___eval_debug_assertions\n"); );
    Vdut_150__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.resetn & 0xfeU)))) {
        Verilated::overWidthError("resetn");
    }
    if (VL_UNLIKELY(((vlSelfRef.r & 0xf8U)))) {
        Verilated::overWidthError("r");
    }
}
#endif  // VL_DEBUG
