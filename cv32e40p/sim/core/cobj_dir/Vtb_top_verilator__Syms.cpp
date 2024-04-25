// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top_verilator__Syms.h"
#include "Vtb_top_verilator.h"
#include "Vtb_top_verilator___024root.h"
#include "Vtb_top_verilator_mm_ram__R16.h"
#include "Vtb_top_verilator_mm_ram__R16__03a__03arand_default_gnt__Vclpkg.h"

void Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__read_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i(Vtb_top_verilator__Syms* __restrict vlSymsp, IData/*21:0*/ byte_addr, IData/*31:0*/ &read_byte__Vfuncrtn);
void Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__write_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i(Vtb_top_verilator__Syms* __restrict vlSymsp, IData/*21:0*/ byte_addr, CData/*7:0*/ val, CData/*7:0*/ &other);

// FUNCTIONS
Vtb_top_verilator__Syms::~Vtb_top_verilator__Syms()
{
}

Vtb_top_verilator__Syms::Vtb_top_verilator__Syms(VerilatedContext* contextp, const char* namep, Vtb_top_verilator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i{this, Verilated::catName(namep, "tb_top_verilator.cv32e40p_tb_wrapper_i.ram_i")}
    , TOP__mm_ram__R16__03a__03arand_default_gnt__Vclpkg{this, Verilated::catName(namep, "mm_ram__R16::rand_default_gnt__Vclpkg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i = &TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i;
    TOP.mm_ram__R16__03a__03arand_default_gnt__Vclpkg = &TOP__mm_ram__R16__03a__03arand_default_gnt__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i.__Vconfigure(true);
    TOP__mm_ram__R16__03a__03arand_default_gnt__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_top_verilator.configure(this, name(), "tb_top_verilator", "tb_top_verilator", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_top_verilator__cv32e40p_tb_wrapper_i__ram_i.configure(this, name(), "tb_top_verilator.cv32e40p_tb_wrapper_i.ram_i", "ram_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_top_verilator__cv32e40p_tb_wrapper_i__ram_i__dp_ram_i.configure(this, name(), "tb_top_verilator.cv32e40p_tb_wrapper_i.ram_i.dp_ram_i", "dp_ram_i", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_top_verilator__cv32e40p_tb_wrapper_i__ram_i__read_mux.configure(this, name(), "tb_top_verilator.cv32e40p_tb_wrapper_i.ram_i.read_mux", "read_mux", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_top_verilator__cv32e40p_tb_wrapper_i__ram_i__unnamedblk1.configure(this, name(), "tb_top_verilator.cv32e40p_tb_wrapper_i.ram_i.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_top_verilator__cv32e40p_tb_wrapper_i__ram_i__dp_ram_i.exportInsert(__Vfinal, "read_byte", (void*)(&Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__read_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
        __Vscope_tb_top_verilator__cv32e40p_tb_wrapper_i__ram_i__dp_ram_i.exportInsert(__Vfinal, "write_byte", (void*)(&Vtb_top_verilator_mm_ram__R16____Vdpiexp_dp_ram_i__DOT__write_byte_TOP__tb_top_verilator__DOT__cv32e40p_tb_wrapper_i__DOT__ram_i));
    }
}
