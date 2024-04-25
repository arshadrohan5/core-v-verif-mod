// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator_mm_ram__R16.h"

void Vtb_top_verilator_mm_ram__R16___ctor_var_reset(Vtb_top_verilator_mm_ram__R16* vlSelf);

Vtb_top_verilator_mm_ram__R16::Vtb_top_verilator_mm_ram__R16(Vtb_top_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_top_verilator_mm_ram__R16___ctor_var_reset(this);
}

void Vtb_top_verilator_mm_ram__R16::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_top_verilator_mm_ram__R16::~Vtb_top_verilator_mm_ram__R16() {
}
