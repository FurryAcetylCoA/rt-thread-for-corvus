// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut_162.h for the primary calling header

#include "Vdut_162__pch.h"
#include "Vdut_162___024root.h"

VL_ATTR_COLD void Vdut_162___024root___eval_static(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_static\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__areset__0 = vlSelfRef.areset;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vdut_162___024root___eval_initial(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_initial\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdut_162___024root___eval_final(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_final\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__stl(Vdut_162___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdut_162___024root___eval_phase__stl(Vdut_162___024root* vlSelf);

VL_ATTR_COLD void Vdut_162___024root___eval_settle(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_settle\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vdut_162___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dut_162.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdut_162___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__stl(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___dump_triggers__stl\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vdut_162___024root___ico_sequent__TOP__0(Vdut_162___024root* vlSelf);

VL_ATTR_COLD void Vdut_162___024root___eval_stl(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_stl\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdut_162___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdut_162___024root___eval_triggers__stl(Vdut_162___024root* vlSelf);

VL_ATTR_COLD bool Vdut_162___024root___eval_phase__stl(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___eval_phase__stl\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdut_162___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdut_162___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__ico(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___dump_triggers__ico\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__act(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___dump_triggers__act\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge areset)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut_162___024root___dump_triggers__nba(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___dump_triggers__nba\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge areset)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut_162___024root___ctor_var_reset(Vdut_162___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut_162___024root___ctor_var_reset\n"); );
    Vdut_162__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->areset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17430697350190813730ull);
    vlSelf->predict_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8629929792609668958ull);
    vlSelf->predict_pc = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1680135475751571932ull);
    vlSelf->predict_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16296622408369034423ull);
    vlSelf->predict_history = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16701594500533784199ull);
    vlSelf->train_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12662525354645111048ull);
    vlSelf->train_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13653504631424923821ull);
    vlSelf->train_mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15608568753373890752ull);
    vlSelf->train_history = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3643437372424301776ull);
    vlSelf->train_pc = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7149816975780708895ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->dut_162__DOT__PHT[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10548609082011966785ull);
    }
    vlSelf->dut_162__DOT__GHR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6703142669991275986ull);
    vlSelf->dut_162__DOT__train_index = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4145522899083444560ull);
    vlSelf->dut_162__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7266929010237313575ull);
    vlSelf->__Vtrigprevexpr___TOP__areset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1340528480001893565ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
}
