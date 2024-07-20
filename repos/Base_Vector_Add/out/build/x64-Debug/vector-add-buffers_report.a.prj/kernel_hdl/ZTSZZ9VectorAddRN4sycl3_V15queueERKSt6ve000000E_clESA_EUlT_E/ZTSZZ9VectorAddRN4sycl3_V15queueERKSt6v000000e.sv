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

// SystemVerilog created from ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage
// Created for function/kernel ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E
// SystemVerilog created on Thu Jun 22 15:22:17 2023


(* altera_attribute = "-name AUTO_SHIFT_REGISTER_RECOGNITION OFF; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 10037; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 15400; -name MESSAGE_DISABLE 14130; -name MESSAGE_DISABLE 10036; -name MESSAGE_DISABLE 12020; -name MESSAGE_DISABLE 12030; -name MESSAGE_DISABLE 12010; -name MESSAGE_DISABLE 12110; -name MESSAGE_DISABLE 14320; -name MESSAGE_DISABLE 13410; -name MESSAGE_DISABLE 113007; -name MESSAGE_DISABLE 10958" *)
module ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000e (
    input wire [0:0] in_almost_empty_in,
    input wire [0:0] in_empty_in,
    input wire [1:0] in_i_data,
    input wire [0:0] in_i_stall,
    input wire [0:0] in_i_valid,
    output wire [0:0] out_o_almost_empty,
    output wire [1:0] out_o_data,
    output wire [0:0] out_o_empty,
    output wire [0:0] out_o_stall,
    output wire [0:0] out_o_valid,
    input wire clock,
    input wire resetn
    );

    wire [1:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_data;
    wire [0:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_stall;
    wire ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_stall_bitsignaltemp;
    wire [0:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_valid;
    wire ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_valid_bitsignaltemp;
    wire [0:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_almost_empty;
    wire ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_almost_empty_bitsignaltemp;
    wire [1:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_data;
    wire [0:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_empty;
    wire ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_empty_bitsignaltemp;
    wire [0:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_stall;
    wire ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_stall_bitsignaltemp;
    wire [0:0] ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_valid;
    wire ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_valid_bitsignaltemp;
    reg [0:0] rst_sync_rst_sclrn;


    // ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage(EXTIFACE,2)
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_data = in_i_data;
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_stall = in_i_stall;
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_valid = in_i_valid;
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_stall_bitsignaltemp = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_stall[0];
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_valid_bitsignaltemp = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_valid[0];
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_almost_empty[0] = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_almost_empty_bitsignaltemp;
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_empty[0] = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_empty_bitsignaltemp;
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_stall[0] = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_stall_bitsignaltemp;
    assign ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_valid[0] = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_valid_bitsignaltemp;
    hld_fifo #(
        .ALMOST_FULL_CUTOFF(7),
        .ASYNC_RESET(0),
        .DEPTH(32),
        .RESET_EXTERNALLY_HELD(1),
        .STYLE("ms"),
        .SYNCHRONIZE_RESET(0),
        .USE_STALL_LATENCY_DOWNSTREAM(1),
        .USE_STALL_LATENCY_UPSTREAM(1),
        .WIDTH(0)
    ) theZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage (
        .i_data(in_i_data),
        .i_stall(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_stall_bitsignaltemp),
        .i_valid(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_i_valid_bitsignaltemp),
        .o_almost_empty(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_almost_empty_bitsignaltemp),
        .o_data(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_data),
        .o_empty(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_empty_bitsignaltemp),
        .o_stall(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_stall_bitsignaltemp),
        .o_valid(ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_valid_bitsignaltemp),
        .clock(clock),
        .resetn(rst_sync_rst_sclrn[0])
    );

    // out_o_almost_empty(GPOUT,8)
    assign out_o_almost_empty = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_almost_empty;

    // out_o_data(GPOUT,9)
    assign out_o_data = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_data;

    // out_o_empty(GPOUT,10)
    assign out_o_empty = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_empty;

    // out_o_stall(GPOUT,11)
    assign out_o_stall = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_stall;

    // out_o_valid(GPOUT,12)
    assign out_o_valid = ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6vectorIiSaIiEES7_RS5_ENKUlRNS0_7handlerEE_clESA_EUlT_E_B0_branch_branch_storage_o_valid;

    // rst_sync(RESETSYNC,13)
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
