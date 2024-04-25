// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg.h"

Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt(Vtb_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::_ctor_var_reset(Vtb_top_verilator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__gnt = VL_RAND_RESET_I(1);
}
