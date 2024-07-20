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

// SystemVerilog created from i_sfc_logic_s_c1_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c1_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_133_0gr
// Created for function/kernel ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E
// SystemVerilog created on Thu Jun 22 15:22:17 2023


(* altera_attribute = "-name AUTO_SHIFT_REGISTER_RECOGNITION OFF; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 10037; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 15400; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 12020; -name MESSAGE_DISABLE 12030; -name MESSAGE_DISABLE 12010; -name MESSAGE_DISABLE 12110; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 13410; -name MESSAGE_DISABLE 113007; -name MESSAGE_DISABLE 10958" *)
module ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000cr (
    input wire [63:0] in_arg_a,
    input wire [63:0] in_arg_b,
    input wire [63:0] in_arg_a6_0_tpl,
    input wire [63:0] in_arg_b9_0_tpl,
    output wire [0:0] out_c1_exi2_0_tpl,
    output wire [63:0] out_c1_exi2_1_tpl,
    output wire [63:0] out_c1_exi2_2_tpl,
    output wire [0:0] out_o_valid,
    output wire [0:0] out_unnamed_ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E0,
    input wire [0:0] in_c1_eni1_0_tpl,
    input wire [63:0] in_c1_eni1_1_tpl,
    input wire [0:0] in_i_valid,
    input wire clock,
    input wire resetn
    );

    wire [0:0] GND_q;
    wire [0:0] VCC_q;
    wire [1:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q;
    wire [63:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_join_q;
    wire [61:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b;
    wire [63:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_join_q;
    wire [61:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b;
    wire [63:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_join_q;
    wire [61:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_select_63_b;
    wire [63:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_join_q;
    wire [61:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_select_63_b;
    wire [63:0] i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_out_buffer_out;
    wire [63:0] i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_join_q;
    wire [61:0] i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_select_63_b;
    wire [63:0] i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_out_buffer_out;
    wire [63:0] i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_join_q;
    wire [61:0] i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_select_63_b;
    wire [64:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_a;
    wire [64:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_b;
    logic [64:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_o;
    wire [64:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_q;
    wire [61:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_narrow_x_b;
    wire [63:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_shift_join_x_q;
    wire [63:0] i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_dupName_0_trunc_sel_x_b;
    wire [64:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_a;
    wire [64:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_b;
    logic [64:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_o;
    wire [64:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_q;
    wire [61:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_narrow_x_b;
    wire [63:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_shift_join_x_q;
    wire [63:0] i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_dupName_0_trunc_sel_x_b;
    wire [64:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_a;
    wire [64:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_b;
    logic [64:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_o;
    wire [64:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_q;
    wire [61:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b;
    wire [63:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_shift_join_x_q;
    wire [63:0] i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_dupName_0_trunc_sel_x_b;
    wire [64:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_a;
    wire [64:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_b;
    logic [64:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_o;
    wire [64:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_q;
    wire [63:0] i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_dupName_0_trunc_sel_x_b;
    wire [63:0] i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_a6_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_2gr_aunroll_x_out_buffer_out_0_tpl;
    wire [63:0] i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_b9_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_6gr_aunroll_x_out_buffer_out_0_tpl;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg0_q;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg1_q;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg2_q;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg3_q;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg4_q;
    reg [0:0] redist0_valid_fanout_reg0_q_1_q;
    reg [61:0] redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2_q;
    reg [61:0] redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2_delay_0;
    reg [61:0] redist2_i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b_1_q;
    reg [61:0] redist3_i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b_1_q;


    // VCC(CONSTANT,1)
    assign VCC_q = $unsigned(1'b1);

    // valid_fanout_reg0(REG,59)@0 + 1
    always @ (posedge clock)
    begin
        if (!resetn)
        begin
            valid_fanout_reg0_q <= $unsigned(1'b0);
        end
        else
        begin
            valid_fanout_reg0_q <= $unsigned(in_i_valid);
        end
    end

    // redist0_valid_fanout_reg0_q_1(DELAY,64)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist0_valid_fanout_reg0_q_1_q <= $unsigned(valid_fanout_reg0_q);
        end
    end

    // i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x(BITSELECT,43)@0
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b = in_c1_eni1_1_tpl[61:0];

    // redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2(DELAY,65)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2_delay_0 <= $unsigned(i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b);
            redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2_q <= redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2_delay_0;
        end
    end

    // i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_shift_join_x(BITJOIN,44)@2
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_shift_join_x_q = {redist1_i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_narrow_x_b_2_q, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // valid_fanout_reg3(REG,62)@0 + 1
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            valid_fanout_reg3_q <= $unsigned(in_i_valid);
        end
    end

    // i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_b9_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_6gr_aunroll_x(BLACKBOX,54)@0
    // in in_i_dependence@1
    // in in_valid_in@1
    // out out_valid_out@1
    // out out_buffer_out_0_tpl@1
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000gr thei_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_b9_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_6gr_aunroll_x (
        .in_i_dependence(GND_q),
        .in_stall_in(GND_q),
        .in_valid_in(valid_fanout_reg3_q),
        .in_buffer_in_0_tpl(in_arg_b9_0_tpl),
        .out_stall_out(),
        .out_valid_out(),
        .out_buffer_out_0_tpl(i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_b9_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_6gr_aunroll_x_out_buffer_out_0_tpl),
        .clock(clock),
        .resetn(resetn)
    );

    // i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_narrow_x(BITSELECT,37)@1
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_narrow_x_b = i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_b9_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_6gr_aunroll_x_out_buffer_out_0_tpl[61:0];

    // i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_shift_join_x(BITJOIN,38)@1
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_shift_join_x_q = {i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_narrow_x_b, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // valid_fanout_reg4(REG,63)@0 + 1
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            valid_fanout_reg4_q <= $unsigned(in_i_valid);
        end
    end

    // i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr(BLACKBOX,22)@0
    // in in_i_dependence@1
    // in in_valid_in@1
    // out out_buffer_out@1
    // out out_valid_out@1
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000er thei_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr (
        .in_buffer_in(in_arg_b),
        .in_i_dependence(GND_q),
        .in_stall_in(GND_q),
        .in_valid_in(valid_fanout_reg4_q),
        .out_buffer_out(i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_out_buffer_out),
        .out_stall_out(),
        .out_valid_out(),
        .clock(clock),
        .resetn(resetn)
    );

    // i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_select_63(BITSELECT,25)@1
    assign i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_select_63_b = i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_out_buffer_out[63:2];

    // i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_join(BITJOIN,24)@1
    assign i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_join_q = {i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_select_63_b, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x(ADD,35)@1
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_a = {1'b0, i_llvm_fpga_sync_buffer_p1024i32_arg_b_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_8gr_vt_join_q};
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_b = {1'b0, i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_shift_join_x_q};
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_o = $unsigned(i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_a) + $unsigned(i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_b);
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_q = i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_o[64:0];

    // i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_dupName_0_trunc_sel_x(BITSELECT,40)@1
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_dupName_0_trunc_sel_x_b = i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_add_x_q[63:0];

    // i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63(BITSELECT,11)@1
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b = i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_210_0gr_dupName_0_trunc_sel_x_b[63:2];

    // redist2_i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b_1(DELAY,66)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist2_i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b_1_q <= $unsigned(i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b);
        end
    end

    // i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_join(BITJOIN,10)@2
    assign i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_join_q = {redist2_i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_select_63_b_1_q, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x(ADD,41)@2
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_a = {1'b0, i_add_ptr_i2483_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_9gr_vt_join_q};
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_b = {1'b0, i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_shift_join_x_q};
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_o = $unsigned(i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_a) + $unsigned(i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_b);
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_q = i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_o[64:0];

    // i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_dupName_0_trunc_sel_x(BITSELECT,46)@2
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_dupName_0_trunc_sel_x_b = i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_add_x_q[63:0];

    // i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_select_63(BITSELECT,14)@2
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_select_63_b = i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_dupName_0_trunc_sel_x_b[63:2];

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1(CONSTANT,6)
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q = $unsigned(2'b00);

    // i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_join(BITJOIN,13)@2
    assign i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_join_q = {i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_select_63_b, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // valid_fanout_reg1(REG,60)@0 + 1
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            valid_fanout_reg1_q <= $unsigned(in_i_valid);
        end
    end

    // i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_a6_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_2gr_aunroll_x(BLACKBOX,53)@0
    // in in_i_dependence@1
    // in in_valid_in@1
    // out out_valid_out@1
    // out out_buffer_out_0_tpl@1
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000fr thei_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_a6_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_2gr_aunroll_x (
        .in_i_dependence(GND_q),
        .in_stall_in(GND_q),
        .in_valid_in(valid_fanout_reg1_q),
        .in_buffer_in_0_tpl(in_arg_a6_0_tpl),
        .out_stall_out(),
        .out_valid_out(),
        .out_buffer_out_0_tpl(i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_a6_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_2gr_aunroll_x_out_buffer_out_0_tpl),
        .clock(clock),
        .resetn(resetn)
    );

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_narrow_x(BITSELECT,31)@1
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_narrow_x_b = i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_a6_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_2gr_aunroll_x_out_buffer_out_0_tpl[61:0];

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_shift_join_x(BITJOIN,32)@1
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_shift_join_x_q = {i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_narrow_x_b, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // valid_fanout_reg2(REG,61)@0 + 1
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            valid_fanout_reg2_q <= $unsigned(in_i_valid);
        end
    end

    // i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr(BLACKBOX,18)@0
    // in in_i_dependence@1
    // in in_valid_in@1
    // out out_buffer_out@1
    // out out_valid_out@1
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000dr thei_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr (
        .in_buffer_in(in_arg_a),
        .in_i_dependence(GND_q),
        .in_stall_in(GND_q),
        .in_valid_in(valid_fanout_reg2_q),
        .out_buffer_out(i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_out_buffer_out),
        .out_stall_out(),
        .out_valid_out(),
        .clock(clock),
        .resetn(resetn)
    );

    // i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_select_63(BITSELECT,21)@1
    assign i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_select_63_b = i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_out_buffer_out[63:2];

    // i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_join(BITJOIN,20)@1
    assign i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_join_q = {i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_select_63_b, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x(ADD,29)@1
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_a = {1'b0, i_llvm_fpga_sync_buffer_p1024i32_arg_a_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_4gr_vt_join_q};
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_b = {1'b0, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_shift_join_x_q};
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_o = $unsigned(i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_a) + $unsigned(i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_b);
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_q = i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_o[64:0];

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_dupName_0_trunc_sel_x(BITSELECT,34)@1
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_dupName_0_trunc_sel_x_b = i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_add_x_q[63:0];

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63(BITSELECT,8)@1
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b = i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_171_0gr_dupName_0_trunc_sel_x_b[63:2];

    // redist3_i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b_1(DELAY,67)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist3_i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b_1_q <= $unsigned(i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b);
        end
    end

    // i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_join(BITJOIN,7)@2
    assign i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_join_q = {redist3_i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_select_63_b_1_q, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x(ADD,47)@2
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_a = {1'b0, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_join_q};
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_b = {1'b0, i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_228_0gr_shift_join_x_q};
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_o = $unsigned(i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_a) + $unsigned(i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_b);
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_q = i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_o[64:0];

    // i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_dupName_0_trunc_sel_x(BITSELECT,52)@2
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_dupName_0_trunc_sel_x_b = i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_add_x_q[63:0];

    // i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_select_63(BITSELECT,17)@2
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_select_63_b = i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_219_0gr_dupName_0_trunc_sel_x_b[63:2];

    // i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_join(BITJOIN,16)@2
    assign i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_join_q = {i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_select_63_b, i_add_ptr_i1932_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_5gr_vt_const_1_q};

    // GND(CONSTANT,0)
    assign GND_q = $unsigned(1'b0);

    // sync_out_2_aunroll_x(GPOUT,57)@2
    assign out_c1_exi2_0_tpl = GND_q;
    assign out_c1_exi2_1_tpl = i_arrayidx_i714_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_10_vt_join_q;
    assign out_c1_exi2_2_tpl = i_arrayidx_i425_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_136_11_vt_join_q;
    assign out_o_valid = redist0_valid_fanout_reg0_q_1_q;
    assign out_unnamed_ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E0 = GND_q;

endmodule
