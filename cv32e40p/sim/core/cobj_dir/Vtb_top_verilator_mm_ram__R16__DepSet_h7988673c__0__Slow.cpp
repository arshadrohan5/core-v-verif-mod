// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_top_verilator_mm_ram__R16.h"

VL_ATTR_COLD void Vtb_top_verilator_mm_ram__R16___ctor_var_reset(Vtb_top_verilator_mm_ram__R16* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_top_verilator_mm_ram__R16___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->instr_req_i = VL_RAND_RESET_I(1);
    vlSelf->instr_addr_i = VL_RAND_RESET_I(22);
    VL_RAND_RESET_W(128, vlSelf->instr_rdata_o);
    vlSelf->instr_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->instr_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->data_req_i = VL_RAND_RESET_I(1);
    vlSelf->data_addr_i = VL_RAND_RESET_I(32);
    vlSelf->data_we_i = VL_RAND_RESET_I(1);
    vlSelf->data_be_i = VL_RAND_RESET_I(4);
    vlSelf->data_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->data_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->data_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->data_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->data_atop_i = VL_RAND_RESET_I(6);
    vlSelf->irq_id_i = VL_RAND_RESET_I(5);
    vlSelf->irq_ack_i = VL_RAND_RESET_I(1);
    vlSelf->irq_software_o = VL_RAND_RESET_I(1);
    vlSelf->irq_timer_o = VL_RAND_RESET_I(1);
    vlSelf->irq_external_o = VL_RAND_RESET_I(1);
    vlSelf->irq_fast_o = VL_RAND_RESET_I(16);
    vlSelf->pc_core_id_i = VL_RAND_RESET_I(32);
    vlSelf->tests_passed_o = VL_RAND_RESET_I(1);
    vlSelf->tests_failed_o = VL_RAND_RESET_I(1);
    vlSelf->exit_valid_o = VL_RAND_RESET_I(1);
    vlSelf->exit_value_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__transaction = VL_RAND_RESET_I(2);
    vlSelf->__PVT__transaction_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ram_amoshimd_data_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_amoshimd_data_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_amoshimd_data_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_amoshimd_data_wdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ram_amoshimd_data_be = VL_RAND_RESET_I(8);
    vlSelf->__PVT__tmp_ram_amoshimd_data_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tmp_ram_data_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ram_data_atop = VL_RAND_RESET_I(6);
    vlSelf->__PVT__ram_data_atop_conv = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_wdata_dec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_addr_dec = VL_RAND_RESET_I(22);
    vlSelf->__PVT__data_be_dec = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->__PVT__ram_instr_rdata);
    vlSelf->__PVT__ram_instr_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__print_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__print_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sig_end_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sig_end_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sig_begin_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sig_begin_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timer_irq_mask_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timer_cnt_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__irq_timer_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_val_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_wdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__rnd_stall_regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__rnd_stall_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rnd_stall_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rnd_stall_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rnd_stall_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rnd_stall_instr_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rnd_stall_data_gnt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_rnd_lines = VL_RAND_RESET_I(19);
    vlSelf->__PVT__data_rdata_mux = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__instr_rvalid_stall_i__rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk1__DOT__use_sig_file = 0;
    vlSelf->__PVT__unnamedblk1__DOT__sig_fd = 0;
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_shim__DOT__amo_op_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__i_amo_shim__DOT__load_amo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_shim__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__amo_operand_b_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__upper_word_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_shim__DOT__swap_value_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__amo_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__reserv_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__reserv_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_shim__DOT__reserv_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_shim__DOT__sc_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i_amo_shim__DOT__adder_operand_b = VL_RAND_RESET_Q(33);
    for (int __Vi0 = 0; __Vi0 < 4194304; ++__Vi0) {
        vlSelf->dp_ram_i__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__wptr_rdata = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__instr_rvalid_stall_i__DOT__fifo[__Vi0] = VL_RAND_RESET_Q(37);
    }
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__rvalid_i_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_rvalid_stall_i__DOT__current_delay = VL_RAND_RESET_I(4);
    vlSelf->instr_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__rptr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__wptr_rdata = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__data_rvalid_stall_i__DOT__fifo[__Vi0] = VL_RAND_RESET_Q(37);
    }
    vlSelf->__PVT__data_rvalid_stall_i__DOT__rvalid_i_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_rvalid_stall_i__DOT__current_delay = VL_RAND_RESET_I(4);
    vlSelf->data_rvalid_stall_i__DOT____VdfgExtracted_he119aaf2__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_gnt_stall_i__DOT__req_core_i_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_core_o_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_gnt_stall_i__DOT__grant_delay_cnt = 0;
    vlSelf->__PVT__data_gnt_stall_i__DOT__req_core_i_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_gnt_stall_i__DOT__grant_core_o_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_gnt_stall_i__DOT__grant_delay_cnt = 0;
    vlSelf->__Vdlyvdim0__data_rvalid_stall_i__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvlsb__data_rvalid_stall_i__DOT__fifo__v0 = 0;
    vlSelf->__Vdlyvval__data_rvalid_stall_i__DOT__fifo__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__data_rvalid_stall_i__DOT__fifo__v0 = 0;
}
