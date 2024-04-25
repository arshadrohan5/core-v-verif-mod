// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top_verilator.h for the primary calling header

#ifndef VERILATED_VTB_TOP_VERILATOR_MM_RAM__R16_H_
#define VERILATED_VTB_TOP_VERILATOR_MM_RAM__R16_H_  // guard

#include "verilated.h"

class Vtb_top_verilator__Syms;

class Vtb_top_verilator_mm_ram__R16 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_ni,0,0);
        VL_IN8(instr_req_i,0,0);
        VL_OUT8(instr_rvalid_o,0,0);
        VL_OUT8(instr_gnt_o,0,0);
        VL_IN8(data_req_i,0,0);
        VL_IN8(data_we_i,0,0);
        VL_IN8(data_be_i,3,0);
        VL_OUT8(data_rvalid_o,0,0);
        VL_OUT8(data_gnt_o,0,0);
        VL_IN8(data_atop_i,5,0);
        VL_IN8(irq_id_i,4,0);
        VL_IN8(irq_ack_i,0,0);
        VL_OUT8(irq_software_o,0,0);
        VL_OUT8(irq_timer_o,0,0);
        VL_OUT8(irq_external_o,0,0);
        VL_OUT8(tests_passed_o,0,0);
        VL_OUT8(tests_failed_o,0,0);
        VL_OUT8(exit_valid_o,0,0);
        CData/*1:0*/ __PVT__transaction;
        CData/*1:0*/ __PVT__transaction_q;
        CData/*0:0*/ __PVT__ram_amoshimd_data_req;
        CData/*0:0*/ __PVT__ram_amoshimd_data_we;
        CData/*7:0*/ __PVT__ram_amoshimd_data_be;
        CData/*5:0*/ __PVT__ram_data_atop;
        CData/*3:0*/ __PVT__ram_data_atop_conv;
        CData/*3:0*/ __PVT__data_be_dec;
        CData/*0:0*/ __PVT__ram_instr_gnt;
        CData/*0:0*/ __PVT__print_valid;
        CData/*0:0*/ __PVT__irq_timer_q;
        CData/*0:0*/ __PVT__timer_reg_valid;
        CData/*0:0*/ __PVT__timer_val_valid;
        CData/*0:0*/ __PVT__rnd_stall_req;
        CData/*0:0*/ __PVT__rnd_stall_we;
        CData/*0:0*/ __PVT__rnd_stall_instr_gnt;
        CData/*0:0*/ __PVT__rnd_stall_data_gnt;
        CData/*0:0*/ __PVT__unnamedblk1__DOT__use_sig_file;
        CData/*0:0*/ __PVT__i_amo_shim__DOT__state_q;
        CData/*3:0*/ __PVT__i_amo_shim__DOT__amo_op_q;
        CData/*0:0*/ __PVT__i_amo_shim__DOT__load_amo;
        CData/*0:0*/ __PVT__i_amo_shim__DOT__upper_word_q;
        CData/*0:0*/ __PVT__i_amo_shim__DOT__reserv_valid_q;
        CData/*0:0*/ __PVT__i_amo_shim__DOT__reserv_valid_d;
        CData/*0:0*/ __PVT__i_amo_shim__DOT__sc_ok;
        CData/*0:0*/ __PVT__instr_rvalid_stall_i__DOT__fifo_empty;
        CData/*0:0*/ __PVT__instr_rvalid_stall_i__DOT__fifo_push;
        CData/*3:0*/ __PVT__instr_rvalid_stall_i__DOT__wptr;
        CData/*3:0*/ __PVT__instr_rvalid_stall_i__DOT__rptr;
        CData/*2:0*/ __PVT__instr_rvalid_stall_i__DOT__wptr_rdata;
        CData/*0:0*/ __PVT__instr_rvalid_stall_i__DOT__rvalid_i_q;
        CData/*3:0*/ __PVT__instr_rvalid_stall_i__DOT__current_delay;
        CData/*0:0*/ instr_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0;
        CData/*0:0*/ __PVT__data_rvalid_stall_i__DOT__fifo_empty;
        CData/*0:0*/ __PVT__data_rvalid_stall_i__DOT__fifo_push;
        CData/*3:0*/ __PVT__data_rvalid_stall_i__DOT__wptr;
        CData/*3:0*/ __PVT__data_rvalid_stall_i__DOT__rptr;
        CData/*2:0*/ __PVT__data_rvalid_stall_i__DOT__wptr_rdata;
        CData/*0:0*/ __PVT__data_rvalid_stall_i__DOT__rvalid_i_q;
        CData/*3:0*/ __PVT__data_rvalid_stall_i__DOT__current_delay;
        CData/*0:0*/ data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0;
        CData/*0:0*/ __PVT__instr_gnt_stall_i__DOT__req_core_i_q;
        CData/*0:0*/ __PVT__instr_gnt_stall_i__DOT__grant_core_o_q;
        CData/*0:0*/ __PVT__data_gnt_stall_i__DOT__req_core_i_q;
        CData/*0:0*/ __PVT__data_gnt_stall_i__DOT__grant_core_o_q;
    };
    struct {
        CData/*2:0*/ __Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v0;
        CData/*5:0*/ __Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v0;
        CData/*0:0*/ __Vdlyvset__data_rvalid_stall_i__DOT__fifo__v0;
        VL_OUT16(irq_fast_o,15,0);
        VL_IN(instr_addr_i,21,0);
        VL_OUTW(instr_rdata_o,127,0,4);
        VL_IN(data_addr_i,31,0);
        VL_IN(data_wdata_i,31,0);
        VL_OUT(data_rdata_o,31,0);
        VL_IN(pc_core_id_i,31,0);
        VL_OUT(exit_value_o,31,0);
        IData/*31:0*/ __PVT__ram_amoshimd_data_addr;
        IData/*31:0*/ __PVT__tmp_ram_amoshimd_data_rdata;
        IData/*31:0*/ __PVT__data_wdata_dec;
        IData/*21:0*/ __PVT__data_addr_dec;
        VlWide<4>/*127:0*/ __PVT__ram_instr_rdata;
        IData/*31:0*/ __PVT__print_wdata;
        IData/*31:0*/ __PVT__sig_end_d;
        IData/*31:0*/ __PVT__sig_end_q;
        IData/*31:0*/ __PVT__sig_begin_d;
        IData/*31:0*/ __PVT__sig_begin_q;
        IData/*31:0*/ __PVT__timer_irq_mask_q;
        IData/*31:0*/ __PVT__timer_cnt_q;
        IData/*31:0*/ __PVT__timer_wdata;
        IData/*31:0*/ __PVT__rnd_stall_addr;
        IData/*31:0*/ __PVT__rnd_stall_wdata;
        IData/*18:0*/ __PVT__irq_rnd_lines;
        IData/*31:0*/ __PVT__data_rdata_mux;
        IData/*31:0*/ __Vcellout__instr_rvalid_stall_i__rdata_o;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__sig_fd;
        IData/*31:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr;
        IData/*31:0*/ __PVT__i_amo_shim__DOT__addr_q;
        IData/*31:0*/ __PVT__i_amo_shim__DOT__amo_operand_b_q;
        IData/*31:0*/ __PVT__i_amo_shim__DOT__swap_value_q;
        IData/*31:0*/ __PVT__i_amo_shim__DOT__amo_result;
        IData/*31:0*/ __PVT__i_amo_shim__DOT__reserv_q;
        IData/*31:0*/ __PVT__i_amo_shim__DOT__reserv_d;
        IData/*31:0*/ __PVT__instr_gnt_stall_i__DOT__grant_delay_cnt;
        IData/*31:0*/ __PVT__data_gnt_stall_i__DOT__grant_delay_cnt;
        IData/*31:0*/ __Vdlyvval__data_rvalid_stall_i__DOT__fifo__v0;
        QData/*63:0*/ __PVT__ram_amoshimd_data_wdata;
        QData/*63:0*/ __PVT__tmp_ram_data_rdata;
        QData/*32:0*/ __PVT__i_amo_shim__DOT__adder_operand_b;
        VlUnpacked<IData/*31:0*/, 16> __PVT__rnd_stall_regs;
        VlUnpacked<CData/*7:0*/, 4194304> dp_ram_i__DOT__mem;
        VlUnpacked<QData/*36:0*/, 8> __PVT__instr_rvalid_stall_i__DOT__fifo;
        VlUnpacked<QData/*36:0*/, 8> __PVT__data_rvalid_stall_i__DOT__fifo;
    };
    std::string __PVT__unnamedblk1__DOT__sig_file;

    // INTERNAL VARIABLES
    Vtb_top_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_top_verilator_mm_ram__R16(Vtb_top_verilator__Syms* symsp, const char* v__name);
    ~Vtb_top_verilator_mm_ram__R16();
    VL_UNCOPYABLE(Vtb_top_verilator_mm_ram__R16);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
