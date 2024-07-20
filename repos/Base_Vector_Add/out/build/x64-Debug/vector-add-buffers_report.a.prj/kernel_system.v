// (c) 1992-2023 Intel Corporation.                            
// Intel, the Intel logo, Intel, MegaCore, NIOS II, Quartus and TalkBack words    
// and logos are trademarks of Intel Corporation or its subsidiaries in the U.S.  
// and/or other countries. Other marks and brands may be claimed as the property  
// of others. See Trademarks on intel.com for full list of Intel trademarks or    
// the Trademarks & Brands Names Database (if Intel) or See www.Intel.com/legal (if Altera) 
// Your use of Intel Corporation's design tools, logic functions and other        
// software and tools, and its AMPP partner logic functions, and any output       
// files any of the foregoing (including device programming or simulation         
// files), and any associated documentation or information are expressly subject  
// to the terms and conditions of the Altera Program License Subscription         
// Agreement, Intel MegaCore Function License Agreement, or other applicable      
// license agreement, including, without limitation, that your use is for the     
// sole purpose of programming logic devices manufactured by Intel and sold by    
// Intel or its authorized distributors.  Please refer to the applicable          
// agreement for further details.                                                 
// Generated by Intel(R) FPGA SDK for OpenCL(TM), Version 2023.1.0 Build 232097a6b03b7c02055623c6eb99ac83ec7cd8a2 Pro Edition, Copyright (c) 2023 Intel Corporation

/////////////////////////////////////////////////////////////////
// MODULE kernel_system
/////////////////////////////////////////////////////////////////
module kernel_system
(
   input logic clock_reset_clk,
   input logic clock_reset_reset_reset_n,
   input logic cc_snoop_clk_clk,
   // AVM mem0_rw
   output logic mem0_rw_enable,
   output logic mem0_rw_read,
   output logic mem0_rw_write,
   output logic [34:0] mem0_rw_address,
   output logic [63:0] mem0_rw_writedata,
   output logic [7:0] mem0_rw_byteenable,
   input logic mem0_rw_waitrequest,
   input logic [63:0] mem0_rw_readdata,
   input logic mem0_rw_readdatavalid,
   output logic mem0_rw_burstcount,
   input logic mem0_rw_writeack,
   input logic kernel_cra_debugaccess,
   input logic kernel_cra_burstcount,
   // AVS kernel_cra
   input logic kernel_cra_enable,
   input logic kernel_cra_read,
   input logic kernel_cra_write,
   input logic [29:0] kernel_cra_address,
   input logic [63:0] kernel_cra_writedata,
   input logic [7:0] kernel_cra_byteenable,
   output logic kernel_cra_waitrequest,
   output logic [63:0] kernel_cra_readdata,
   output logic kernel_cra_readdatavalid,
   output logic kernel_irq_irq,
   output logic [63:0] device_exception_bus
);
   logic sys_cra_ring_enable;
   logic sys_cra_ring_read;
   logic sys_cra_ring_write;
   logic [4:0] sys_cra_ring_address;
   logic [63:0] sys_cra_ring_writedata;
   logic [7:0] sys_cra_ring_byteenable;
   logic sys_cra_ring_waitrequest;
   logic [63:0] sys_cra_ring_readdata;
   logic sys_cra_ring_readdatavalid;

   // INST vector_add_buffers_report_a_sys of vector_add_buffers_report_a_sys
   vector_add_buffers_report_a_sys vector_add_buffers_report_a_sys
   (
      .clock(clock_reset_clk),
      .resetn(clock_reset_reset_reset_n),
      .device_exception_bus(device_exception_bus),
      .kernel_irq(kernel_irq_irq),
      // AVM avm_mem_gmem0_0_port_0_0_rw
      .avm_mem_gmem0_0_port_0_0_rw_enable(mem0_rw_enable),
      .avm_mem_gmem0_0_port_0_0_rw_read(mem0_rw_read),
      .avm_mem_gmem0_0_port_0_0_rw_write(mem0_rw_write),
      .avm_mem_gmem0_0_port_0_0_rw_address(mem0_rw_address),
      .avm_mem_gmem0_0_port_0_0_rw_writedata(mem0_rw_writedata),
      .avm_mem_gmem0_0_port_0_0_rw_byteenable(mem0_rw_byteenable),
      .avm_mem_gmem0_0_port_0_0_rw_waitrequest(mem0_rw_waitrequest),
      .avm_mem_gmem0_0_port_0_0_rw_readdata(mem0_rw_readdata),
      .avm_mem_gmem0_0_port_0_0_rw_readdatavalid(mem0_rw_readdatavalid),
      .avm_mem_gmem0_0_port_0_0_rw_burstcount(mem0_rw_burstcount),
      .avm_mem_gmem0_0_port_0_0_rw_writeack(mem0_rw_writeack),
      // AVS csr_ring_root_avs
      .csr_ring_root_avs_enable(sys_cra_ring_enable),
      .csr_ring_root_avs_read(sys_cra_ring_read),
      .csr_ring_root_avs_write(sys_cra_ring_write),
      .csr_ring_root_avs_address(sys_cra_ring_address),
      .csr_ring_root_avs_writedata(sys_cra_ring_writedata),
      .csr_ring_root_avs_byteenable(sys_cra_ring_byteenable),
      .csr_ring_root_avs_waitrequest(sys_cra_ring_waitrequest),
      .csr_ring_root_avs_readdata(sys_cra_ring_readdata),
      .csr_ring_root_avs_readdatavalid(sys_cra_ring_readdatavalid)
   );

   assign sys_cra_ring_enable = kernel_cra_enable;
   assign sys_cra_ring_read = kernel_cra_read;
   assign sys_cra_ring_write = kernel_cra_write;
   assign sys_cra_ring_address = kernel_cra_address >> 3;
   assign sys_cra_ring_writedata = kernel_cra_writedata;
   assign sys_cra_ring_byteenable = kernel_cra_byteenable;
   assign kernel_cra_waitrequest = sys_cra_ring_waitrequest;
   assign kernel_cra_readdata = sys_cra_ring_readdata;
   assign kernel_cra_readdatavalid = sys_cra_ring_readdatavalid;
endmodule

