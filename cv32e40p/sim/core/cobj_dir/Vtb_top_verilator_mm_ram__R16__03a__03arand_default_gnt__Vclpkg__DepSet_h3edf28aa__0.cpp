// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg.h"

Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::~Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt::to_string_middle\n"); );
    // Body
    std::string out;
    out += "gnt:" + VL_TO_STRING(__PVT__gnt);
    return out;
}
