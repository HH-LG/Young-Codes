// ------------------------------------------------------------------------- 
// High Level Design Compiler for Intel(R) FPGAs Version 2023.1 (Release Build #b61bd1a3f47f92e5bebeec898fc7db72d5bb3b73)
// 
// Legal Notice: Copyright 2022 Intel Corporation.  All rights reserved.
// Your use of  Intel Corporation's design tools,  logic functions and other
// software and  tools, and its AMPP partner logic functions, and any output
// files any  of the foregoing (including  device programming  or simulation
// files), and  any associated  documentation  or information  are expressly
// subject  to the terms and  conditions of the  Intel FPGA Software License
// Agreement, Intel MegaCore Function License Agreement, or other applicable
// license agreement,  including,  without limitation,  that your use is for
// the  sole  purpose of  programming  logic devices  manufactured by  Intel
// and  sold by Intel  or its authorized  distributors. Please refer  to the
// applicable agreement for further details.
// ---------------------------------------------------------------------------

// SystemVerilog created from i_sfc_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_56_9gr
// Created for function/kernel ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E
// SystemVerilog created on Thu Jun 22 15:22:17 2023


(* altera_attribute = "-name AUTO_SHIFT_REGISTER_RECOGNITION OFF; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 10037; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 15400; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 12020; -name MESSAGE_DISABLE 12030; -name MESSAGE_DISABLE 12010; -name MESSAGE_DISABLE 12110; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 13410; -name MESSAGE_DISABLE 113007; -name MESSAGE_DISABLE 10958" *)
module ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000hr (
    input wire [0:0] in_i_stall,
    output wire [0:0] out_o_stall,
    output wire [0:0] out_almost_empty_out,
    output wire [0:0] out_c2_exit_0_tpl,
    output wire [31:0] out_c2_exit_1_tpl,
    output wire [0:0] out_empty_out,
    output wire [0:0] out_o_valid,
    input wire [0:0] in_almost_empty_in,
    input wire [0:0] in_c2_eni2_0_tpl,
    input wire [31:0] in_c2_eni2_1_tpl,
    input wire [31:0] in_c2_eni2_2_tpl,
    input wire [0:0] in_empty_in,
    input wire [0:0] in_i_valid,
    input wire clock,
    input wire resetn
    );

    wire [0:0] GND_q;
    wire [0:0] VCC_q;
    wire [0:0] input_accepted_and_q;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_almost_empty_out;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_empty_out;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_stall_entry;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_valid_out;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_data_out_0_tpl;
    wire [31:0] i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_data_out_1_tpl;
    wire [0:0] i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_o_valid;
    wire [0:0] i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_c2_exi1_0_tpl;
    wire [31:0] i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_c2_exi1_1_tpl;
    reg [0:0] rst_sync_rst_sclrn;


    // i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x(BLACKBOX,8)@64
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000kr thei_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x (
        .in_i_valid(input_accepted_and_q),
        .in_c2_eni2_0_tpl(in_c2_eni2_0_tpl),
        .in_c2_eni2_1_tpl(in_c2_eni2_1_tpl),
        .in_c2_eni2_2_tpl(in_c2_eni2_2_tpl),
        .out_o_valid(i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_o_valid),
        .out_unnamed_ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E0(),
        .out_c2_exi1_0_tpl(i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_c2_exi1_0_tpl),
        .out_c2_exi1_1_tpl(i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_c2_exi1_1_tpl),
        .clock(clock),
        .resetn(rst_sync_rst_sclrn[0])
    );

    // GND(CONSTANT,0)
    assign GND_q = $unsigned(1'b0);

    // VCC(CONSTANT,1)
    assign VCC_q = $unsigned(1'b1);

    // input_accepted_and(LOGICAL,4)
    assign input_accepted_and_q = in_i_valid & VCC_q;

    // i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x(BLACKBOX,7)@64
    // in in_mask_valid@20000000
    // in in_stall_in@20000000
    // out out_almost_empty_out@95
    // out out_empty_out@95
    // out out_stall_entry@20000000
    // out out_valid_out@95
    // out out_data_out_0_tpl@95
    // out out_data_out_1_tpl@95
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ir thei_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x (
        .in_input_accepted(input_accepted_and_q),
        .in_mask_valid(GND_q),
        .in_stall_in(in_i_stall),
        .in_valid_in(i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_o_valid),
        .in_data_in_0_tpl(i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_c2_exi1_0_tpl),
        .in_data_in_1_tpl(i_sfc_logic_s_c2_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_0gr_aunroll_x_out_c2_exi1_1_tpl),
        .out_almost_empty_out(i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_almost_empty_out),
        .out_empty_out(i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_empty_out),
        .out_stall_entry(i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_stall_entry),
        .out_valid_out(i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_valid_out),
        .out_data_out_0_tpl(i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_data_out_0_tpl),
        .out_data_out_1_tpl(i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_data_out_1_tpl),
        .clock(clock),
        .resetn(rst_sync_rst_sclrn[0])
    );

    // sync_out_39(GPOUT,6)@20000000
    assign out_o_stall = i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_stall_entry;

    // sync_out_40_aunroll_x(GPOUT,9)@95
    assign out_almost_empty_out = i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_almost_empty_out;
    assign out_c2_exit_0_tpl = i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_data_out_0_tpl;
    assign out_c2_exit_1_tpl = i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_data_out_1_tpl;
    assign out_empty_out = i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_empty_out;
    assign out_o_valid = i_llvm_fpga_sfc_exit_s_c2_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c2_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_283_1gr_aunroll_x_out_valid_out;

    // rst_sync(RESETSYNC,11)
    acl_reset_handler #(
        .ASYNC_RESET(0),
        .USE_SYNCHRONIZER(1),
        .PULSE_EXTENSION(0),
        .PIPE_DEPTH(3),
        .DUPLICATE(1)
    ) therst_sync (
        .clk(clock),
        .i_resetn(resetn),
        .o_sclrn(rst_sync_rst_sclrn)
    );

endmodule
