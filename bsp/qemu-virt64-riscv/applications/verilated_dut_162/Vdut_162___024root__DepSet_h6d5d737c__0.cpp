// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut_162.h for the primary calling header

#include "Vdut_162__pch.h"
#include "Vdut_162___024root.h"

void Vdut_162___024root___ico_sequent__TOP__0(Vdut_162___024root* vlSelf);

void Vdut_162___024root___eval_ico(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_ico\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdut_162___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vdut_162___024root___ico_sequent__TOP__0(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___ico_sequent__TOP__0\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.predict_history = ((IData)(vlSelfRef.predict_valid)
                                  ? (IData)(vlSelfRef.dut_162__DOT__GHR)
                                  : 0U);
    vlSelfRef.dut_162__DOT__train_index = ((IData)(vlSelfRef.train_history) 
                                           ^ (IData)(vlSelfRef.train_pc));
    vlSelfRef.predict_taken = ((IData)(vlSelfRef.predict_valid) 
                               && (2U <= vlSelfRef.dut_162__DOT__PHT
                                   [((IData)(vlSelfRef.dut_162__DOT__GHR) 
                                     ^ (IData)(vlSelfRef.predict_pc))]));
}

void Vdut_162___024root___eval_triggers__ico(Vdut_162___024root* vlSelf);

bool Vdut_162___024root___eval_phase__ico(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_phase__ico\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdut_162___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdut_162___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdut_162___024root___eval_act(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_act\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdut_162___024root___nba_sequent__TOP__0(Vdut_162___024root* vlSelf);

void Vdut_162___024root___eval_nba(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_nba\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdut_162___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vdut_162___024root___nba_sequent__TOP__0(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___nba_sequent__TOP__0\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__dut_162__DOT__GHR;
    __Vdly__dut_162__DOT__GHR = 0;
    CData/*6:0*/ __VdlyDim0__dut_162__DOT__PHT__v0;
    __VdlyDim0__dut_162__DOT__PHT__v0 = 0;
    CData/*1:0*/ __VdlyVal__dut_162__DOT__PHT__v1;
    __VdlyVal__dut_162__DOT__PHT__v1 = 0;
    CData/*6:0*/ __VdlyDim0__dut_162__DOT__PHT__v1;
    __VdlyDim0__dut_162__DOT__PHT__v1 = 0;
    // Body
    __Vdly__dut_162__DOT__GHR = vlSelfRef.dut_162__DOT__GHR;
    if (vlSelfRef.areset) {
        vlSelfRef.dut_162__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000080U, vlSelfRef.dut_162__DOT__i)) {
            __VdlyDim0__dut_162__DOT__PHT__v0 = (0x0000007fU 
                                                 & vlSelfRef.dut_162__DOT__i);
            vlSelfRef.__VdlyCommitQueuedut_162__DOT__PHT.enqueue(1U, (IData)(__VdlyDim0__dut_162__DOT__PHT__v0));
            vlSelfRef.dut_162__DOT__i = ((IData)(1U) 
                                         + vlSelfRef.dut_162__DOT__i);
        }
    } else if (vlSelfRef.train_valid) {
        __VdlyVal__dut_162__DOT__PHT__v1 = ((2U & vlSelfRef.dut_162__DOT__PHT
                                             [vlSelfRef.dut_162__DOT__train_index])
                                             ? ((1U 
                                                 & vlSelfRef.dut_162__DOT__PHT
                                                 [vlSelfRef.dut_162__DOT__train_index])
                                                 ? 
                                                ((IData)(vlSelfRef.train_taken)
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((IData)(vlSelfRef.train_taken)
                                                  ? 3U
                                                  : 1U))
                                             : ((1U 
                                                 & vlSelfRef.dut_162__DOT__PHT
                                                 [vlSelfRef.dut_162__DOT__train_index])
                                                 ? 
                                                ((IData)(vlSelfRef.train_taken)
                                                  ? 2U
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelfRef.train_taken)
                                                  ? 1U
                                                  : 0U)));
        __VdlyDim0__dut_162__DOT__PHT__v1 = vlSelfRef.dut_162__DOT__train_index;
        vlSelfRef.__VdlyCommitQueuedut_162__DOT__PHT.enqueue(__VdlyVal__dut_162__DOT__PHT__v1, (IData)(__VdlyDim0__dut_162__DOT__PHT__v1));
    }
    if (vlSelfRef.areset) {
        __Vdly__dut_162__DOT__GHR = 0U;
    } else if (((IData)(vlSelfRef.train_valid) & (IData)(vlSelfRef.train_mispredicted))) {
        __Vdly__dut_162__DOT__GHR = ((0x0000007eU & 
                                      ((IData)(vlSelfRef.train_history) 
                                       << 1U)) | (IData)(vlSelfRef.train_taken));
    } else if (vlSelfRef.predict_valid) {
        __Vdly__dut_162__DOT__GHR = ((0x0000007eU & 
                                      ((IData)(vlSelfRef.dut_162__DOT__GHR) 
                                       << 1U)) | (IData)(vlSelfRef.predict_taken));
    }
    vlSelfRef.__VdlyCommitQueuedut_162__DOT__PHT.commit(vlSelfRef.dut_162__DOT__PHT);
    vlSelfRef.dut_162__DOT__GHR = __Vdly__dut_162__DOT__GHR;
    vlSelfRef.predict_history = ((IData)(vlSelfRef.predict_valid)
                                  ? (IData)(vlSelfRef.dut_162__DOT__GHR)
                                  : 0U);
    vlSelfRef.predict_taken = ((IData)(vlSelfRef.predict_valid) 
                               && (2U <= vlSelfRef.dut_162__DOT__PHT
                                   [((IData)(vlSelfRef.dut_162__DOT__GHR) 
                                     ^ (IData)(vlSelfRef.predict_pc))]));
}

void Vdut_162___024root___eval_triggers__act(Vdut_162___024root* vlSelf);

bool Vdut_162___024root___eval_phase__act(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_phase__act\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdut_162___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdut_162___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdut_162___024root___eval_phase__nba(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_phase__nba\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdut_162___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__ico(Vdut_162___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__nba(Vdut_162___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__act(Vdut_162___024root* vlSelf);
#endif  // VL_DEBUG

void Vdut_162___024root___eval(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdut_162___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("dut_162.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdut_162___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdut_162___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dut_162.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdut_162___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dut_162.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdut_162___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdut_162___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdut_162___024root___eval_debug_assertions(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_debug_assertions\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.areset & 0xfeU)))) {
        Verilated::overWidthError("areset");
    }
    if (VL_UNLIKELY(((vlSelfRef.predict_valid & 0xfeU)))) {
        Verilated::overWidthError("predict_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.predict_pc & 0x80U)))) {
        Verilated::overWidthError("predict_pc");
    }
    if (VL_UNLIKELY(((vlSelfRef.train_valid & 0xfeU)))) {
        Verilated::overWidthError("train_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.train_taken & 0xfeU)))) {
        Verilated::overWidthError("train_taken");
    }
    if (VL_UNLIKELY(((vlSelfRef.train_mispredicted 
                      & 0xfeU)))) {
        Verilated::overWidthError("train_mispredicted");
    }
    if (VL_UNLIKELY(((vlSelfRef.train_history & 0x80U)))) {
        Verilated::overWidthError("train_history");
    }
    if (VL_UNLIKELY(((vlSelfRef.train_pc & 0x80U)))) {
        Verilated::overWidthError("train_pc");
    }
}
#endif  // VL_DEBUG
