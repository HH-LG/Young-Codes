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

// SystemVerilog created from i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_239_1gr_data_fifo
// Created for function/kernel ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E
// SystemVerilog created on Thu Jun 22 15:22:17 2023


(* altera_attribute = "-name AUTO_SHIFT_REGISTER_RECOGNITION OFF; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 10037; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 15400; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 12020; -name MESSAGE_DISABLE 12030; -name MESSAGE_DISABLE 12010; -name MESSAGE_DISABLE 12110; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 13410; -name MESSAGE_DISABLE 113007; -name MESSAGE_DISABLE 10958" *)
module ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001o (
    input wire [0:0] in_i_stall,
    output wire [0:0] out_o_stall,
    output wire [0:0] out_o_almost_empty,
    output wire [0:0] out_o_data_0_tpl,
    output wire [63:0] out_o_data_1_tpl,
    output wire [63:0] out_o_data_2_tpl,
    output wire [0:0] out_o_empty,
    output wire [0:0] out_o_valid,
    input wire [0:0] in_almost_empty_in,
    input wire [0:0] in_empty_in,
    input wire [0:0] in_i_data_0_tpl,
    input wire [63:0] in_i_data_1_tpl,
    input wire [63:0] in_i_data_2_tpl,
    input wire [0:0] in_i_valid,
    input wire clock,
    input wire resetn
    );

    wire [0:0] adapt_scalar_trunc_457_7_in;
    wire [0:0] adapt_scalar_trunc_457_7_q;
    wire [6:0] c_i7_0_457_4gr_q;
    wire [135:0] dsdk_ip_adapt_bitjoin_457_1_q;
    wire [7:0] element_extension_457_3_q;
    wire [135:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_data;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_stall;
    wire i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_stall_bitsignaltemp;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_valid;
    wire i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_valid_bitsignaltemp;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_almost_empty;
    wire i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_almost_empty_bitsignaltemp;
    wire [135:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_data;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_empty;
    wire i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_empty_bitsignaltemp;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_stall;
    wire i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_stall_bitsignaltemp;
    wire [0:0] i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_valid;
    wire i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_valid_bitsignaltemp;
    wire [63:0] ip_dsdk_adapt_bitselect_457_10_b;
    wire [0:0] ip_dsdk_adapt_bitselect_457_6_b;
    wire [63:0] ip_dsdk_adapt_bitselect_457_8_b;


    // c_i7_0_457_4gr(CONSTANT,3)
    assign c_i7_0_457_4gr_q = $unsigned(7'b0000000);

    // element_extension_457_3(BITJOIN,5)
    assign element_extension_457_3_q = {c_i7_0_457_4gr_q, in_i_data_0_tpl};

    // dsdk_ip_adapt_bitjoin_457_1(BITJOIN,4)
    assign dsdk_ip_adapt_bitjoin_457_1_q = {in_i_data_2_tpl, in_i_data_1_tpl, element_extension_457_3_q};

    // i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr(EXTIFACE,6)
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_data = dsdk_ip_adapt_bitjoin_457_1_q;
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_stall = in_i_stall;
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_valid = in_i_valid;
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_stall_bitsignaltemp = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_stall[0];
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_valid_bitsignaltemp = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_valid[0];
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_almost_empty[0] = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_almost_empty_bitsignaltemp;
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_empty[0] = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_empty_bitsignaltemp;
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_stall[0] = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_stall_bitsignaltemp;
    assign i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_valid[0] = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_valid_bitsignaltemp;
    hld_fifo #(
        .ALMOST_EMPTY_CUTOFF(7),
        .DEPTH(512),
        .STYLE("ms"),
        .ASYNC_RESET(0),
        .NEVER_OVERFLOWS(1),
        .RESET_EXTERNALLY_HELD(1),
        .STALL_IN_EARLINESS(3),
        .SYNCHRONIZE_RESET(0),
        .USE_STALL_LATENCY_DOWNSTREAM(1),
        .USE_STALL_LATENCY_UPSTREAM(1),
        .WIDTH(136)
    ) thei_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr (
        .i_data(dsdk_ip_adapt_bitjoin_457_1_q),
        .i_stall(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_stall_bitsignaltemp),
        .i_valid(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_i_valid_bitsignaltemp),
        .o_almost_empty(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_almost_empty_bitsignaltemp),
        .o_data(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_data),
        .o_empty(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_empty_bitsignaltemp),
        .o_stall(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_stall_bitsignaltemp),
        .o_valid(i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_valid_bitsignaltemp),
        .clock(clock),
        .resetn(resetn)
    );

    // sync_out_24(GPOUT,13)@20000000
    assign out_o_stall = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_stall;

    // ip_dsdk_adapt_bitselect_457_10(BITSELECT,7)
    assign ip_dsdk_adapt_bitselect_457_10_b = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_data[135:72];

    // ip_dsdk_adapt_bitselect_457_8(BITSELECT,9)
    assign ip_dsdk_adapt_bitselect_457_8_b = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_data[71:8];

    // ip_dsdk_adapt_bitselect_457_6(BITSELECT,8)
    assign ip_dsdk_adapt_bitselect_457_6_b = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_data[0:0];

    // adapt_scalar_trunc_457_7(ROUND,2)
    assign adapt_scalar_trunc_457_7_in = ip_dsdk_adapt_bitselect_457_6_b;
    assign adapt_scalar_trunc_457_7_q = adapt_scalar_trunc_457_7_in[0:0];

    // sync_out_25_aunroll_x(GPOUT,14)@20000000
    assign out_o_almost_empty = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_almost_empty;
    assign out_o_data_0_tpl = adapt_scalar_trunc_457_7_q;
    assign out_o_data_1_tpl = ip_dsdk_adapt_bitselect_457_8_b;
    assign out_o_data_2_tpl = ip_dsdk_adapt_bitselect_457_10_b;
    assign out_o_empty = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_empty;
    assign out_o_valid = i_llvm_fpga_sfc_exit_s_c1_out_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_exit_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_457_0gr_o_valid;

endmodule
