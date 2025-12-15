// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdut_150__pch.h"

//============================================================
// Constructors

Vdut_150::Vdut_150(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdut_150__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , r{vlSymsp->TOP.r}
    , g{vlSymsp->TOP.g}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdut_150::Vdut_150(const char* _vcname__)
    : Vdut_150(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdut_150::~Vdut_150() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdut_150___024root___eval_debug_assertions(Vdut_150___024root* vlSelf);
#endif  // VL_DEBUG
void Vdut_150___024root___eval_static(Vdut_150___024root* vlSelf);
void Vdut_150___024root___eval_initial(Vdut_150___024root* vlSelf);
void Vdut_150___024root___eval_settle(Vdut_150___024root* vlSelf);
void Vdut_150___024root___eval(Vdut_150___024root* vlSelf);

void Vdut_150::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdut_150::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdut_150___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdut_150___024root___eval_static(&(vlSymsp->TOP));
        Vdut_150___024root___eval_initial(&(vlSymsp->TOP));
        Vdut_150___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdut_150___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdut_150::eventsPending() { return false; }

uint64_t Vdut_150::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdut_150::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdut_150___024root___eval_final(Vdut_150___024root* vlSelf);

VL_ATTR_COLD void Vdut_150::final() {
    Vdut_150___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdut_150::hierName() const { return vlSymsp->name(); }
const char* Vdut_150::modelName() const { return "Vdut_150"; }
unsigned Vdut_150::threads() const { return 1; }
void Vdut_150::prepareClone() const { contextp()->prepareClone(); }
void Vdut_150::atClone() const {
    contextp()->threadPoolpOnClone();
}
