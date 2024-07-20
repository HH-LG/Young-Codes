package require -exact qsys 15.0
set_module_property NAME vector_add_buffers_report_a_di
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property GROUP oneAPI
set_module_property DISPLAY_NAME vector_add_buffers_report_a_di
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property SUPPORTED_DEVICE_FAMILIES {"Agilex"}
#### Synthesis fileset
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL vector_add_buffers_report_a_di
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
add_fileset_file "vector_add_buffers_report_a_di.sv" SYSTEM_VERILOG PATH "./vector_add_buffers_report_a_di.sv"
add_fileset_file "acl_work_group_dispatcher.v" SYSTEM_VERILOG PATH "./ip/acl_work_group_dispatcher.v"
add_fileset_file "acl_kernel_finish_detector.v" SYSTEM_VERILOG PATH "./ip/acl_kernel_finish_detector.v"
add_fileset_file "acl_multistage_accumulator.v" SYSTEM_VERILOG PATH "./ip/acl_multistage_accumulator.v"
add_fileset_file "acl_reset_handler.sv" SYSTEM_VERILOG PATH "./ip/acl_reset_handler.sv"
add_fileset_file "acl_std_synchronizer_nocut.v" SYSTEM_VERILOG PATH "./ip/acl_std_synchronizer_nocut.v"
add_fileset_file "acl_fanout_pipeline.sv" SYSTEM_VERILOG PATH "./ip/acl_fanout_pipeline.sv"
add_fileset_file "acl_ecc_pkg.sv" SYSTEM_VERILOG PATH "./ip/acl_ecc_pkg.sv"
add_fileset_file "acl_id_iterator.v" SYSTEM_VERILOG PATH "./ip/acl_id_iterator.v"
add_fileset_file "acl_work_item_iterator.v" SYSTEM_VERILOG PATH "./ip/acl_work_item_iterator.v"
add_fileset_file "acl_multistage_adder.v" SYSTEM_VERILOG PATH "./ip/acl_multistage_adder.v"
add_fileset_file "acl_shift_register.v" SYSTEM_VERILOG PATH "./ip/acl_shift_register.v"
add_fileset_file "acl_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_fifo.v"
add_fileset_file "acl_fifo_stall_valid_lookahead.sv" SYSTEM_VERILOG PATH "./ip/acl_fifo_stall_valid_lookahead.sv"
add_fileset_file "acl_scfifo_wrapped.sv" SYSTEM_VERILOG PATH "./ip/acl_scfifo_wrapped.sv"
add_fileset_file "acl_ecc_encoder.sv" SYSTEM_VERILOG PATH "./ip/acl_ecc_encoder.sv"
add_fileset_file "acl_ecc_decoder.sv" SYSTEM_VERILOG PATH "./ip/acl_ecc_decoder.sv"
add_fileset_file "dspba_library_ver.sv" SYSTEM_VERILOG PATH "./windows64/lib/dspba/Libraries/sv/base/dspba_library_ver.sv"
add_fileset_file "acl_data_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_data_fifo.v"
add_fileset_file "acl_altera_syncram_wrapped.sv" SYSTEM_VERILOG PATH "./ip/acl_altera_syncram_wrapped.sv"
add_fileset_file "acl_ll_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_ll_fifo.v"
add_fileset_file "acl_ll_ram_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_ll_ram_fifo.v"
add_fileset_file "acl_valid_fifo_counter.v" SYSTEM_VERILOG PATH "./ip/acl_valid_fifo_counter.v"
add_fileset_file "acl_dspba_valid_fifo_counter.v" SYSTEM_VERILOG PATH "./ip/acl_dspba_valid_fifo_counter.v"
add_fileset_file "acl_staging_reg.v" SYSTEM_VERILOG PATH "./ip/acl_staging_reg.v"
add_fileset_file "hld_fifo.sv" SYSTEM_VERILOG PATH "./ip/hld_fifo.sv"
add_fileset_file "acl_mid_speed_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_mid_speed_fifo.sv"
add_fileset_file "acl_latency_one_ram_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_latency_one_ram_fifo.sv"
add_fileset_file "acl_latency_zero_ram_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_latency_zero_ram_fifo.sv"
add_fileset_file "hld_fifo_zero_width.sv" SYSTEM_VERILOG PATH "./ip/hld_fifo_zero_width.sv"
add_fileset_file "acl_high_speed_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_high_speed_fifo.sv"
add_fileset_file "acl_low_latency_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_low_latency_fifo.sv"
add_fileset_file "acl_zero_latency_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_zero_latency_fifo.sv"
add_fileset_file "acl_tessellated_incr_decr_threshold.sv" SYSTEM_VERILOG PATH "./ip/acl_tessellated_incr_decr_threshold.sv"
add_fileset_file "acl_tessellated_incr_lookahead.sv" SYSTEM_VERILOG PATH "./ip/acl_tessellated_incr_lookahead.sv"
add_fileset_file "acl_lfsr.sv" SYSTEM_VERILOG PATH "./ip/acl_lfsr.sv"
add_fileset_file "acl_mlab_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_mlab_fifo.sv"
add_fileset_file "acl_parameter_assert.svh" SYSTEM_VERILOG PATH "./ip/acl_parameter_assert.svh"
add_fileset_file "acl_dspba_buffer.v" SYSTEM_VERILOG PATH "./ip/acl_dspba_buffer.v"
add_fileset_file "acl_full_detector.v" SYSTEM_VERILOG PATH "./ip/acl_full_detector.v"
add_fileset_file "acl_tessellated_incr_decr_decr.sv" SYSTEM_VERILOG PATH "./ip/acl_tessellated_incr_decr_decr.sv"
add_fileset_file "lsu_top.v" SYSTEM_VERILOG PATH "./ip/lsu_top.v"
add_fileset_file "lsu_permute_address.v" SYSTEM_VERILOG PATH "./ip/lsu_permute_address.v"
add_fileset_file "lsu_pipelined.v" SYSTEM_VERILOG PATH "./ip/lsu_pipelined.v"
add_fileset_file "lsu_enabled.v" SYSTEM_VERILOG PATH "./ip/lsu_enabled.v"
add_fileset_file "lsu_basic_coalescer.v" SYSTEM_VERILOG PATH "./ip/lsu_basic_coalescer.v"
add_fileset_file "lsu_simple.v" SYSTEM_VERILOG PATH "./ip/lsu_simple.v"
add_fileset_file "lsu_streaming.v" SYSTEM_VERILOG PATH "./ip/lsu_streaming.v"
add_fileset_file "lsu_burst_host.v" SYSTEM_VERILOG PATH "./ip/lsu_burst_host.v"
add_fileset_file "lsu_bursting_load_stores.v" SYSTEM_VERILOG PATH "./ip/lsu_bursting_load_stores.v"
add_fileset_file "lsu_non_aligned_write.v" SYSTEM_VERILOG PATH "./ip/lsu_non_aligned_write.v"
add_fileset_file "lsu_read_cache.v" SYSTEM_VERILOG PATH "./ip/lsu_read_cache.v"
add_fileset_file "lsu_atomic.v" SYSTEM_VERILOG PATH "./ip/lsu_atomic.v"
add_fileset_file "lsu_prefetch_block.v" SYSTEM_VERILOG PATH "./ip/lsu_prefetch_block.v"
add_fileset_file "lsu_wide_wrapper.v" SYSTEM_VERILOG PATH "./ip/lsu_wide_wrapper.v"
add_fileset_file "lsu_streaming_prefetch.v" SYSTEM_VERILOG PATH "./ip/lsu_streaming_prefetch.v"
add_fileset_file "acl_aligned_burst_coalesced_lsu.v" SYSTEM_VERILOG PATH "./ip/acl_aligned_burst_coalesced_lsu.v"
add_fileset_file "acl_toggle_detect.v" SYSTEM_VERILOG PATH "./ip/acl_toggle_detect.v"
add_fileset_file "acl_debug_mem.v" SYSTEM_VERILOG PATH "./ip/acl_debug_mem.v"
add_fileset_file "lsu_burst_coalesced_pipelined_write.sv" SYSTEM_VERILOG PATH "./ip/lsu_burst_coalesced_pipelined_write.sv"
add_fileset_file "lsu_burst_coalesced_pipelined_read.sv" SYSTEM_VERILOG PATH "./ip/lsu_burst_coalesced_pipelined_read.sv"
add_fileset_file "hld_global_load_store.sv" SYSTEM_VERILOG PATH "./ip/hld_global_load_store.sv"
add_fileset_file "hld_lsu.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu.sv"
add_fileset_file "hld_lsu_burst_coalescer.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_burst_coalescer.sv"
add_fileset_file "hld_lsu_coalescer_dynamic_timeout.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_coalescer_dynamic_timeout.sv"
add_fileset_file "hld_lsu_data_aligner.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_data_aligner.sv"
add_fileset_file "hld_lsu_read_cache.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_read_cache.sv"
add_fileset_file "hld_lsu_read_data_alignment.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_read_data_alignment.sv"
add_fileset_file "hld_lsu_unaligned_controller.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_unaligned_controller.sv"
add_fileset_file "hld_lsu_word_coalescer.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_word_coalescer.sv"
add_fileset_file "hld_lsu_write_data_alignment.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_write_data_alignment.sv"
add_fileset_file "hld_lsu_write_kernel_downstream.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_write_kernel_downstream.sv"
add_fileset_file "acl_shift_register_no_reset.sv" SYSTEM_VERILOG PATH "./ip/acl_shift_register_no_reset.sv"
add_fileset_file "acl_sync.sv" SYSTEM_VERILOG PATH "./ip/acl_sync.sv"
add_fileset_file "hld_sim_latency_tracker.sv" SYSTEM_VERILOG PATH "./ip/hld_sim_latency_tracker.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000lr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000lr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001n.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001n.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v0000000.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v0000000.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000h.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000h.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000e.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000e.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001e.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001e.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002e.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002e.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000n.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000n.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000003r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000003r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000004r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000004r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000005r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000005r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000o.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000o.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000006r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000006r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000007r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000007r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000008r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000008r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000009r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000009r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ar.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ar.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000br.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000br.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001o.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001o.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000cr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000cr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000dr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000dr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000er.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000er.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000fr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000fr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000gr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000gr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000hr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000hr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ir.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ir.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000jr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000jr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002o.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002o.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000kr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000kr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000t.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000t.sv"
add_fileset_file "acl_start_signal_chain_element.v" SYSTEM_VERILOG PATH "./ip/acl_start_signal_chain_element.v"
add_fileset_file "acl_avm_to_ic.v" SYSTEM_VERILOG PATH "./ip/acl_avm_to_ic.v"
add_fileset_file "acl_ic_host_endpoint.v" SYSTEM_VERILOG PATH "./ip/acl_ic_host_endpoint.v"
add_fileset_file "acl_arb_intf.v" SYSTEM_VERILOG PATH "./ip/acl_arb_intf.v"
add_fileset_file "acl_ic_intf.v" SYSTEM_VERILOG PATH "./ip/acl_ic_intf.v"
add_fileset_file "acl_ic_agent_endpoint.v" SYSTEM_VERILOG PATH "./ip/acl_ic_agent_endpoint.v"
add_fileset_file "acl_ic_agent_rrp.v" SYSTEM_VERILOG PATH "./ip/acl_ic_agent_rrp.v"
add_fileset_file "acl_ic_agent_wrp.v" SYSTEM_VERILOG PATH "./ip/acl_ic_agent_wrp.v"
add_fileset_file "acl_ic_mem_router.v" SYSTEM_VERILOG PATH "./ip/acl_ic_mem_router.v"
add_fileset_file "acl_arb2.v" SYSTEM_VERILOG PATH "./ip/acl_arb2.v"
add_fileset_file "acl_ic_to_avm.v" SYSTEM_VERILOG PATH "./ip/acl_ic_to_avm.v"
add_fileset_file "cra_ring_node.sv" SYSTEM_VERILOG PATH "./ip/cra_ring_node.sv"
add_fileset_file "cra_ring_root.sv" SYSTEM_VERILOG PATH "./ip/cra_ring_root.sv"
add_fileset_file "cra_ring_rom.sv" SYSTEM_VERILOG PATH "./ip/cra_ring_rom.sv"
add_fileset_file "acl_rom_module.v" SYSTEM_VERILOG PATH "./ip/acl_rom_module.v"
#### Simulation fileset
add_fileset SIM_VERILOG SIM_VERILOG "" ""
set_fileset_property SIM_VERILOG TOP_LEVEL vector_add_buffers_report_a_di
set_fileset_property SIM_VERILOG ENABLE_RELATIVE_INCLUDE_PATHS false
add_fileset_file "vector_add_buffers_report_a_di.sv" SYSTEM_VERILOG PATH "./vector_add_buffers_report_a_di.sv"
add_fileset_file "acl_work_group_dispatcher.v" SYSTEM_VERILOG PATH "./ip/acl_work_group_dispatcher.v"
add_fileset_file "acl_kernel_finish_detector.v" SYSTEM_VERILOG PATH "./ip/acl_kernel_finish_detector.v"
add_fileset_file "acl_multistage_accumulator.v" SYSTEM_VERILOG PATH "./ip/acl_multistage_accumulator.v"
add_fileset_file "acl_reset_handler.sv" SYSTEM_VERILOG PATH "./ip/acl_reset_handler.sv"
add_fileset_file "acl_std_synchronizer_nocut.v" SYSTEM_VERILOG PATH "./ip/acl_std_synchronizer_nocut.v"
add_fileset_file "acl_fanout_pipeline.sv" SYSTEM_VERILOG PATH "./ip/acl_fanout_pipeline.sv"
add_fileset_file "acl_ecc_pkg.sv" SYSTEM_VERILOG PATH "./ip/acl_ecc_pkg.sv"
add_fileset_file "acl_id_iterator.v" SYSTEM_VERILOG PATH "./ip/acl_id_iterator.v"
add_fileset_file "acl_work_item_iterator.v" SYSTEM_VERILOG PATH "./ip/acl_work_item_iterator.v"
add_fileset_file "acl_multistage_adder.v" SYSTEM_VERILOG PATH "./ip/acl_multistage_adder.v"
add_fileset_file "acl_shift_register.v" SYSTEM_VERILOG PATH "./ip/acl_shift_register.v"
add_fileset_file "acl_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_fifo.v"
add_fileset_file "acl_fifo_stall_valid_lookahead.sv" SYSTEM_VERILOG PATH "./ip/acl_fifo_stall_valid_lookahead.sv"
add_fileset_file "acl_scfifo_wrapped.sv" SYSTEM_VERILOG PATH "./ip/acl_scfifo_wrapped.sv"
add_fileset_file "acl_ecc_encoder.sv" SYSTEM_VERILOG PATH "./ip/acl_ecc_encoder.sv"
add_fileset_file "acl_ecc_decoder.sv" SYSTEM_VERILOG PATH "./ip/acl_ecc_decoder.sv"
add_fileset_file "dspba_library_ver.sv" SYSTEM_VERILOG PATH "./windows64/lib/dspba/Libraries/sv/base/dspba_library_ver.sv"
add_fileset_file "acl_data_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_data_fifo.v"
add_fileset_file "acl_altera_syncram_wrapped.sv" SYSTEM_VERILOG PATH "./ip/acl_altera_syncram_wrapped.sv"
add_fileset_file "acl_ll_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_ll_fifo.v"
add_fileset_file "acl_ll_ram_fifo.v" SYSTEM_VERILOG PATH "./ip/acl_ll_ram_fifo.v"
add_fileset_file "acl_valid_fifo_counter.v" SYSTEM_VERILOG PATH "./ip/acl_valid_fifo_counter.v"
add_fileset_file "acl_dspba_valid_fifo_counter.v" SYSTEM_VERILOG PATH "./ip/acl_dspba_valid_fifo_counter.v"
add_fileset_file "acl_staging_reg.v" SYSTEM_VERILOG PATH "./ip/acl_staging_reg.v"
add_fileset_file "hld_fifo.sv" SYSTEM_VERILOG PATH "./ip/hld_fifo.sv"
add_fileset_file "acl_mid_speed_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_mid_speed_fifo.sv"
add_fileset_file "acl_latency_one_ram_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_latency_one_ram_fifo.sv"
add_fileset_file "acl_latency_zero_ram_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_latency_zero_ram_fifo.sv"
add_fileset_file "hld_fifo_zero_width.sv" SYSTEM_VERILOG PATH "./ip/hld_fifo_zero_width.sv"
add_fileset_file "acl_high_speed_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_high_speed_fifo.sv"
add_fileset_file "acl_low_latency_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_low_latency_fifo.sv"
add_fileset_file "acl_zero_latency_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_zero_latency_fifo.sv"
add_fileset_file "acl_tessellated_incr_decr_threshold.sv" SYSTEM_VERILOG PATH "./ip/acl_tessellated_incr_decr_threshold.sv"
add_fileset_file "acl_tessellated_incr_lookahead.sv" SYSTEM_VERILOG PATH "./ip/acl_tessellated_incr_lookahead.sv"
add_fileset_file "acl_lfsr.sv" SYSTEM_VERILOG PATH "./ip/acl_lfsr.sv"
add_fileset_file "acl_mlab_fifo.sv" SYSTEM_VERILOG PATH "./ip/acl_mlab_fifo.sv"
add_fileset_file "acl_parameter_assert.svh" SYSTEM_VERILOG PATH "./ip/acl_parameter_assert.svh"
add_fileset_file "acl_dspba_buffer.v" SYSTEM_VERILOG PATH "./ip/acl_dspba_buffer.v"
add_fileset_file "acl_full_detector.v" SYSTEM_VERILOG PATH "./ip/acl_full_detector.v"
add_fileset_file "acl_tessellated_incr_decr_decr.sv" SYSTEM_VERILOG PATH "./ip/acl_tessellated_incr_decr_decr.sv"
add_fileset_file "lsu_top.v" SYSTEM_VERILOG PATH "./ip/lsu_top.v"
add_fileset_file "lsu_permute_address.v" SYSTEM_VERILOG PATH "./ip/lsu_permute_address.v"
add_fileset_file "lsu_pipelined.v" SYSTEM_VERILOG PATH "./ip/lsu_pipelined.v"
add_fileset_file "lsu_enabled.v" SYSTEM_VERILOG PATH "./ip/lsu_enabled.v"
add_fileset_file "lsu_basic_coalescer.v" SYSTEM_VERILOG PATH "./ip/lsu_basic_coalescer.v"
add_fileset_file "lsu_simple.v" SYSTEM_VERILOG PATH "./ip/lsu_simple.v"
add_fileset_file "lsu_streaming.v" SYSTEM_VERILOG PATH "./ip/lsu_streaming.v"
add_fileset_file "lsu_burst_host.v" SYSTEM_VERILOG PATH "./ip/lsu_burst_host.v"
add_fileset_file "lsu_bursting_load_stores.v" SYSTEM_VERILOG PATH "./ip/lsu_bursting_load_stores.v"
add_fileset_file "lsu_non_aligned_write.v" SYSTEM_VERILOG PATH "./ip/lsu_non_aligned_write.v"
add_fileset_file "lsu_read_cache.v" SYSTEM_VERILOG PATH "./ip/lsu_read_cache.v"
add_fileset_file "lsu_atomic.v" SYSTEM_VERILOG PATH "./ip/lsu_atomic.v"
add_fileset_file "lsu_prefetch_block.v" SYSTEM_VERILOG PATH "./ip/lsu_prefetch_block.v"
add_fileset_file "lsu_wide_wrapper.v" SYSTEM_VERILOG PATH "./ip/lsu_wide_wrapper.v"
add_fileset_file "lsu_streaming_prefetch.v" SYSTEM_VERILOG PATH "./ip/lsu_streaming_prefetch.v"
add_fileset_file "acl_aligned_burst_coalesced_lsu.v" SYSTEM_VERILOG PATH "./ip/acl_aligned_burst_coalesced_lsu.v"
add_fileset_file "acl_toggle_detect.v" SYSTEM_VERILOG PATH "./ip/acl_toggle_detect.v"
add_fileset_file "acl_debug_mem.v" SYSTEM_VERILOG PATH "./ip/acl_debug_mem.v"
add_fileset_file "lsu_burst_coalesced_pipelined_write.sv" SYSTEM_VERILOG PATH "./ip/lsu_burst_coalesced_pipelined_write.sv"
add_fileset_file "lsu_burst_coalesced_pipelined_read.sv" SYSTEM_VERILOG PATH "./ip/lsu_burst_coalesced_pipelined_read.sv"
add_fileset_file "hld_global_load_store.sv" SYSTEM_VERILOG PATH "./ip/hld_global_load_store.sv"
add_fileset_file "hld_lsu.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu.sv"
add_fileset_file "hld_lsu_burst_coalescer.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_burst_coalescer.sv"
add_fileset_file "hld_lsu_coalescer_dynamic_timeout.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_coalescer_dynamic_timeout.sv"
add_fileset_file "hld_lsu_data_aligner.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_data_aligner.sv"
add_fileset_file "hld_lsu_read_cache.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_read_cache.sv"
add_fileset_file "hld_lsu_read_data_alignment.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_read_data_alignment.sv"
add_fileset_file "hld_lsu_unaligned_controller.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_unaligned_controller.sv"
add_fileset_file "hld_lsu_word_coalescer.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_word_coalescer.sv"
add_fileset_file "hld_lsu_write_data_alignment.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_write_data_alignment.sv"
add_fileset_file "hld_lsu_write_kernel_downstream.sv" SYSTEM_VERILOG PATH "./ip/hld_lsu_write_kernel_downstream.sv"
add_fileset_file "acl_shift_register_no_reset.sv" SYSTEM_VERILOG PATH "./ip/acl_shift_register_no_reset.sv"
add_fileset_file "acl_sync.sv" SYSTEM_VERILOG PATH "./ip/acl_sync.sv"
add_fileset_file "hld_sim_latency_tracker.sv" SYSTEM_VERILOG PATH "./ip/hld_sim_latency_tracker.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000lr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000lr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001n.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001n.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v0000000.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v0000000.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000h.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000h.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000e.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000e.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001e.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001e.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002e.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002e.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000n.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000n.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000003r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000003r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000004r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000004r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000005r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000005r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000o.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000o.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000006r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000006r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000007r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000007r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000008r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000008r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000009r.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000009r.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ar.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ar.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000br.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000br.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001o.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000001o.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000cr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000cr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000dr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000dr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000er.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000er.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000fr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000fr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000gr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000gr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000hr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000hr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ir.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000ir.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000jr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000jr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002o.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000002o.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000kr.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v00000kr.sv"
add_fileset_file "ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000t.sv" SYSTEM_VERILOG PATH "./kernel_hdl/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6ve000000E_clESA_EUlT_E/ZTSZZ9VectorAddRN4sycl3_V15queueERKSt6v000000t.sv"
add_fileset_file "acl_start_signal_chain_element.v" SYSTEM_VERILOG PATH "./ip/acl_start_signal_chain_element.v"
add_fileset_file "acl_avm_to_ic.v" SYSTEM_VERILOG PATH "./ip/acl_avm_to_ic.v"
add_fileset_file "acl_ic_host_endpoint.v" SYSTEM_VERILOG PATH "./ip/acl_ic_host_endpoint.v"
add_fileset_file "acl_arb_intf.v" SYSTEM_VERILOG PATH "./ip/acl_arb_intf.v"
add_fileset_file "acl_ic_intf.v" SYSTEM_VERILOG PATH "./ip/acl_ic_intf.v"
add_fileset_file "acl_ic_agent_endpoint.v" SYSTEM_VERILOG PATH "./ip/acl_ic_agent_endpoint.v"
add_fileset_file "acl_ic_agent_rrp.v" SYSTEM_VERILOG PATH "./ip/acl_ic_agent_rrp.v"
add_fileset_file "acl_ic_agent_wrp.v" SYSTEM_VERILOG PATH "./ip/acl_ic_agent_wrp.v"
add_fileset_file "acl_ic_mem_router.v" SYSTEM_VERILOG PATH "./ip/acl_ic_mem_router.v"
add_fileset_file "acl_arb2.v" SYSTEM_VERILOG PATH "./ip/acl_arb2.v"
add_fileset_file "acl_ic_to_avm.v" SYSTEM_VERILOG PATH "./ip/acl_ic_to_avm.v"
add_fileset_file "cra_ring_node.sv" SYSTEM_VERILOG PATH "./ip/cra_ring_node.sv"
add_fileset_file "cra_ring_root.sv" SYSTEM_VERILOG PATH "./ip/cra_ring_root.sv"
add_fileset_file "cra_ring_rom.sv" SYSTEM_VERILOG PATH "./ip/cra_ring_rom.sv"
add_fileset_file "acl_rom_module.v" SYSTEM_VERILOG PATH "./ip/acl_rom_module.v"
#### Primary clock for the component
add_interface clock clock end
set_interface_property clock ENABLED true
add_interface_port clock clock clk input 1

#### resetn
add_interface resetn reset end
set_interface_property resetn associatedClock clock
set_interface_property resetn synchronousEdges BOTH
add_interface_port resetn resetn reset input 1

####  device_exception_bus
add_interface device_exception_bus conduit end
set_interface_property device_exception_bus ENABLED true
set_interface_property device_exception_bus associatedClock clock
set_interface_property device_exception_bus associatedReset resetn
add_interface_port device_exception_bus device_exception_bus data output 64

#### IRQ interfaces kernel_irqs
add_interface kernel_irqs interrupt end
set_interface_property kernel_irqs ENABLED true
set_interface_property kernel_irqs associatedClock clock
add_interface_port kernel_irqs kernel_irqs irq output 1

#### Host interface avm_mem_gmem0_0_port_0_0_rw with base address 0
add_interface avm_mem_gmem0_0_port_0_0_rw avalon start
set_interface_property avm_mem_gmem0_0_port_0_0_rw ENABLED true
set_interface_property avm_mem_gmem0_0_port_0_0_rw associatedClock clock
set_interface_property avm_mem_gmem0_0_port_0_0_rw associatedReset resetn
set_interface_property avm_mem_gmem0_0_port_0_0_rw burstOnBurstBoundariesOnly false
set_interface_property avm_mem_gmem0_0_port_0_0_rw doStreamReads false
set_interface_property avm_mem_gmem0_0_port_0_0_rw doStreamWrites false
set_interface_property avm_mem_gmem0_0_port_0_0_rw linewrapBursts false
set_interface_property avm_mem_gmem0_0_port_0_0_rw readWaitTime 0
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_address address output 35
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_byteenable byteenable output 8
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_readdatavalid readdatavalid input 1
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_read read output 1
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_readdata readdata input 64
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_write write output 1
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_writedata writedata output 64
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_waitrequest waitrequest input 1
add_interface_port avm_mem_gmem0_0_port_0_0_rw avm_mem_gmem0_0_port_0_0_rw_burstcount burstcount output 1

#### Agent interface csr_ring_root_avs
add_interface csr_ring_root_avs avalon end
set_interface_property csr_ring_root_avs ENABLED true
set_interface_property csr_ring_root_avs associatedClock clock
set_interface_property csr_ring_root_avs associatedReset resetn
set_interface_property csr_ring_root_avs addressAlignment DYNAMIC
set_interface_property csr_ring_root_avs burstOnBurstBoundariesOnly false
set_interface_property csr_ring_root_avs explicitAddressSpan 0
set_interface_property csr_ring_root_avs holdTime 0
set_interface_property csr_ring_root_avs isMemoryDevice false
set_interface_property csr_ring_root_avs isNonVolatileStorage false
set_interface_property csr_ring_root_avs linewrapBursts false
set_interface_property csr_ring_root_avs maximumPendingReadTransactions 1
set_interface_property csr_ring_root_avs printableDevice false
set_interface_property csr_ring_root_avs readLatency 0
set_interface_property csr_ring_root_avs readWaitTime 0
set_interface_property csr_ring_root_avs setupTime 0
set_interface_property csr_ring_root_avs timingUnits Cycles
set_interface_property csr_ring_root_avs writeWaitTime 0
set_interface_assignment csr_ring_root_avs hls.cosim.name {}
add_interface_port csr_ring_root_avs csr_ring_root_avs_read read input 1
add_interface_port csr_ring_root_avs csr_ring_root_avs_readdata readdata output 64
add_interface_port csr_ring_root_avs csr_ring_root_avs_readdatavalid readdatavalid output 1
add_interface_port csr_ring_root_avs csr_ring_root_avs_write write input 1
add_interface_port csr_ring_root_avs csr_ring_root_avs_writedata writedata input 64
add_interface_port csr_ring_root_avs csr_ring_root_avs_address address input 5
add_interface_port csr_ring_root_avs csr_ring_root_avs_byteenable byteenable input 8
add_interface_port csr_ring_root_avs csr_ring_root_avs_waitrequest waitrequest output 1

#### Quartus settings (QIP strings)
set_qip_strings { "set_instance_assignment -entity \"%entityName%\" -library \"%libraryName%\" -name AUTO_SHIFT_REGISTER_RECOGNITION OFF -to *_NO_SHIFT_REG*"  }
