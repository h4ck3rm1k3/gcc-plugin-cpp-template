ACLOCAL_AMFLAGS = -I m4
GCCPLUGINS_DIR = `${CXX} -print-file-name=plugin`
INCDIR=-I /usr/include/raptor2 -I /usr/include/rasqal
AM_CPPFLAGS = -I $(GCCPLUGINS_DIR)/include $(INCDIR) -I $(srcdir)/../libgdl $(GMP_INC) -Itree-nodes -g3 
AM_CFLAGS = -Wall -std=gnu++14 -g3 $(INCDIR)
AM_CXXFLAGS = -Wall -std=gnu++14 -g3 $(INCDIR)

pkglib_LTLIBRARIES = libtemplate_plugin.la libowl.la

libowl_la_SOURCES = \
	owl/librdfinterface.cpp \
	owl/struct.hpp \
	owl/rdfs.cpp \
	owl/rdf.cpp \
	owl/owl.cpp \
	owl/dc.cpp \
	owl/struct.cpp \
	owl/url.cpp \
	owl/statement.cpp

libtemplate_plugin_la_SOURCES = \
	__callback.cpp \
	callback.cpp \
	callback.hpp \
	callbacks.cpp \
	callbacks.hpp \
	field.cpp \
	field.hpp \
	introspection.cpp \
	introspection.hpp \
	name.cpp \
	name.hpp \
	plugin.cpp \
	record_context.cpp \
	record_context.hpp \
	switchcall.hpp \
	tcwrapper.hpp \
	tree-nodes/integer_type.hpp \
	tree-nodes/integer_type.cpp \
	tree-nodes/complex_type.hpp \
	tree-nodes/complex_type.cpp \
	tree-nodes/vector_type.hpp \
	tree-nodes/vector_type.cpp \
	tree-nodes/array_type.hpp \
	tree-nodes/array_type.cpp \
	tree-nodes/record_type.hpp \
	tree-nodes/record_type.cpp \
	tree-nodes/union_type.hpp \
	tree-nodes/union_type.cpp \
	tree-nodes/identifier_node.hpp \
	tree-nodes/identifier_node.cpp \
	tree-nodes/field_decl.hpp \
	tree-nodes/field_decl.cpp \
	tree-nodes/error_mark.hpp \
	tree-nodes/error_mark.cpp \
	tree-nodes/pointer_type.hpp \
	tree-nodes/pointer_type.cpp \
	tree-nodes/reference_type.hpp \
	tree-nodes/reference_type.cpp \
	tree-nodes/type_decl.hpp \
	tree-nodes/type_decl.cpp 

#	 tree-nodes/tree_list.hpp \
#	 tree-nodes/tree_list.cpp \
#	 tree-nodes/tree_vec.hpp \
#	 tree-nodes/tree_vec.cpp \
#	 tree-nodes/block.hpp \
#	 tree-nodes/block.cpp \
#	 tree-nodes/offset_type.hpp \
#	 tree-nodes/offset_type.cpp \
#	 tree-nodes/enumeral_type.hpp \
#	 tree-nodes/enumeral_type.cpp \
#	 tree-nodes/boolean_type.hpp \
#	 tree-nodes/boolean_type.cpp \
#	 tree-nodes/real_type.hpp \
#	 tree-nodes/real_type.cpp \
#	 tree-nodes/nullptr_type.hpp \
#	 tree-nodes/nullptr_type.cpp \
#	 tree-nodes/fixed_point_type.hpp \
#	 tree-nodes/fixed_point_type.cpp \
#	 tree-nodes/qual_union_type.hpp \
#	 tree-nodes/qual_union_type.cpp \
#	 tree-nodes/void_type.hpp \
#	 tree-nodes/void_type.cpp \
#	 tree-nodes/pointer_bounds_type.hpp \
#	 tree-nodes/pointer_bounds_type.cpp \
#	 tree-nodes/function_type.hpp \
#	 tree-nodes/function_type.cpp \
#	 tree-nodes/method_type.hpp \
#	 tree-nodes/method_type.cpp \
#	 tree-nodes/lang_type.hpp \
#	 tree-nodes/lang_type.cpp \
#	 tree-nodes/void_cst.hpp \
#	 tree-nodes/void_cst.cpp \
#	 tree-nodes/integer_cst.hpp \
#	 tree-nodes/integer_cst.cpp \
#	 tree-nodes/real_cst.hpp \
#	 tree-nodes/real_cst.cpp \
#	 tree-nodes/fixed_cst.hpp \
#	 tree-nodes/fixed_cst.cpp \
#	 tree-nodes/complex_cst.hpp \
#	 tree-nodes/complex_cst.cpp \
#	 tree-nodes/vector_cst.hpp \
#	 tree-nodes/vector_cst.cpp \
#	 tree-nodes/string_cst.hpp \
#	 tree-nodes/string_cst.cpp \
#	 tree-nodes/function_decl.hpp \
#	 tree-nodes/function_decl.cpp \
#	 tree-nodes/label_decl.hpp \
#	 tree-nodes/label_decl.cpp \
#	 tree-nodes/var_decl.hpp \
#	 tree-nodes/var_decl.cpp \
#	 tree-nodes/const_decl.hpp \
#	 tree-nodes/const_decl.cpp \
#	 tree-nodes/parm_decl.hpp \
#	 tree-nodes/parm_decl.cpp \
#	 tree-nodes/result_decl.hpp \
#	 tree-nodes/result_decl.cpp \
#	 tree-nodes/debug_expr_decl.hpp \
#	 tree-nodes/debug_expr_decl.cpp \
#	 tree-nodes/namespace_decl.hpp \
#	 tree-nodes/namespace_decl.cpp \
#	 tree-nodes/imported_decl.hpp \
#	 tree-nodes/imported_decl.cpp \
#	 tree-nodes/namelist_decl.hpp \
#	 tree-nodes/namelist_decl.cpp \
#	 tree-nodes/translation_unit_decl.hpp \
#	 tree-nodes/translation_unit_decl.cpp \
#	 tree-nodes/component_ref.hpp \
#	 tree-nodes/component_ref.cpp \
#	 tree-nodes/bit_field_ref.hpp \
#	 tree-nodes/bit_field_ref.cpp \
#	 tree-nodes/array_ref.hpp \
#	 tree-nodes/array_ref.cpp \
#	 tree-nodes/array_range_ref.hpp \
#	 tree-nodes/array_range_ref.cpp \
#	 tree-nodes/realpart_expr.hpp \
#	 tree-nodes/realpart_expr.cpp \
#	 tree-nodes/imagpart_expr.hpp \
#	 tree-nodes/imagpart_expr.cpp \
#	 tree-nodes/view_convert_expr.hpp \
#	 tree-nodes/view_convert_expr.cpp \
#	 tree-nodes/indirect_ref.hpp \
#	 tree-nodes/indirect_ref.cpp \
#	 tree-nodes/obj_type_ref.hpp \
#	 tree-nodes/obj_type_ref.cpp \
#	 tree-nodes/constructor.hpp \
#	 tree-nodes/constructor.cpp \
#	 tree-nodes/compound_expr.hpp \
#	 tree-nodes/compound_expr.cpp \
#	 tree-nodes/modify_expr.hpp \
#	 tree-nodes/modify_expr.cpp \
#	 tree-nodes/init_expr.hpp \
#	 tree-nodes/init_expr.cpp \
#	 tree-nodes/target_expr.hpp \
#	 tree-nodes/target_expr.cpp \
#	 tree-nodes/cond_expr.hpp \
#	 tree-nodes/cond_expr.cpp \
#	 tree-nodes/vec_cond_expr.hpp \
#	 tree-nodes/vec_cond_expr.cpp \
#	 tree-nodes/vec_perm_expr.hpp \
#	 tree-nodes/vec_perm_expr.cpp \
#	 tree-nodes/bind_expr.hpp \
#	 tree-nodes/bind_expr.cpp \
#	 tree-nodes/call_expr.hpp \
#	 tree-nodes/call_expr.cpp \
#	 tree-nodes/with_cleanup_expr.hpp \
#	 tree-nodes/with_cleanup_expr.cpp \
#	 tree-nodes/cleanup_point_expr.hpp \
#	 tree-nodes/cleanup_point_expr.cpp \
#	 tree-nodes/placeholder_expr.hpp \
#	 tree-nodes/placeholder_expr.cpp \
#	 tree-nodes/plus_expr.hpp \
#	 tree-nodes/plus_expr.cpp \
#	 tree-nodes/minus_expr.hpp \
#	 tree-nodes/minus_expr.cpp \
#	 tree-nodes/mult_expr.hpp \
#	 tree-nodes/mult_expr.cpp \
#	 tree-nodes/pointer_plus_expr.hpp \
#	 tree-nodes/pointer_plus_expr.cpp \
#	 tree-nodes/mult_highpart_expr.hpp \
#	 tree-nodes/mult_highpart_expr.cpp \
#	 tree-nodes/trunc_div_expr.hpp \
#	 tree-nodes/trunc_div_expr.cpp \
#	 tree-nodes/ceil_div_expr.hpp \
#	 tree-nodes/ceil_div_expr.cpp \
#	 tree-nodes/floor_div_expr.hpp \
#	 tree-nodes/floor_div_expr.cpp \
#	 tree-nodes/round_div_expr.hpp \
#	 tree-nodes/round_div_expr.cpp \
#	 tree-nodes/trunc_mod_expr.hpp \
#	 tree-nodes/trunc_mod_expr.cpp \
#	 tree-nodes/ceil_mod_expr.hpp \
#	 tree-nodes/ceil_mod_expr.cpp \
#	 tree-nodes/floor_mod_expr.hpp \
#	 tree-nodes/floor_mod_expr.cpp \
#	 tree-nodes/round_mod_expr.hpp \
#	 tree-nodes/round_mod_expr.cpp \
#	 tree-nodes/rdiv_expr.hpp \
#	 tree-nodes/rdiv_expr.cpp \
#	 tree-nodes/exact_div_expr.hpp \
#	 tree-nodes/exact_div_expr.cpp \
#	 tree-nodes/fix_trunc_expr.hpp \
#	 tree-nodes/fix_trunc_expr.cpp \
#	 tree-nodes/float_expr.hpp \
#	 tree-nodes/float_expr.cpp \
#	 tree-nodes/negate_expr.hpp \
#	 tree-nodes/negate_expr.cpp \
#	 tree-nodes/min_expr.hpp \
#	 tree-nodes/min_expr.cpp \
#	 tree-nodes/max_expr.hpp \
#	 tree-nodes/max_expr.cpp \
#	 tree-nodes/abs_expr.hpp \
#	 tree-nodes/abs_expr.cpp \
#	 tree-nodes/lshift_expr.hpp \
#	 tree-nodes/lshift_expr.cpp \
#	 tree-nodes/rshift_expr.hpp \
#	 tree-nodes/rshift_expr.cpp \
#	 tree-nodes/lrotate_expr.hpp \
#	 tree-nodes/lrotate_expr.cpp \
#	 tree-nodes/rrotate_expr.hpp \
#	 tree-nodes/rrotate_expr.cpp \
#	 tree-nodes/bit_ior_expr.hpp \
#	 tree-nodes/bit_ior_expr.cpp \
#	 tree-nodes/bit_xor_expr.hpp \
#	 tree-nodes/bit_xor_expr.cpp \
#	 tree-nodes/bit_and_expr.hpp \
#	 tree-nodes/bit_and_expr.cpp \
#	 tree-nodes/bit_not_expr.hpp \
#	 tree-nodes/bit_not_expr.cpp \
#	 tree-nodes/truth_andif_expr.hpp \
#	 tree-nodes/truth_andif_expr.cpp \
#	 tree-nodes/truth_orif_expr.hpp \
#	 tree-nodes/truth_orif_expr.cpp \
#	 tree-nodes/truth_and_expr.hpp \
#	 tree-nodes/truth_and_expr.cpp \
#	 tree-nodes/truth_or_expr.hpp \
#	 tree-nodes/truth_or_expr.cpp \
#	 tree-nodes/truth_xor_expr.hpp \
#	 tree-nodes/truth_xor_expr.cpp \
#	 tree-nodes/truth_not_expr.hpp \
#	 tree-nodes/truth_not_expr.cpp \
#	 tree-nodes/lt_expr.hpp \
#	 tree-nodes/lt_expr.cpp \
#	 tree-nodes/le_expr.hpp \
#	 tree-nodes/le_expr.cpp \
#	 tree-nodes/gt_expr.hpp \
#	 tree-nodes/gt_expr.cpp \
#	 tree-nodes/ge_expr.hpp \
#	 tree-nodes/ge_expr.cpp \
#	 tree-nodes/eq_expr.hpp \
#	 tree-nodes/eq_expr.cpp \
#	 tree-nodes/ne_expr.hpp \
#	 tree-nodes/ne_expr.cpp \
#	 tree-nodes/unordered_expr.hpp \
#	 tree-nodes/unordered_expr.cpp \
#	 tree-nodes/ordered_expr.hpp \
#	 tree-nodes/ordered_expr.cpp \
#	 tree-nodes/unlt_expr.hpp \
#	 tree-nodes/unlt_expr.cpp \
#	 tree-nodes/unle_expr.hpp \
#	 tree-nodes/unle_expr.cpp \
#	 tree-nodes/ungt_expr.hpp \
#	 tree-nodes/ungt_expr.cpp \
#	 tree-nodes/unge_expr.hpp \
#	 tree-nodes/unge_expr.cpp \
#	 tree-nodes/uneq_expr.hpp \
#	 tree-nodes/uneq_expr.cpp \
#	 tree-nodes/ltgt_expr.hpp \
#	 tree-nodes/ltgt_expr.cpp \
#	 tree-nodes/range_expr.hpp \
#	 tree-nodes/range_expr.cpp \
#	 tree-nodes/paren_expr.hpp \
#	 tree-nodes/paren_expr.cpp \
#	 tree-nodes/convert_expr.hpp \
#	 tree-nodes/convert_expr.cpp \
#	 tree-nodes/addr_space_convert_expr.hpp \
#	 tree-nodes/addr_space_convert_expr.cpp \
#	 tree-nodes/fixed_convert_expr.hpp \
#	 tree-nodes/fixed_convert_expr.cpp \
#	 tree-nodes/nop_expr.hpp \
#	 tree-nodes/nop_expr.cpp \
#	 tree-nodes/non_lvalue_expr.hpp \
#	 tree-nodes/non_lvalue_expr.cpp \
#	 tree-nodes/compound_literal_expr.hpp \
#	 tree-nodes/compound_literal_expr.cpp \
#	 tree-nodes/save_expr.hpp \
#	 tree-nodes/save_expr.cpp \
#	 tree-nodes/addr_expr.hpp \
#	 tree-nodes/addr_expr.cpp \
#	 tree-nodes/fdesc_expr.hpp \
#	 tree-nodes/fdesc_expr.cpp \
#	 tree-nodes/complex_expr.hpp \
#	 tree-nodes/complex_expr.cpp \
#	 tree-nodes/conj_expr.hpp \
#	 tree-nodes/conj_expr.cpp \
#	 tree-nodes/predecrement_expr.hpp \
#	 tree-nodes/predecrement_expr.cpp \
#	 tree-nodes/preincrement_expr.hpp \
#	 tree-nodes/preincrement_expr.cpp \
#	 tree-nodes/postdecrement_expr.hpp \
#	 tree-nodes/postdecrement_expr.cpp \
#	 tree-nodes/postincrement_expr.hpp \
#	 tree-nodes/postincrement_expr.cpp \
#	 tree-nodes/va_arg_expr.hpp \
#	 tree-nodes/va_arg_expr.cpp \
#	 tree-nodes/try_catch_expr.hpp \
#	 tree-nodes/try_catch_expr.cpp \
#	 tree-nodes/try_finally_expr.hpp \
#	 tree-nodes/try_finally_expr.cpp \
#	 tree-nodes/decl_expr.hpp \
#	 tree-nodes/decl_expr.cpp \
#	 tree-nodes/label_expr.hpp \
#	 tree-nodes/label_expr.cpp \
#	 tree-nodes/goto_expr.hpp \
#	 tree-nodes/goto_expr.cpp \
#	 tree-nodes/return_expr.hpp \
#	 tree-nodes/return_expr.cpp \
#	 tree-nodes/exit_expr.hpp \
#	 tree-nodes/exit_expr.cpp \
#	 tree-nodes/loop_expr.hpp \
#	 tree-nodes/loop_expr.cpp \
#	 tree-nodes/switch_expr.hpp \
#	 tree-nodes/switch_expr.cpp \
#	 tree-nodes/case_label_expr.hpp \
#	 tree-nodes/case_label_expr.cpp \
#	 tree-nodes/asm_expr.hpp \
#	 tree-nodes/asm_expr.cpp \
#	 tree-nodes/ssa_name.hpp \
#	 tree-nodes/ssa_name.cpp \
#	 tree-nodes/catch_expr.hpp \
#	 tree-nodes/catch_expr.cpp \
#	 tree-nodes/eh_filter_expr.hpp \
#	 tree-nodes/eh_filter_expr.cpp \
#	 tree-nodes/scev_known.hpp \
#	 tree-nodes/scev_known.cpp \
#	 tree-nodes/scev_not_known.hpp \
#	 tree-nodes/scev_not_known.cpp \
#	 tree-nodes/polynomial_chrec.hpp \
#	 tree-nodes/polynomial_chrec.cpp \
#	 tree-nodes/statement_list.hpp \
#	 tree-nodes/statement_list.cpp \
#	 tree-nodes/assert_expr.hpp \
#	 tree-nodes/assert_expr.cpp \
#	 tree-nodes/tree_binfo.hpp \
#	 tree-nodes/tree_binfo.cpp \
#	 tree-nodes/with_size_expr.hpp \
#	 tree-nodes/with_size_expr.cpp \
#	 tree-nodes/realign_load_expr.hpp \
#	 tree-nodes/realign_load_expr.cpp \
#	 tree-nodes/target_mem_ref.hpp \
#	 tree-nodes/target_mem_ref.cpp \
#	 tree-nodes/mem_ref.hpp \
#	 tree-nodes/mem_ref.cpp \
#	 tree-nodes/oacc_parallel.hpp \
#	 tree-nodes/oacc_parallel.cpp \
#	 tree-nodes/oacc_kernels.hpp \
#	 tree-nodes/oacc_kernels.cpp \
#	 tree-nodes/oacc_data.hpp \
#	 tree-nodes/oacc_data.cpp \
#	 tree-nodes/oacc_host_data.hpp \
#	 tree-nodes/oacc_host_data.cpp \
#	 tree-nodes/omp_parallel.hpp \
#	 tree-nodes/omp_parallel.cpp \
#	 tree-nodes/omp_task.hpp \
#	 tree-nodes/omp_task.cpp \
#	 tree-nodes/omp_for.hpp \
#	 tree-nodes/omp_for.cpp \
#	 tree-nodes/omp_simd.hpp \
#	 tree-nodes/omp_simd.cpp \
#	 tree-nodes/cilk_simd.hpp \
#	 tree-nodes/cilk_simd.cpp \
#	 tree-nodes/cilk_for.hpp \
#	 tree-nodes/cilk_for.cpp \
#	 tree-nodes/omp_distribute.hpp \
#	 tree-nodes/omp_distribute.cpp \
#	 tree-nodes/oacc_loop.hpp \
#	 tree-nodes/oacc_loop.cpp \
#	 tree-nodes/omp_teams.hpp \
#	 tree-nodes/omp_teams.cpp \
#	 tree-nodes/omp_target_data.hpp \
#	 tree-nodes/omp_target_data.cpp \
#	 tree-nodes/omp_target.hpp \
#	 tree-nodes/omp_target.cpp \
#	 tree-nodes/omp_sections.hpp \
#	 tree-nodes/omp_sections.cpp \
#	 tree-nodes/omp_single.hpp \
#	 tree-nodes/omp_single.cpp \
#	 tree-nodes/omp_section.hpp \
#	 tree-nodes/omp_section.cpp \
#	 tree-nodes/omp_master.hpp \
#	 tree-nodes/omp_master.cpp \
#	 tree-nodes/omp_taskgroup.hpp \
#	 tree-nodes/omp_taskgroup.cpp \
#	 tree-nodes/omp_ordered.hpp \
#	 tree-nodes/omp_ordered.cpp \
#	 tree-nodes/omp_critical.hpp \
#	 tree-nodes/omp_critical.cpp \
#	 tree-nodes/oacc_cache.hpp \
#	 tree-nodes/oacc_cache.cpp \
#	 tree-nodes/oacc_declare.hpp \
#	 tree-nodes/oacc_declare.cpp \
#	 tree-nodes/oacc_enter_data.hpp \
#	 tree-nodes/oacc_enter_data.cpp \
#	 tree-nodes/oacc_exit_data.hpp \
#	 tree-nodes/oacc_exit_data.cpp \
#	 tree-nodes/oacc_update.hpp \
#	 tree-nodes/oacc_update.cpp \
#	 tree-nodes/omp_target_update.hpp \
#	 tree-nodes/omp_target_update.cpp \
#	 tree-nodes/omp_atomic.hpp \
#	 tree-nodes/omp_atomic.cpp \
#	 tree-nodes/omp_atomic_read.hpp \
#	 tree-nodes/omp_atomic_read.cpp \
#	 tree-nodes/omp_atomic_capture_old.hpp \
#	 tree-nodes/omp_atomic_capture_old.cpp \
#	 tree-nodes/omp_atomic_capture_new.hpp \
#	 tree-nodes/omp_atomic_capture_new.cpp \
#	 tree-nodes/omp_clause.hpp \
#	 tree-nodes/omp_clause.cpp \
#	 tree-nodes/transaction_expr.hpp \
#	 tree-nodes/transaction_expr.cpp \
#	 tree-nodes/reduc_max_expr.hpp \
#	 tree-nodes/reduc_max_expr.cpp \
#	 tree-nodes/reduc_min_expr.hpp \
#	 tree-nodes/reduc_min_expr.cpp \
#	 tree-nodes/reduc_plus_expr.hpp \
#	 tree-nodes/reduc_plus_expr.cpp \
#	 tree-nodes/dot_prod_expr.hpp \
#	 tree-nodes/dot_prod_expr.cpp \
#	 tree-nodes/widen_sum_expr.hpp \
#	 tree-nodes/widen_sum_expr.cpp \
#	 tree-nodes/sad_expr.hpp \
#	 tree-nodes/sad_expr.cpp \
#	 tree-nodes/widen_mult_expr.hpp \
#	 tree-nodes/widen_mult_expr.cpp \
#	 tree-nodes/widen_mult_plus_expr.hpp \
#	 tree-nodes/widen_mult_plus_expr.cpp \
#	 tree-nodes/widen_mult_minus_expr.hpp \
#	 tree-nodes/widen_mult_minus_expr.cpp \
#	 tree-nodes/widen_lshift_expr.hpp \
#	 tree-nodes/widen_lshift_expr.cpp \
#	 tree-nodes/fma_expr.hpp \
#	 tree-nodes/fma_expr.cpp \
#	 tree-nodes/vec_widen_mult_hi_expr.hpp \
#	 tree-nodes/vec_widen_mult_hi_expr.cpp \
#	 tree-nodes/vec_widen_mult_lo_expr.hpp \
#	 tree-nodes/vec_widen_mult_lo_expr.cpp \
#	 tree-nodes/vec_widen_mult_even_expr.hpp \
#	 tree-nodes/vec_widen_mult_even_expr.cpp \
#	 tree-nodes/vec_widen_mult_odd_expr.hpp \
#	 tree-nodes/vec_widen_mult_odd_expr.cpp \
#	 tree-nodes/vec_unpack_hi_expr.hpp \
#	 tree-nodes/vec_unpack_hi_expr.cpp \
#	 tree-nodes/vec_unpack_lo_expr.hpp \
#	 tree-nodes/vec_unpack_lo_expr.cpp \
#	 tree-nodes/vec_unpack_float_hi_expr.hpp \
#	 tree-nodes/vec_unpack_float_hi_expr.cpp \
#	 tree-nodes/vec_unpack_float_lo_expr.hpp \
#	 tree-nodes/vec_unpack_float_lo_expr.cpp \
#	 tree-nodes/vec_pack_trunc_expr.hpp \
#	 tree-nodes/vec_pack_trunc_expr.cpp \
#	 tree-nodes/vec_pack_sat_expr.hpp \
#	 tree-nodes/vec_pack_sat_expr.cpp \
#	 tree-nodes/vec_pack_fix_trunc_expr.hpp \
#	 tree-nodes/vec_pack_fix_trunc_expr.cpp \
#	 tree-nodes/vec_widen_lshift_hi_expr.hpp \
#	 tree-nodes/vec_widen_lshift_hi_expr.cpp \
#	 tree-nodes/vec_widen_lshift_lo_expr.hpp \
#	 tree-nodes/vec_widen_lshift_lo_expr.cpp \
#	 tree-nodes/predict_expr.hpp \
#	 tree-nodes/predict_expr.cpp \
#	 tree-nodes/optimization_node.hpp \
#	 tree-nodes/optimization_node.cpp \
#	 tree-nodes/target_option_node.hpp \
#	 tree-nodes/target_option_node.cpp \
#	 tree-nodes/annotate_expr.hpp \
#	 tree-nodes/annotate_expr.cpp \
#	 tree-nodes/cilk_spawn_stmt.hpp \
#	 tree-nodes/cilk_spawn_stmt.cpp \
#	 tree-nodes/cilk_sync_stmt.hpp \
#	 tree-nodes/cilk_sync_stmt.cpp \
#	 last line is empty

libtemplate_plugin_la_LDFLAGS = -module
libtemplate_plugin_la_LIBADD = -lrdf -lxml2 -lexpat -lcrypt libowl.la

bin_PROGRAMS = testlink testowl
testlink_SOURCES = tests/test_link.cpp
testlink_LDADD = libtemplate_plugin.la libowl.la

testowl_SOURCES = owl/main.cpp
testowl_LDADD = -lrdf -lxml2 -lexpat -lcrypt libowl.la

