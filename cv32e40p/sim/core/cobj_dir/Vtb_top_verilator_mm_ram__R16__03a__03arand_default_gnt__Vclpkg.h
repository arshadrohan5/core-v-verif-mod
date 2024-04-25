// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_verilator.h for the primary calling header

#ifndef VERILATED_VTB_TOP_VERILATOR_MM_RAM__R16__03A__03ARAND_DEFAULT_GNT__VCLPKG_H_
#define VERILATED_VTB_TOP_VERILATOR_MM_RAM__R16__03A__03ARAND_DEFAULT_GNT__VCLPKG_H_  // guard

#include "verilated.h"

class Vtb_top_verilator__Syms;

class Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_top_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg(Vtb_top_verilator__Syms* symsp, const char* v__name);
    ~Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg();
    VL_UNCOPYABLE(Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


class Vtb_top_verilator__Syms;

class Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__gnt;
  private:
    void _ctor_var_reset(Vtb_top_verilator__Syms* __restrict vlSymsp);
  public:
    Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt(Vtb_top_verilator__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt>& obj);

#endif  // guard
