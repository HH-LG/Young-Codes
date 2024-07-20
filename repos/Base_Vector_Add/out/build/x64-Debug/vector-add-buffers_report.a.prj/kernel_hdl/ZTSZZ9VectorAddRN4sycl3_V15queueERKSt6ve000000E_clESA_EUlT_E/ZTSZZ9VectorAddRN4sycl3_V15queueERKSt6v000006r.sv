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

// SystemVerilog created from i_sfc_logic_s_c0_in_entry_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_es_c0_enter_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_63_0gr
// Created for function/kernel ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E
// SystemVerilog created on Thu Jun 22 15:22:17 2023


(* altera_attribute = "-name AUTO_SHIFT_REGISTER_RECOGNITION OFF; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 10037; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 15400; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 12020; -name MESSAGE_DISABLE 12030; -name MESSAGE_DISABLE 12010; -name MESSAGE_DISABLE 12110; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 13410; -name MESSAGE_DISABLE 113007; -name MESSAGE_DISABLE 10958" *)
module ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000006r (
    input wire [63:0] in_arg_sum,
    input wire [63:0] in_arg_sum3_0_tpl,
    output wire [0:0] out_c0_exi1_0_tpl,
    output wire [63:0] out_c0_exi1_1_tpl,
    output wire [0:0] out_o_valid,
    output wire [0:0] out_unnamed_ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E0,
    input wire [0:0] in_c0_eni1_0_tpl,
    input wire [63:0] in_c0_eni1_1_tpl,
    input wire [0:0] in_i_valid,
    input wire clock,
    input wire resetn
    );

    wire [0:0] GND_q;
    wire [0:0] VCC_q;
    wire [1:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q;
    wire [63:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_join_q;
    wire [61:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b;
    wire [63:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_join_q;
    wire [61:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_select_63_b;
    wire [63:0] i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_out_buffer_out;
    wire [63:0] i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_join_q;
    wire [61:0] i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_select_63_b;
    wire [64:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_a;
    wire [64:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_b;
    logic [64:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_o;
    wire [64:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_q;
    wire [61:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_narrow_x_b;
    wire [63:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_shift_join_x_q;
    wire [63:0] i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_dupName_0_trunc_sel_x_b;
    wire [64:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_a;
    wire [64:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_b;
    logic [64:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_o;
    wire [64:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_q;
    wire [61:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b;
    wire [63:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_shift_join_x_q;
    wire [63:0] i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_dupName_0_trunc_sel_x_b;
    wire [63:0] i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_sum3_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_2gr_aunroll_x_out_buffer_out_0_tpl;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg0_q;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg1_q;
    (* preserve_syn_only *) reg [0:0] valid_fanout_reg2_q;
    reg [0:0] redist0_valid_fanout_reg0_q_1_q;
    reg [0:0] redist1_sync_together_66_13_aunroll_x_in_i_valid_62_q;
    reg [61:0] redist3_i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b_1_q;
    reg [61:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_inputreg0_q;
    reg [61:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_outputreg0_q;
    wire redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_reset0;
    wire [61:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_ia;
    wire [5:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_aa;
    wire [5:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_ab;
    wire [61:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_iq;
    wire [61:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_q;
    wire [5:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_q;
    // Initial-value here is arbitrary, but a resolved value is necessary for simulation.
    (* preserve_syn_only *) reg [5:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_i = 6'b111111;
    wire [5:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_offset_q;
    wire [6:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_a;
    wire [6:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_b;
    logic [6:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_o;
    wire [6:0] redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_q;


    // VCC(CONSTANT,1)
    assign VCC_q = $unsigned(1'b1);

    // redist1_sync_together_66_13_aunroll_x_in_i_valid_62(DELAY,36)
    dspba_delay_ver #( .width(1), .depth(62), .reset_kind("SYNC"), .phase(0), .modulus(2), .reset_high(1'b0) )
    redist1_sync_together_66_13_aunroll_x_in_i_valid_62 ( .xin(in_i_valid), .xout(redist1_sync_together_66_13_aunroll_x_in_i_valid_62_q), .clk(clock), .aclr(resetn), .ena(1'b1) );

    // valid_fanout_reg0(REG,32)@62 + 1
    always @ (posedge clock)
    begin
        if (!resetn)
        begin
            valid_fanout_reg0_q <= $unsigned(1'b0);
        end
        else
        begin
            valid_fanout_reg0_q <= $unsigned(redist1_sync_together_66_13_aunroll_x_in_i_valid_62_q);
        end
    end

    // redist0_valid_fanout_reg0_q_1(DELAY,35)
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

    // redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_offset(CONSTANT,43)
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_offset_q = $unsigned(6'b000101);

    // redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt(ADD,44)
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_a = {1'b0, redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_q};
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_b = {1'b0, redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_offset_q};
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_o <= $unsigned(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_a) + $unsigned(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_b);
        end
    end
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_q = redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_o[6:0];

    // i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x(BITSELECT,24)@0
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b = in_c0_eni1_1_tpl[61:0];

    // redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_inputreg0(DELAY,39)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_inputreg0_q <= $unsigned(i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b);
        end
    end

    // redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr(COUNTER,42)
    // low=0, high=63, step=1, init=0
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_i <= $unsigned(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_i) + $unsigned(6'd1);
        end
    end
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_q = redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_i[5:0];

    // redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem(DUALMEM,41)
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_ia = $unsigned(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_inputreg0_q);
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_aa = redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_wraddr_q;
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_ab = redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_rdcnt_q[5:0];
    altera_syncram #(
        .ram_block_type("M20K"),
        .operation_mode("DUAL_PORT"),
        .width_a(62),
        .widthad_a(6),
        .numwords_a(64),
        .width_b(62),
        .widthad_b(6),
        .numwords_b(64),
        .lpm_type("altera_syncram"),
        .width_byteena_a(1),
        .address_reg_b("CLOCK0"),
        .indata_reg_b("CLOCK0"),
        .rdcontrol_reg_b("CLOCK0"),
        .byteena_reg_b("CLOCK0"),
        .outdata_reg_b("CLOCK0"),
        .outdata_sclr_b("NONE"),
        .clock_enable_input_a("NORMAL"),
        .clock_enable_input_b("NORMAL"),
        .clock_enable_output_b("NORMAL"),
        .read_during_write_mode_mixed_ports("DONT_CARE"),
        .power_up_uninitialized("TRUE"),
        .intended_device_family("Agilex 7")
    ) redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_dmem (
        .clocken0(1'b1),
        .clock0(clock),
        .address_a(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_aa),
        .data_a(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_ia),
        .wren_a(VCC_q[0]),
        .address_b(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_ab),
        .q_b(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_iq),
        .wren_b(),
        .rden_a(),
        .rden_b(),
        .data_b(),
        .clock1(),
        .clocken1(),
        .clocken2(),
        .clocken3(),
        .aclr0(),
        .aclr1(),
        .addressstall_a(),
        .addressstall_b(),
        .byteena_a(),
        .byteena_b(),
        .eccencbypass(),
        .eccencparity(),
        .sclr(),
        .address2_a(),
        .address2_b(),
        .q_a(),
        .eccstatus()
    );
    assign redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_q = redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_iq[61:0];

    // redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_outputreg0(DELAY,40)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_outputreg0_q <= $unsigned(redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_mem_q);
        end
    end

    // i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_shift_join_x(BITJOIN,25)@64
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_shift_join_x_q = {redist2_i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_narrow_x_b_64_outputreg0_q, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q};

    // valid_fanout_reg1(REG,33)@62 + 1
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            valid_fanout_reg1_q <= $unsigned(redist1_sync_together_66_13_aunroll_x_in_i_valid_62_q);
        end
    end

    // i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_sum3_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_2gr_aunroll_x(BLACKBOX,28)@0
    // in in_i_dependence@63
    // in in_valid_in@63
    // out out_valid_out@63
    // out out_buffer_out_0_tpl@63
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000008r thei_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_sum3_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_2gr_aunroll_x (
        .in_i_dependence(GND_q),
        .in_stall_in(GND_q),
        .in_valid_in(valid_fanout_reg1_q),
        .in_buffer_in_0_tpl(in_arg_sum3_0_tpl),
        .out_stall_out(),
        .out_valid_out(),
        .out_buffer_out_0_tpl(i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_sum3_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_2gr_aunroll_x_out_buffer_out_0_tpl),
        .clock(clock),
        .resetn(resetn)
    );

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_narrow_x(BITSELECT,18)@63
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_narrow_x_b = i_llvm_fpga_sync_buffer_s_class_sycl_v1_ranges_arg_sum3_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_2gr_aunroll_x_out_buffer_out_0_tpl[61:0];

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_shift_join_x(BITJOIN,19)@63
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_shift_join_x_q = {i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_narrow_x_b, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q};

    // valid_fanout_reg2(REG,34)@62 + 1
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            valid_fanout_reg2_q <= $unsigned(redist1_sync_together_66_13_aunroll_x_in_i_valid_62_q);
        end
    end

    // i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr(BLACKBOX,10)@0
    // in in_i_dependence@63
    // in in_valid_in@63
    // out out_buffer_out@63
    // out out_valid_out@63
    ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000007r thei_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr (
        .in_buffer_in(in_arg_sum),
        .in_i_dependence(GND_q),
        .in_stall_in(GND_q),
        .in_valid_in(valid_fanout_reg2_q),
        .out_buffer_out(i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_out_buffer_out),
        .out_stall_out(),
        .out_valid_out(),
        .clock(clock),
        .resetn(resetn)
    );

    // i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_select_63(BITSELECT,13)@63
    assign i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_select_63_b = i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_out_buffer_out[63:2];

    // i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_join(BITJOIN,12)@63
    assign i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_join_q = {i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_select_63_b, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q};

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x(ADD,16)@63
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_a = {1'b0, i_llvm_fpga_sync_buffer_p1024i32_arg_sum_sync_buffer_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_4gr_vt_join_q};
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_b = {1'b0, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_shift_join_x_q};
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_o = $unsigned(i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_a) + $unsigned(i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_b);
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_q = i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_o[64:0];

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_dupName_0_trunc_sel_x(BITSELECT,21)@63
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_dupName_0_trunc_sel_x_b = i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_add_x_q[63:0];

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63(BITSELECT,6)@63
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b = i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_101_0gr_dupName_0_trunc_sel_x_b[63:2];

    // redist3_i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b_1(DELAY,38)
    always @ (posedge clock)
    begin
        if (0)
        begin
        end
        else
        begin
            redist3_i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b_1_q <= $unsigned(i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b);
        end
    end

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_join(BITJOIN,5)@64
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_join_q = {redist3_i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_select_63_b_1_q, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q};

    // i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x(ADD,22)@64
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_a = {1'b0, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_join_q};
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_b = {1'b0, i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_shift_join_x_q};
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_o = $unsigned(i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_a) + $unsigned(i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_b);
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_q = i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_o[64:0];

    // i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_dupName_0_trunc_sel_x(BITSELECT,27)@64
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_dupName_0_trunc_sel_x_b = i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_add_x_q[63:0];

    // i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_select_63(BITSELECT,9)@64
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_select_63_b = i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_110_0gr_dupName_0_trunc_sel_x_b[63:2];

    // i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1(CONSTANT,4)
    assign i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q = $unsigned(2'b00);

    // i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_join(BITJOIN,8)@64
    assign i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_join_q = {i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_select_63_b, i_add_ptr_i1_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_5gr_vt_const_1_q};

    // GND(CONSTANT,0)
    assign GND_q = $unsigned(1'b0);

    // sync_out_1_aunroll_x(GPOUT,30)@64
    assign out_c0_exi1_0_tpl = GND_q;
    assign out_c0_exi1_1_tpl = i_arrayidx_i6_ztszz9vectoraddrn4sycl3_v15queueerkst6vectoriisaiiees7_rs5_enkulrns0_7handleree_clesa_eult_e_66_6gr_vt_join_q;
    assign out_o_valid = redist0_valid_fanout_reg0_q_1_q;
    assign out_unnamed_ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E0 = GND_q;

endmodule
