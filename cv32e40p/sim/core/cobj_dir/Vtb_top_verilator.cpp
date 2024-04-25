// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_top_verilator.h"
#include "Vtb_top_verilator__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtb_top_verilator::Vtb_top_verilator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_top_verilator__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , fetch_enable_i{vlSymsp->TOP.fetch_enable_i}
    , tests_passed_o{vlSymsp->TOP.tests_passed_o}
    , tests_failed_o{vlSymsp->TOP.tests_failed_o}
    , __PVT__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i{vlSymsp->TOP.__PVT__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i}
    , mm_ram__R16__03a__03arand_default_gnt__Vclpkg{vlSymsp->TOP.mm_ram__R16__03a__03arand_default_gnt__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_top_verilator::Vtb_top_verilator(const char* _vcname__)
    : Vtb_top_verilator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_top_verilator::~Vtb_top_verilator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_top_verilator___024root___eval_debug_assertions(Vtb_top_verilator___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top_verilator___024root___eval_static(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___eval_initial(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___eval_settle(Vtb_top_verilator___024root* vlSelf);
void Vtb_top_verilator___024root___eval(Vtb_top_verilator___024root* vlSelf);

void Vtb_top_verilator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_top_verilator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_top_verilator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_top_verilator___024root___eval_static(&(vlSymsp->TOP));
        Vtb_top_verilator___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_top_verilator___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_top_verilator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_top_verilator::eventsPending() { return false; }

uint64_t Vtb_top_verilator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_top_verilator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_top_verilator___024root___eval_final(Vtb_top_verilator___024root* vlSelf);

VL_ATTR_COLD void Vtb_top_verilator::final() {
    Vtb_top_verilator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_top_verilator::hierName() const { return vlSymsp->name(); }
const char* Vtb_top_verilator::modelName() const { return "Vtb_top_verilator"; }
unsigned Vtb_top_verilator::threads() const { return 1; }
