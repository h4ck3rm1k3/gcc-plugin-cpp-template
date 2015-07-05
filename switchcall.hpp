#pragma once
#include "tcwrapper.hpp"

#include "tree-nodes/error_mark.hpp"
#include "tree-nodes/identifier_node.hpp"
#include "tree-nodes/tree_list.hpp"
#include "tree-nodes/tree_vec.hpp"
#include "tree-nodes/block.hpp"
#include "tree-nodes/offset_type.hpp"
#include "tree-nodes/enumeral_type.hpp"
#include "tree-nodes/boolean_type.hpp"
#include "tree-nodes/integer_type.hpp"
#include "tree-nodes/real_type.hpp"
#include "tree-nodes/pointer_type.hpp"
#include "tree-nodes/reference_type.hpp"
#include "tree-nodes/nullptr_type.hpp"
#include "tree-nodes/fixed_point_type.hpp"
#include "tree-nodes/complex_type.hpp"
#include "tree-nodes/vector_type.hpp"
#include "tree-nodes/array_type.hpp"
#include "tree-nodes/record_type.hpp"
#include "tree-nodes/union_type.hpp"
#include "tree-nodes/qual_union_type.hpp"
#include "tree-nodes/void_type.hpp"
#include "tree-nodes/pointer_bounds_type.hpp"
#include "tree-nodes/function_type.hpp"
#include "tree-nodes/method_type.hpp"
#include "tree-nodes/lang_type.hpp"
#include "tree-nodes/void_cst.hpp"
#include "tree-nodes/integer_cst.hpp"
#include "tree-nodes/real_cst.hpp"
#include "tree-nodes/fixed_cst.hpp"
#include "tree-nodes/complex_cst.hpp"
#include "tree-nodes/vector_cst.hpp"
#include "tree-nodes/string_cst.hpp"
#include "tree-nodes/function_decl.hpp"
#include "tree-nodes/label_decl.hpp"
#include "tree-nodes/field_decl.hpp"
#include "tree-nodes/var_decl.hpp"
#include "tree-nodes/const_decl.hpp"
#include "tree-nodes/parm_decl.hpp"
#include "tree-nodes/type_decl.hpp"
#include "tree-nodes/result_decl.hpp"
#include "tree-nodes/debug_expr_decl.hpp"
#include "tree-nodes/namespace_decl.hpp"
#include "tree-nodes/imported_decl.hpp"
#include "tree-nodes/namelist_decl.hpp"
#include "tree-nodes/translation_unit_decl.hpp"
#include "tree-nodes/component_ref.hpp"
#include "tree-nodes/bit_field_ref.hpp"
#include "tree-nodes/array_ref.hpp"
#include "tree-nodes/array_range_ref.hpp"
#include "tree-nodes/realpart_expr.hpp"
#include "tree-nodes/imagpart_expr.hpp"
#include "tree-nodes/view_convert_expr.hpp"
#include "tree-nodes/indirect_ref.hpp"
#include "tree-nodes/obj_type_ref.hpp"
#include "tree-nodes/constructor.hpp"
#include "tree-nodes/compound_expr.hpp"
#include "tree-nodes/modify_expr.hpp"
#include "tree-nodes/init_expr.hpp"
#include "tree-nodes/target_expr.hpp"
#include "tree-nodes/cond_expr.hpp"
#include "tree-nodes/vec_cond_expr.hpp"
#include "tree-nodes/vec_perm_expr.hpp"
#include "tree-nodes/bind_expr.hpp"
#include "tree-nodes/call_expr.hpp"
#include "tree-nodes/with_cleanup_expr.hpp"
#include "tree-nodes/cleanup_point_expr.hpp"
#include "tree-nodes/placeholder_expr.hpp"
#include "tree-nodes/plus_expr.hpp"
#include "tree-nodes/minus_expr.hpp"
#include "tree-nodes/mult_expr.hpp"
#include "tree-nodes/pointer_plus_expr.hpp"
#include "tree-nodes/mult_highpart_expr.hpp"
#include "tree-nodes/trunc_div_expr.hpp"
#include "tree-nodes/ceil_div_expr.hpp"
#include "tree-nodes/floor_div_expr.hpp"
#include "tree-nodes/round_div_expr.hpp"
#include "tree-nodes/trunc_mod_expr.hpp"
#include "tree-nodes/ceil_mod_expr.hpp"
#include "tree-nodes/floor_mod_expr.hpp"
#include "tree-nodes/round_mod_expr.hpp"
#include "tree-nodes/rdiv_expr.hpp"
#include "tree-nodes/exact_div_expr.hpp"
#include "tree-nodes/fix_trunc_expr.hpp"
#include "tree-nodes/float_expr.hpp"
#include "tree-nodes/negate_expr.hpp"
#include "tree-nodes/min_expr.hpp"
#include "tree-nodes/max_expr.hpp"
#include "tree-nodes/abs_expr.hpp"
#include "tree-nodes/lshift_expr.hpp"
#include "tree-nodes/rshift_expr.hpp"
#include "tree-nodes/lrotate_expr.hpp"
#include "tree-nodes/rrotate_expr.hpp"
#include "tree-nodes/bit_ior_expr.hpp"
#include "tree-nodes/bit_xor_expr.hpp"
#include "tree-nodes/bit_and_expr.hpp"
#include "tree-nodes/bit_not_expr.hpp"
#include "tree-nodes/truth_andif_expr.hpp"
#include "tree-nodes/truth_orif_expr.hpp"
#include "tree-nodes/truth_and_expr.hpp"
#include "tree-nodes/truth_or_expr.hpp"
#include "tree-nodes/truth_xor_expr.hpp"
#include "tree-nodes/truth_not_expr.hpp"
#include "tree-nodes/lt_expr.hpp"
#include "tree-nodes/le_expr.hpp"
#include "tree-nodes/gt_expr.hpp"
#include "tree-nodes/ge_expr.hpp"
#include "tree-nodes/eq_expr.hpp"
#include "tree-nodes/ne_expr.hpp"
#include "tree-nodes/unordered_expr.hpp"
#include "tree-nodes/ordered_expr.hpp"
#include "tree-nodes/unlt_expr.hpp"
#include "tree-nodes/unle_expr.hpp"
#include "tree-nodes/ungt_expr.hpp"
#include "tree-nodes/unge_expr.hpp"
#include "tree-nodes/uneq_expr.hpp"
#include "tree-nodes/ltgt_expr.hpp"
#include "tree-nodes/range_expr.hpp"
#include "tree-nodes/paren_expr.hpp"
#include "tree-nodes/convert_expr.hpp"
#include "tree-nodes/addr_space_convert_expr.hpp"
#include "tree-nodes/fixed_convert_expr.hpp"
#include "tree-nodes/nop_expr.hpp"
#include "tree-nodes/non_lvalue_expr.hpp"
#include "tree-nodes/compound_literal_expr.hpp"
#include "tree-nodes/save_expr.hpp"
#include "tree-nodes/addr_expr.hpp"
#include "tree-nodes/fdesc_expr.hpp"
#include "tree-nodes/complex_expr.hpp"
#include "tree-nodes/conj_expr.hpp"
#include "tree-nodes/predecrement_expr.hpp"
#include "tree-nodes/preincrement_expr.hpp"
#include "tree-nodes/postdecrement_expr.hpp"
#include "tree-nodes/postincrement_expr.hpp"
#include "tree-nodes/va_arg_expr.hpp"
#include "tree-nodes/try_catch_expr.hpp"
#include "tree-nodes/try_finally_expr.hpp"
#include "tree-nodes/decl_expr.hpp"
#include "tree-nodes/label_expr.hpp"
#include "tree-nodes/goto_expr.hpp"
#include "tree-nodes/return_expr.hpp"
#include "tree-nodes/exit_expr.hpp"
#include "tree-nodes/loop_expr.hpp"
#include "tree-nodes/switch_expr.hpp"
#include "tree-nodes/case_label_expr.hpp"
#include "tree-nodes/asm_expr.hpp"
#include "tree-nodes/ssa_name.hpp"
#include "tree-nodes/catch_expr.hpp"
#include "tree-nodes/eh_filter_expr.hpp"
#include "tree-nodes/scev_known.hpp"
#include "tree-nodes/scev_not_known.hpp"
#include "tree-nodes/polynomial_chrec.hpp"
#include "tree-nodes/statement_list.hpp"
#include "tree-nodes/assert_expr.hpp"
#include "tree-nodes/tree_binfo.hpp"
#include "tree-nodes/with_size_expr.hpp"
#include "tree-nodes/realign_load_expr.hpp"
#include "tree-nodes/target_mem_ref.hpp"
#include "tree-nodes/mem_ref.hpp"
#include "tree-nodes/oacc_parallel.hpp"
#include "tree-nodes/oacc_kernels.hpp"
#include "tree-nodes/oacc_data.hpp"
#include "tree-nodes/oacc_host_data.hpp"
#include "tree-nodes/omp_parallel.hpp"
#include "tree-nodes/omp_task.hpp"
#include "tree-nodes/omp_for.hpp"
#include "tree-nodes/omp_simd.hpp"
#include "tree-nodes/cilk_simd.hpp"
#include "tree-nodes/cilk_for.hpp"
#include "tree-nodes/omp_distribute.hpp"
#include "tree-nodes/oacc_loop.hpp"
#include "tree-nodes/omp_teams.hpp"
#include "tree-nodes/omp_target_data.hpp"
#include "tree-nodes/omp_target.hpp"
#include "tree-nodes/omp_sections.hpp"
#include "tree-nodes/omp_single.hpp"
#include "tree-nodes/omp_section.hpp"
#include "tree-nodes/omp_master.hpp"
#include "tree-nodes/omp_taskgroup.hpp"
#include "tree-nodes/omp_ordered.hpp"
#include "tree-nodes/omp_critical.hpp"
#include "tree-nodes/oacc_cache.hpp"
#include "tree-nodes/oacc_declare.hpp"
#include "tree-nodes/oacc_enter_data.hpp"
#include "tree-nodes/oacc_exit_data.hpp"
#include "tree-nodes/oacc_update.hpp"
#include "tree-nodes/omp_target_update.hpp"
#include "tree-nodes/omp_atomic.hpp"
#include "tree-nodes/omp_atomic_read.hpp"
#include "tree-nodes/omp_atomic_capture_old.hpp"
#include "tree-nodes/omp_atomic_capture_new.hpp"
#include "tree-nodes/omp_clause.hpp"
#include "tree-nodes/transaction_expr.hpp"
#include "tree-nodes/reduc_max_expr.hpp"
#include "tree-nodes/reduc_min_expr.hpp"
#include "tree-nodes/reduc_plus_expr.hpp"
#include "tree-nodes/dot_prod_expr.hpp"
#include "tree-nodes/widen_sum_expr.hpp"
#include "tree-nodes/sad_expr.hpp"
#include "tree-nodes/widen_mult_expr.hpp"
#include "tree-nodes/widen_mult_plus_expr.hpp"
#include "tree-nodes/widen_mult_minus_expr.hpp"
#include "tree-nodes/widen_lshift_expr.hpp"
#include "tree-nodes/fma_expr.hpp"
#include "tree-nodes/vec_widen_mult_hi_expr.hpp"
#include "tree-nodes/vec_widen_mult_lo_expr.hpp"
#include "tree-nodes/vec_widen_mult_even_expr.hpp"
#include "tree-nodes/vec_widen_mult_odd_expr.hpp"
#include "tree-nodes/vec_unpack_hi_expr.hpp"
#include "tree-nodes/vec_unpack_lo_expr.hpp"
#include "tree-nodes/vec_unpack_float_hi_expr.hpp"
#include "tree-nodes/vec_unpack_float_lo_expr.hpp"
#include "tree-nodes/vec_pack_trunc_expr.hpp"
#include "tree-nodes/vec_pack_sat_expr.hpp"
#include "tree-nodes/vec_pack_fix_trunc_expr.hpp"
#include "tree-nodes/vec_widen_lshift_hi_expr.hpp"
#include "tree-nodes/vec_widen_lshift_lo_expr.hpp"
#include "tree-nodes/predict_expr.hpp"
#include "tree-nodes/optimization_node.hpp"
#include "tree-nodes/target_option_node.hpp"
#include "tree-nodes/annotate_expr.hpp"
#include "tree-nodes/cilk_spawn_stmt.hpp"
#include "tree-nodes/cilk_sync_stmt.hpp"

template <class Return, class Default> class SwitchCall {
public:
  //Return default_value(tree b) { return Default(); }
  /*
   * Default implementation returns the template parameter Default.
   */
  Return call_type_ERROR_MARK(tree b) { return Default(); }
  Return call_type_IDENTIFIER_NODE(tree b) { return Default(); }
  Return call_type_TREE_LIST(tree b) { return Default(); }
  Return call_type_TREE_VEC(tree b) { return Default(); }
  Return call_type_BLOCK(tree b) { return Default(); }
  Return call_type_OFFSET_TYPE(tree b) { return Default(); }
  Return call_type_ENUMERAL_TYPE(tree b) { return Default(); }
  Return call_type_BOOLEAN_TYPE(tree b) { return Default(); }
  Return call_type_INTEGER_TYPE(tree b) { return Default(); }
  Return call_type_REAL_TYPE(tree b) { return Default(); }
  Return call_type_POINTER_TYPE(tree b) { return Default(); }
  Return call_type_REFERENCE_TYPE(tree b) { return Default(); }
  Return call_type_NULLPTR_TYPE(tree b) { return Default(); }
  Return call_type_FIXED_POINT_TYPE(tree b) { return Default(); }
  Return call_type_COMPLEX_TYPE(tree b) { return Default(); }
  Return call_type_VECTOR_TYPE(tree b) { return Default(); }
  Return call_type_ARRAY_TYPE(tree b) { return Default(); }
  Return call_type_RECORD_TYPE(tree b) { return Default(); }
  Return call_type_UNION_TYPE(tree b) { return Default(); }
  Return call_type_QUAL_UNION_TYPE(tree b) { return Default(); }
  Return call_type_VOID_TYPE(tree b) { return Default(); }
  Return call_type_POINTER_BOUNDS_TYPE(tree b) { return Default(); }
  Return call_type_FUNCTION_TYPE(tree b) { return Default(); }
  Return call_type_METHOD_TYPE(tree b) { return Default(); }
  Return call_type_LANG_TYPE(tree b) { return Default(); }
  Return call_type_VOID_CST(tree b) { return Default(); }
  Return call_type_INTEGER_CST(tree b) { return Default(); }
  Return call_type_REAL_CST(tree b) { return Default(); }
  Return call_type_FIXED_CST(tree b) { return Default(); }
  Return call_type_COMPLEX_CST(tree b) { return Default(); }
  Return call_type_VECTOR_CST(tree b) { return Default(); }
  Return call_type_STRING_CST(tree b) { return Default(); }
  Return call_type_FUNCTION_DECL(tree b) { return Default(); }
  Return call_type_LABEL_DECL(tree b) { return Default(); }
  Return call_type_FIELD_DECL(tree b) { return Default(); }
  Return call_type_VAR_DECL(tree b) { return Default(); }
  Return call_type_CONST_DECL(tree b) { return Default(); }
  Return call_type_PARM_DECL(tree b) { return Default(); }
  Return call_type_TYPE_DECL(tree b) { return Default(); }
  Return call_type_RESULT_DECL(tree b) { return Default(); }
  Return call_type_DEBUG_EXPR_DECL(tree b) { return Default(); }
  Return call_type_NAMESPACE_DECL(tree b) { return Default(); }
  Return call_type_IMPORTED_DECL(tree b) { return Default(); }
  Return call_type_NAMELIST_DECL(tree b) { return Default(); }
  Return call_type_TRANSLATION_UNIT_DECL(tree b) { return Default(); }
  Return call_type_COMPONENT_REF(tree b) { return Default(); }
  Return call_type_BIT_FIELD_REF(tree b) { return Default(); }
  Return call_type_ARRAY_REF(tree b) { return Default(); }
  Return call_type_ARRAY_RANGE_REF(tree b) { return Default(); }
  Return call_type_REALPART_EXPR(tree b) { return Default(); }
  Return call_type_IMAGPART_EXPR(tree b) { return Default(); }
  Return call_type_VIEW_CONVERT_EXPR(tree b) { return Default(); }
  Return call_type_INDIRECT_REF(tree b) { return Default(); }
  Return call_type_OBJ_TYPE_REF(tree b) { return Default(); }
  Return call_type_CONSTRUCTOR(tree b) { return Default(); }
  Return call_type_COMPOUND_EXPR(tree b) { return Default(); }
  Return call_type_MODIFY_EXPR(tree b) { return Default(); }
  Return call_type_INIT_EXPR(tree b) { return Default(); }
  Return call_type_TARGET_EXPR(tree b) { return Default(); }
  Return call_type_COND_EXPR(tree b) { return Default(); }
  Return call_type_VEC_COND_EXPR(tree b) { return Default(); }
  Return call_type_VEC_PERM_EXPR(tree b) { return Default(); }
  Return call_type_BIND_EXPR(tree b) { return Default(); }
  Return call_type_CALL_EXPR(tree b) { return Default(); }
  Return call_type_WITH_CLEANUP_EXPR(tree b) { return Default(); }
  Return call_type_CLEANUP_POINT_EXPR(tree b) { return Default(); }
  Return call_type_PLACEHOLDER_EXPR(tree b) { return Default(); }
  Return call_type_PLUS_EXPR(tree b) { return Default(); }
  Return call_type_MINUS_EXPR(tree b) { return Default(); }
  Return call_type_MULT_EXPR(tree b) { return Default(); }
  Return call_type_POINTER_PLUS_EXPR(tree b) { return Default(); }
  Return call_type_MULT_HIGHPART_EXPR(tree b) { return Default(); }
  Return call_type_TRUNC_DIV_EXPR(tree b) { return Default(); }
  Return call_type_CEIL_DIV_EXPR(tree b) { return Default(); }
  Return call_type_FLOOR_DIV_EXPR(tree b) { return Default(); }
  Return call_type_ROUND_DIV_EXPR(tree b) { return Default(); }
  Return call_type_TRUNC_MOD_EXPR(tree b) { return Default(); }
  Return call_type_CEIL_MOD_EXPR(tree b) { return Default(); }
  Return call_type_FLOOR_MOD_EXPR(tree b) { return Default(); }
  Return call_type_ROUND_MOD_EXPR(tree b) { return Default(); }
  Return call_type_RDIV_EXPR(tree b) { return Default(); }
  Return call_type_EXACT_DIV_EXPR(tree b) { return Default(); }
  Return call_type_FIX_TRUNC_EXPR(tree b) { return Default(); }
  Return call_type_FLOAT_EXPR(tree b) { return Default(); }
  Return call_type_NEGATE_EXPR(tree b) { return Default(); }
  Return call_type_MIN_EXPR(tree b) { return Default(); }
  Return call_type_MAX_EXPR(tree b) { return Default(); }
  Return call_type_ABS_EXPR(tree b) { return Default(); }
  Return call_type_LSHIFT_EXPR(tree b) { return Default(); }
  Return call_type_RSHIFT_EXPR(tree b) { return Default(); }
  Return call_type_LROTATE_EXPR(tree b) { return Default(); }
  Return call_type_RROTATE_EXPR(tree b) { return Default(); }
  Return call_type_BIT_IOR_EXPR(tree b) { return Default(); }
  Return call_type_BIT_XOR_EXPR(tree b) { return Default(); }
  Return call_type_BIT_AND_EXPR(tree b) { return Default(); }
  Return call_type_BIT_NOT_EXPR(tree b) { return Default(); }
  Return call_type_TRUTH_ANDIF_EXPR(tree b) { return Default(); }
  Return call_type_TRUTH_ORIF_EXPR(tree b) { return Default(); }
  Return call_type_TRUTH_AND_EXPR(tree b) { return Default(); }
  Return call_type_TRUTH_OR_EXPR(tree b) { return Default(); }
  Return call_type_TRUTH_XOR_EXPR(tree b) { return Default(); }
  Return call_type_TRUTH_NOT_EXPR(tree b) { return Default(); }
  Return call_type_LT_EXPR(tree b) { return Default(); }
  Return call_type_LE_EXPR(tree b) { return Default(); }
  Return call_type_GT_EXPR(tree b) { return Default(); }
  Return call_type_GE_EXPR(tree b) { return Default(); }
  Return call_type_EQ_EXPR(tree b) { return Default(); }
  Return call_type_NE_EXPR(tree b) { return Default(); }
  Return call_type_UNORDERED_EXPR(tree b) { return Default(); }
  Return call_type_ORDERED_EXPR(tree b) { return Default(); }
  Return call_type_UNLT_EXPR(tree b) { return Default(); }
  Return call_type_UNLE_EXPR(tree b) { return Default(); }
  Return call_type_UNGT_EXPR(tree b) { return Default(); }
  Return call_type_UNGE_EXPR(tree b) { return Default(); }
  Return call_type_UNEQ_EXPR(tree b) { return Default(); }
  Return call_type_LTGT_EXPR(tree b) { return Default(); }
  Return call_type_RANGE_EXPR(tree b) { return Default(); }
  Return call_type_PAREN_EXPR(tree b) { return Default(); }
  Return call_type_CONVERT_EXPR(tree b) { return Default(); }
  Return call_type_ADDR_SPACE_CONVERT_EXPR(tree b) { return Default(); }
  Return call_type_FIXED_CONVERT_EXPR(tree b) { return Default(); }
  Return call_type_NOP_EXPR(tree b) { return Default(); }
  Return call_type_NON_LVALUE_EXPR(tree b) { return Default(); }
  Return call_type_COMPOUND_LITERAL_EXPR(tree b) { return Default(); }
  Return call_type_SAVE_EXPR(tree b) { return Default(); }
  Return call_type_ADDR_EXPR(tree b) { return Default(); }
  Return call_type_FDESC_EXPR(tree b) { return Default(); }
  Return call_type_COMPLEX_EXPR(tree b) { return Default(); }
  Return call_type_CONJ_EXPR(tree b) { return Default(); }
  Return call_type_PREDECREMENT_EXPR(tree b) { return Default(); }
  Return call_type_PREINCREMENT_EXPR(tree b) { return Default(); }
  Return call_type_POSTDECREMENT_EXPR(tree b) { return Default(); }
  Return call_type_POSTINCREMENT_EXPR(tree b) { return Default(); }
  Return call_type_VA_ARG_EXPR(tree b) { return Default(); }
  Return call_type_TRY_CATCH_EXPR(tree b) { return Default(); }
  Return call_type_TRY_FINALLY_EXPR(tree b) { return Default(); }
  Return call_type_DECL_EXPR(tree b) { return Default(); }
  Return call_type_LABEL_EXPR(tree b) { return Default(); }
  Return call_type_GOTO_EXPR(tree b) { return Default(); }
  Return call_type_RETURN_EXPR(tree b) { return Default(); }
  Return call_type_EXIT_EXPR(tree b) { return Default(); }
  Return call_type_LOOP_EXPR(tree b) { return Default(); }
  Return call_type_SWITCH_EXPR(tree b) { return Default(); }
  Return call_type_CASE_LABEL_EXPR(tree b) { return Default(); }
  Return call_type_ASM_EXPR(tree b) { return Default(); }
  Return call_type_SSA_NAME(tree b) { return Default(); }
  Return call_type_CATCH_EXPR(tree b) { return Default(); }
  Return call_type_EH_FILTER_EXPR(tree b) { return Default(); }
  Return call_type_SCEV_KNOWN(tree b) { return Default(); }
  Return call_type_SCEV_NOT_KNOWN(tree b) { return Default(); }
  Return call_type_POLYNOMIAL_CHREC(tree b) { return Default(); }
  Return call_type_STATEMENT_LIST(tree b) { return Default(); }
  Return call_type_ASSERT_EXPR(tree b) { return Default(); }
  Return call_type_TREE_BINFO(tree b) { return Default(); }
  Return call_type_WITH_SIZE_EXPR(tree b) { return Default(); }
  Return call_type_REALIGN_LOAD_EXPR(tree b) { return Default(); }
  Return call_type_TARGET_MEM_REF(tree b) { return Default(); }
  Return call_type_MEM_REF(tree b) { return Default(); }
  Return call_type_OACC_PARALLEL(tree b) { return Default(); }
  Return call_type_OACC_KERNELS(tree b) { return Default(); }
  Return call_type_OACC_DATA(tree b) { return Default(); }
  Return call_type_OACC_HOST_DATA(tree b) { return Default(); }
  Return call_type_OMP_PARALLEL(tree b) { return Default(); }
  Return call_type_OMP_TASK(tree b) { return Default(); }
  Return call_type_OMP_FOR(tree b) { return Default(); }
  Return call_type_OMP_SIMD(tree b) { return Default(); }
  Return call_type_CILK_SIMD(tree b) { return Default(); }
  Return call_type_CILK_FOR(tree b) { return Default(); }
  Return call_type_OMP_DISTRIBUTE(tree b) { return Default(); }
  Return call_type_OACC_LOOP(tree b) { return Default(); }
  Return call_type_OMP_TEAMS(tree b) { return Default(); }
  Return call_type_OMP_TARGET_DATA(tree b) { return Default(); }
  Return call_type_OMP_TARGET(tree b) { return Default(); }
  Return call_type_OMP_SECTIONS(tree b) { return Default(); }
  Return call_type_OMP_SINGLE(tree b) { return Default(); }
  Return call_type_OMP_SECTION(tree b) { return Default(); }
  Return call_type_OMP_MASTER(tree b) { return Default(); }
  Return call_type_OMP_TASKGROUP(tree b) { return Default(); }
  Return call_type_OMP_ORDERED(tree b) { return Default(); }
  Return call_type_OMP_CRITICAL(tree b) { return Default(); }
  Return call_type_OACC_CACHE(tree b) { return Default(); }
  Return call_type_OACC_DECLARE(tree b) { return Default(); }
  Return call_type_OACC_ENTER_DATA(tree b) { return Default(); }
  Return call_type_OACC_EXIT_DATA(tree b) { return Default(); }
  Return call_type_OACC_UPDATE(tree b) { return Default(); }
  Return call_type_OMP_TARGET_UPDATE(tree b) { return Default(); }
  Return call_type_OMP_ATOMIC(tree b) { return Default(); }
  Return call_type_OMP_ATOMIC_READ(tree b) { return Default(); }
  Return call_type_OMP_ATOMIC_CAPTURE_OLD(tree b) { return Default(); }
  Return call_type_OMP_ATOMIC_CAPTURE_NEW(tree b) { return Default(); }
  Return call_type_OMP_CLAUSE(tree b) { return Default(); }
  Return call_type_TRANSACTION_EXPR(tree b) { return Default(); }
  Return call_type_REDUC_MAX_EXPR(tree b) { return Default(); }
  Return call_type_REDUC_MIN_EXPR(tree b) { return Default(); }
  Return call_type_REDUC_PLUS_EXPR(tree b) { return Default(); }
  Return call_type_DOT_PROD_EXPR(tree b) { return Default(); }
  Return call_type_WIDEN_SUM_EXPR(tree b) { return Default(); }
  Return call_type_SAD_EXPR(tree b) { return Default(); }
  Return call_type_WIDEN_MULT_EXPR(tree b) { return Default(); }
  Return call_type_WIDEN_MULT_PLUS_EXPR(tree b) { return Default(); }
  Return call_type_WIDEN_MULT_MINUS_EXPR(tree b) { return Default(); }
  Return call_type_WIDEN_LSHIFT_EXPR(tree b) { return Default(); }
  Return call_type_FMA_EXPR(tree b) { return Default(); }
  Return call_type_VEC_WIDEN_MULT_HI_EXPR(tree b) { return Default(); }
  Return call_type_VEC_WIDEN_MULT_LO_EXPR(tree b) { return Default(); }
  Return call_type_VEC_WIDEN_MULT_EVEN_EXPR(tree b) { return Default(); }
  Return call_type_VEC_WIDEN_MULT_ODD_EXPR(tree b) { return Default(); }
  Return call_type_VEC_UNPACK_HI_EXPR(tree b) { return Default(); }
  Return call_type_VEC_UNPACK_LO_EXPR(tree b) { return Default(); }
  Return call_type_VEC_UNPACK_FLOAT_HI_EXPR(tree b) { return Default(); }
  Return call_type_VEC_UNPACK_FLOAT_LO_EXPR(tree b) { return Default(); }
  Return call_type_VEC_PACK_TRUNC_EXPR(tree b) { return Default(); }
  Return call_type_VEC_PACK_SAT_EXPR(tree b) { return Default(); }
  Return call_type_VEC_PACK_FIX_TRUNC_EXPR(tree b) { return Default(); }
  Return call_type_VEC_WIDEN_LSHIFT_HI_EXPR(tree b) { return Default(); }
  Return call_type_VEC_WIDEN_LSHIFT_LO_EXPR(tree b) { return Default(); }
  Return call_type_PREDICT_EXPR(tree b) { return Default(); }
  Return call_type_OPTIMIZATION_NODE(tree b) { return Default(); }
  Return call_type_TARGET_OPTION_NODE(tree b) { return Default(); }
  Return call_type_ANNOTATE_EXPR(tree b) { return Default(); }
  Return call_type_CILK_SPAWN_STMT(tree b) { return Default(); }
  Return call_type_CILK_SYNC_STMT(tree b) { return Default(); }


  template<class Context> Return call(tree t) {
    enum tree_code tc=t->typed.base.code;
    switch(tc) {
      
    case TC_IDENTIFIER_NODE::t_code_c:
      return ((Context*)this)->call_type_IDENTIFIER_NODE(t);
      break;


    case TC_TREE_LIST::t_code_c:
      return ((Context*)this)->call_type_TREE_LIST(t);
      break;


    case TC_TREE_VEC::t_code_c:
      return ((Context*)this)->call_type_TREE_VEC(t);
      break;


    case TC_BLOCK::t_code_c:
      return ((Context*)this)->call_type_BLOCK(t);
      break;


    case TC_OFFSET_TYPE::t_code_c:
      return ((Context*)this)->call_type_OFFSET_TYPE(t);
      break;


    case TC_ENUMERAL_TYPE::t_code_c:
      return ((Context*)this)->call_type_ENUMERAL_TYPE(t);
      break;


    case TC_BOOLEAN_TYPE::t_code_c:
      return ((Context*)this)->call_type_BOOLEAN_TYPE(t);
      break;


    case TC_INTEGER_TYPE::t_code_c:
      return ((Context*)this)->call_type_INTEGER_TYPE(t);
      break;


    case TC_REAL_TYPE::t_code_c:
      return ((Context*)this)->call_type_REAL_TYPE(t);
      break;


    case TC_POINTER_TYPE::t_code_c:
      return ((Context*)this)->call_type_POINTER_TYPE(t);
      break;


    case TC_REFERENCE_TYPE::t_code_c:
      return ((Context*)this)->call_type_REFERENCE_TYPE(t);
      break;


    case TC_NULLPTR_TYPE::t_code_c:
      return ((Context*)this)->call_type_NULLPTR_TYPE(t);
      break;


    case TC_FIXED_POINT_TYPE::t_code_c:
      return ((Context*)this)->call_type_FIXED_POINT_TYPE(t);
      break;


    case TC_COMPLEX_TYPE::t_code_c:
      return ((Context*)this)->call_type_COMPLEX_TYPE(t);
      break;


    case TC_VECTOR_TYPE::t_code_c:
      return ((Context*)this)->call_type_VECTOR_TYPE(t);
      break;


    case TC_ARRAY_TYPE::t_code_c:
      return ((Context*)this)->call_type_ARRAY_TYPE(t);
      break;


    case TC_RECORD_TYPE::t_code_c:
      return ((Context*)this)->call_type_RECORD_TYPE(t);
      break;


    case TC_UNION_TYPE::t_code_c:
      return ((Context*)this)->call_type_UNION_TYPE(t);
      break;


    case TC_QUAL_UNION_TYPE::t_code_c:
      return ((Context*)this)->call_type_QUAL_UNION_TYPE(t);
      break;


    case TC_VOID_TYPE::t_code_c:
      return ((Context*)this)->call_type_VOID_TYPE(t);
      break;


    case TC_POINTER_BOUNDS_TYPE::t_code_c:
      return ((Context*)this)->call_type_POINTER_BOUNDS_TYPE(t);
      break;


    case TC_FUNCTION_TYPE::t_code_c:
      return ((Context*)this)->call_type_FUNCTION_TYPE(t);
      break;


    case TC_METHOD_TYPE::t_code_c:
      return ((Context*)this)->call_type_METHOD_TYPE(t);
      break;


    case TC_LANG_TYPE::t_code_c:
      return ((Context*)this)->call_type_LANG_TYPE(t);
      break;


    case TC_VOID_CST::t_code_c:
      return ((Context*)this)->call_type_VOID_CST(t);
      break;


    case TC_INTEGER_CST::t_code_c:
      return ((Context*)this)->call_type_INTEGER_CST(t);
      break;


    case TC_REAL_CST::t_code_c:
      return ((Context*)this)->call_type_REAL_CST(t);
      break;


    case TC_FIXED_CST::t_code_c:
      return ((Context*)this)->call_type_FIXED_CST(t);
      break;


    case TC_COMPLEX_CST::t_code_c:
      return ((Context*)this)->call_type_COMPLEX_CST(t);
      break;


    case TC_VECTOR_CST::t_code_c:
      return ((Context*)this)->call_type_VECTOR_CST(t);
      break;


    case TC_STRING_CST::t_code_c:
      return ((Context*)this)->call_type_STRING_CST(t);
      break;


    case TC_FUNCTION_DECL::t_code_c:
      return ((Context*)this)->call_type_FUNCTION_DECL(t);
      break;


    case TC_LABEL_DECL::t_code_c:
      return ((Context*)this)->call_type_LABEL_DECL(t);
      break;


    case TC_FIELD_DECL::t_code_c:
      return ((Context*)this)->call_type_FIELD_DECL(t);
      break;


    case TC_VAR_DECL::t_code_c:
      return ((Context*)this)->call_type_VAR_DECL(t);
      break;


    case TC_CONST_DECL::t_code_c:
      return ((Context*)this)->call_type_CONST_DECL(t);
      break;


    case TC_PARM_DECL::t_code_c:
      return ((Context*)this)->call_type_PARM_DECL(t);
      break;


    case TC_TYPE_DECL::t_code_c:
      return ((Context*)this)->call_type_TYPE_DECL(t);
      break;


    case TC_RESULT_DECL::t_code_c:
      return ((Context*)this)->call_type_RESULT_DECL(t);
      break;


    case TC_DEBUG_EXPR_DECL::t_code_c:
      return ((Context*)this)->call_type_DEBUG_EXPR_DECL(t);
      break;


    case TC_NAMESPACE_DECL::t_code_c:
      return ((Context*)this)->call_type_NAMESPACE_DECL(t);
      break;


    case TC_IMPORTED_DECL::t_code_c:
      return ((Context*)this)->call_type_IMPORTED_DECL(t);
      break;


    case TC_NAMELIST_DECL::t_code_c:
      return ((Context*)this)->call_type_NAMELIST_DECL(t);
      break;


    case TC_TRANSLATION_UNIT_DECL::t_code_c:
      return ((Context*)this)->call_type_TRANSLATION_UNIT_DECL(t);
      break;


    case TC_COMPONENT_REF::t_code_c:
      return ((Context*)this)->call_type_COMPONENT_REF(t);
      break;


    case TC_BIT_FIELD_REF::t_code_c:
      return ((Context*)this)->call_type_BIT_FIELD_REF(t);
      break;


    case TC_ARRAY_REF::t_code_c:
      return ((Context*)this)->call_type_ARRAY_REF(t);
      break;


    case TC_ARRAY_RANGE_REF::t_code_c:
      return ((Context*)this)->call_type_ARRAY_RANGE_REF(t);
      break;


    case TC_REALPART_EXPR::t_code_c:
      return ((Context*)this)->call_type_REALPART_EXPR(t);
      break;


    case TC_IMAGPART_EXPR::t_code_c:
      return ((Context*)this)->call_type_IMAGPART_EXPR(t);
      break;


    case TC_VIEW_CONVERT_EXPR::t_code_c:
      return ((Context*)this)->call_type_VIEW_CONVERT_EXPR(t);
      break;


    case TC_INDIRECT_REF::t_code_c:
      return ((Context*)this)->call_type_INDIRECT_REF(t);
      break;


    case TC_OBJ_TYPE_REF::t_code_c:
      return ((Context*)this)->call_type_OBJ_TYPE_REF(t);
      break;


    case TC_CONSTRUCTOR::t_code_c:
      return ((Context*)this)->call_type_CONSTRUCTOR(t);
      break;


    case TC_COMPOUND_EXPR::t_code_c:
      return ((Context*)this)->call_type_COMPOUND_EXPR(t);
      break;


    case TC_MODIFY_EXPR::t_code_c:
      return ((Context*)this)->call_type_MODIFY_EXPR(t);
      break;


    case TC_INIT_EXPR::t_code_c:
      return ((Context*)this)->call_type_INIT_EXPR(t);
      break;


    case TC_TARGET_EXPR::t_code_c:
      return ((Context*)this)->call_type_TARGET_EXPR(t);
      break;


    case TC_COND_EXPR::t_code_c:
      return ((Context*)this)->call_type_COND_EXPR(t);
      break;


    case TC_VEC_COND_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_COND_EXPR(t);
      break;


    case TC_VEC_PERM_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_PERM_EXPR(t);
      break;


    case TC_BIND_EXPR::t_code_c:
      return ((Context*)this)->call_type_BIND_EXPR(t);
      break;


    case TC_CALL_EXPR::t_code_c:
      return ((Context*)this)->call_type_CALL_EXPR(t);
      break;


    case TC_WITH_CLEANUP_EXPR::t_code_c:
      return ((Context*)this)->call_type_WITH_CLEANUP_EXPR(t);
      break;


    case TC_CLEANUP_POINT_EXPR::t_code_c:
      return ((Context*)this)->call_type_CLEANUP_POINT_EXPR(t);
      break;


    case TC_PLACEHOLDER_EXPR::t_code_c:
      return ((Context*)this)->call_type_PLACEHOLDER_EXPR(t);
      break;


    case TC_PLUS_EXPR::t_code_c:
      return ((Context*)this)->call_type_PLUS_EXPR(t);
      break;


    case TC_MINUS_EXPR::t_code_c:
      return ((Context*)this)->call_type_MINUS_EXPR(t);
      break;


    case TC_MULT_EXPR::t_code_c:
      return ((Context*)this)->call_type_MULT_EXPR(t);
      break;


    case TC_POINTER_PLUS_EXPR::t_code_c:
      return ((Context*)this)->call_type_POINTER_PLUS_EXPR(t);
      break;


    case TC_MULT_HIGHPART_EXPR::t_code_c:
      return ((Context*)this)->call_type_MULT_HIGHPART_EXPR(t);
      break;


    case TC_TRUNC_DIV_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUNC_DIV_EXPR(t);
      break;


    case TC_CEIL_DIV_EXPR::t_code_c:
      return ((Context*)this)->call_type_CEIL_DIV_EXPR(t);
      break;


    case TC_FLOOR_DIV_EXPR::t_code_c:
      return ((Context*)this)->call_type_FLOOR_DIV_EXPR(t);
      break;


    case TC_ROUND_DIV_EXPR::t_code_c:
      return ((Context*)this)->call_type_ROUND_DIV_EXPR(t);
      break;


    case TC_TRUNC_MOD_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUNC_MOD_EXPR(t);
      break;


    case TC_CEIL_MOD_EXPR::t_code_c:
      return ((Context*)this)->call_type_CEIL_MOD_EXPR(t);
      break;


    case TC_FLOOR_MOD_EXPR::t_code_c:
      return ((Context*)this)->call_type_FLOOR_MOD_EXPR(t);
      break;


    case TC_ROUND_MOD_EXPR::t_code_c:
      return ((Context*)this)->call_type_ROUND_MOD_EXPR(t);
      break;


    case TC_RDIV_EXPR::t_code_c:
      return ((Context*)this)->call_type_RDIV_EXPR(t);
      break;


    case TC_EXACT_DIV_EXPR::t_code_c:
      return ((Context*)this)->call_type_EXACT_DIV_EXPR(t);
      break;


    case TC_FIX_TRUNC_EXPR::t_code_c:
      return ((Context*)this)->call_type_FIX_TRUNC_EXPR(t);
      break;


    case TC_FLOAT_EXPR::t_code_c:
      return ((Context*)this)->call_type_FLOAT_EXPR(t);
      break;


    case TC_NEGATE_EXPR::t_code_c:
      return ((Context*)this)->call_type_NEGATE_EXPR(t);
      break;


    case TC_MIN_EXPR::t_code_c:
      return ((Context*)this)->call_type_MIN_EXPR(t);
      break;


    case TC_MAX_EXPR::t_code_c:
      return ((Context*)this)->call_type_MAX_EXPR(t);
      break;


    case TC_ABS_EXPR::t_code_c:
      return ((Context*)this)->call_type_ABS_EXPR(t);
      break;


    case TC_LSHIFT_EXPR::t_code_c:
      return ((Context*)this)->call_type_LSHIFT_EXPR(t);
      break;


    case TC_RSHIFT_EXPR::t_code_c:
      return ((Context*)this)->call_type_RSHIFT_EXPR(t);
      break;


    case TC_LROTATE_EXPR::t_code_c:
      return ((Context*)this)->call_type_LROTATE_EXPR(t);
      break;


    case TC_RROTATE_EXPR::t_code_c:
      return ((Context*)this)->call_type_RROTATE_EXPR(t);
      break;


    case TC_BIT_IOR_EXPR::t_code_c:
      return ((Context*)this)->call_type_BIT_IOR_EXPR(t);
      break;


    case TC_BIT_XOR_EXPR::t_code_c:
      return ((Context*)this)->call_type_BIT_XOR_EXPR(t);
      break;


    case TC_BIT_AND_EXPR::t_code_c:
      return ((Context*)this)->call_type_BIT_AND_EXPR(t);
      break;


    case TC_BIT_NOT_EXPR::t_code_c:
      return ((Context*)this)->call_type_BIT_NOT_EXPR(t);
      break;


    case TC_TRUTH_ANDIF_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUTH_ANDIF_EXPR(t);
      break;


    case TC_TRUTH_ORIF_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUTH_ORIF_EXPR(t);
      break;


    case TC_TRUTH_AND_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUTH_AND_EXPR(t);
      break;


    case TC_TRUTH_OR_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUTH_OR_EXPR(t);
      break;


    case TC_TRUTH_XOR_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUTH_XOR_EXPR(t);
      break;


    case TC_TRUTH_NOT_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRUTH_NOT_EXPR(t);
      break;


    case TC_LT_EXPR::t_code_c:
      return ((Context*)this)->call_type_LT_EXPR(t);
      break;


    case TC_LE_EXPR::t_code_c:
      return ((Context*)this)->call_type_LE_EXPR(t);
      break;


    case TC_GT_EXPR::t_code_c:
      return ((Context*)this)->call_type_GT_EXPR(t);
      break;


    case TC_GE_EXPR::t_code_c:
      return ((Context*)this)->call_type_GE_EXPR(t);
      break;


    case TC_EQ_EXPR::t_code_c:
      return ((Context*)this)->call_type_EQ_EXPR(t);
      break;


    case TC_NE_EXPR::t_code_c:
      return ((Context*)this)->call_type_NE_EXPR(t);
      break;


    case TC_UNORDERED_EXPR::t_code_c:
      return ((Context*)this)->call_type_UNORDERED_EXPR(t);
      break;


    case TC_ORDERED_EXPR::t_code_c:
      return ((Context*)this)->call_type_ORDERED_EXPR(t);
      break;


    case TC_UNLT_EXPR::t_code_c:
      return ((Context*)this)->call_type_UNLT_EXPR(t);
      break;


    case TC_UNLE_EXPR::t_code_c:
      return ((Context*)this)->call_type_UNLE_EXPR(t);
      break;


    case TC_UNGT_EXPR::t_code_c:
      return ((Context*)this)->call_type_UNGT_EXPR(t);
      break;


    case TC_UNGE_EXPR::t_code_c:
      return ((Context*)this)->call_type_UNGE_EXPR(t);
      break;


    case TC_UNEQ_EXPR::t_code_c:
      return ((Context*)this)->call_type_UNEQ_EXPR(t);
      break;


    case TC_LTGT_EXPR::t_code_c:
      return ((Context*)this)->call_type_LTGT_EXPR(t);
      break;


    case TC_RANGE_EXPR::t_code_c:
      return ((Context*)this)->call_type_RANGE_EXPR(t);
      break;


    case TC_PAREN_EXPR::t_code_c:
      return ((Context*)this)->call_type_PAREN_EXPR(t);
      break;


    case TC_CONVERT_EXPR::t_code_c:
      return ((Context*)this)->call_type_CONVERT_EXPR(t);
      break;


    case TC_ADDR_SPACE_CONVERT_EXPR::t_code_c:
      return ((Context*)this)->call_type_ADDR_SPACE_CONVERT_EXPR(t);
      break;


    case TC_FIXED_CONVERT_EXPR::t_code_c:
      return ((Context*)this)->call_type_FIXED_CONVERT_EXPR(t);
      break;


    case TC_NOP_EXPR::t_code_c:
      return ((Context*)this)->call_type_NOP_EXPR(t);
      break;


    case TC_NON_LVALUE_EXPR::t_code_c:
      return ((Context*)this)->call_type_NON_LVALUE_EXPR(t);
      break;


    case TC_COMPOUND_LITERAL_EXPR::t_code_c:
      return ((Context*)this)->call_type_COMPOUND_LITERAL_EXPR(t);
      break;


    case TC_SAVE_EXPR::t_code_c:
      return ((Context*)this)->call_type_SAVE_EXPR(t);
      break;


    case TC_ADDR_EXPR::t_code_c:
      return ((Context*)this)->call_type_ADDR_EXPR(t);
      break;


    case TC_FDESC_EXPR::t_code_c:
      return ((Context*)this)->call_type_FDESC_EXPR(t);
      break;


    case TC_COMPLEX_EXPR::t_code_c:
      return ((Context*)this)->call_type_COMPLEX_EXPR(t);
      break;


    case TC_CONJ_EXPR::t_code_c:
      return ((Context*)this)->call_type_CONJ_EXPR(t);
      break;


    case TC_PREDECREMENT_EXPR::t_code_c:
      return ((Context*)this)->call_type_PREDECREMENT_EXPR(t);
      break;


    case TC_PREINCREMENT_EXPR::t_code_c:
      return ((Context*)this)->call_type_PREINCREMENT_EXPR(t);
      break;


    case TC_POSTDECREMENT_EXPR::t_code_c:
      return ((Context*)this)->call_type_POSTDECREMENT_EXPR(t);
      break;


    case TC_POSTINCREMENT_EXPR::t_code_c:
      return ((Context*)this)->call_type_POSTINCREMENT_EXPR(t);
      break;


    case TC_VA_ARG_EXPR::t_code_c:
      return ((Context*)this)->call_type_VA_ARG_EXPR(t);
      break;


    case TC_TRY_CATCH_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRY_CATCH_EXPR(t);
      break;


    case TC_TRY_FINALLY_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRY_FINALLY_EXPR(t);
      break;


    case TC_DECL_EXPR::t_code_c:
      return ((Context*)this)->call_type_DECL_EXPR(t);
      break;


    case TC_LABEL_EXPR::t_code_c:
      return ((Context*)this)->call_type_LABEL_EXPR(t);
      break;


    case TC_GOTO_EXPR::t_code_c:
      return ((Context*)this)->call_type_GOTO_EXPR(t);
      break;


    case TC_RETURN_EXPR::t_code_c:
      return ((Context*)this)->call_type_RETURN_EXPR(t);
      break;


    case TC_EXIT_EXPR::t_code_c:
      return ((Context*)this)->call_type_EXIT_EXPR(t);
      break;


    case TC_LOOP_EXPR::t_code_c:
      return ((Context*)this)->call_type_LOOP_EXPR(t);
      break;


    case TC_SWITCH_EXPR::t_code_c:
      return ((Context*)this)->call_type_SWITCH_EXPR(t);
      break;


    case TC_CASE_LABEL_EXPR::t_code_c:
      return ((Context*)this)->call_type_CASE_LABEL_EXPR(t);
      break;


    case TC_ASM_EXPR::t_code_c:
      return ((Context*)this)->call_type_ASM_EXPR(t);
      break;


    case TC_SSA_NAME::t_code_c:
      return ((Context*)this)->call_type_SSA_NAME(t);
      break;


    case TC_CATCH_EXPR::t_code_c:
      return ((Context*)this)->call_type_CATCH_EXPR(t);
      break;


    case TC_EH_FILTER_EXPR::t_code_c:
      return ((Context*)this)->call_type_EH_FILTER_EXPR(t);
      break;


    case TC_SCEV_KNOWN::t_code_c:
      return ((Context*)this)->call_type_SCEV_KNOWN(t);
      break;


    case TC_SCEV_NOT_KNOWN::t_code_c:
      return ((Context*)this)->call_type_SCEV_NOT_KNOWN(t);
      break;


    case TC_POLYNOMIAL_CHREC::t_code_c:
      return ((Context*)this)->call_type_POLYNOMIAL_CHREC(t);
      break;


    case TC_STATEMENT_LIST::t_code_c:
      return ((Context*)this)->call_type_STATEMENT_LIST(t);
      break;


    case TC_ASSERT_EXPR::t_code_c:
      return ((Context*)this)->call_type_ASSERT_EXPR(t);
      break;


    case TC_TREE_BINFO::t_code_c:
      return ((Context*)this)->call_type_TREE_BINFO(t);
      break;


    case TC_WITH_SIZE_EXPR::t_code_c:
      return ((Context*)this)->call_type_WITH_SIZE_EXPR(t);
      break;


    case TC_REALIGN_LOAD_EXPR::t_code_c:
      return ((Context*)this)->call_type_REALIGN_LOAD_EXPR(t);
      break;


    case TC_TARGET_MEM_REF::t_code_c:
      return ((Context*)this)->call_type_TARGET_MEM_REF(t);
      break;


    case TC_MEM_REF::t_code_c:
      return ((Context*)this)->call_type_MEM_REF(t);
      break;


    case TC_OACC_PARALLEL::t_code_c:
      return ((Context*)this)->call_type_OACC_PARALLEL(t);
      break;


    case TC_OACC_KERNELS::t_code_c:
      return ((Context*)this)->call_type_OACC_KERNELS(t);
      break;


    case TC_OACC_DATA::t_code_c:
      return ((Context*)this)->call_type_OACC_DATA(t);
      break;


    case TC_OACC_HOST_DATA::t_code_c:
      return ((Context*)this)->call_type_OACC_HOST_DATA(t);
      break;


    case TC_OMP_PARALLEL::t_code_c:
      return ((Context*)this)->call_type_OMP_PARALLEL(t);
      break;


    case TC_OMP_TASK::t_code_c:
      return ((Context*)this)->call_type_OMP_TASK(t);
      break;


    case TC_OMP_FOR::t_code_c:
      return ((Context*)this)->call_type_OMP_FOR(t);
      break;


    case TC_OMP_SIMD::t_code_c:
      return ((Context*)this)->call_type_OMP_SIMD(t);
      break;


    case TC_CILK_SIMD::t_code_c:
      return ((Context*)this)->call_type_CILK_SIMD(t);
      break;


    case TC_CILK_FOR::t_code_c:
      return ((Context*)this)->call_type_CILK_FOR(t);
      break;


    case TC_OMP_DISTRIBUTE::t_code_c:
      return ((Context*)this)->call_type_OMP_DISTRIBUTE(t);
      break;


    case TC_OACC_LOOP::t_code_c:
      return ((Context*)this)->call_type_OACC_LOOP(t);
      break;


    case TC_OMP_TEAMS::t_code_c:
      return ((Context*)this)->call_type_OMP_TEAMS(t);
      break;


    case TC_OMP_TARGET_DATA::t_code_c:
      return ((Context*)this)->call_type_OMP_TARGET_DATA(t);
      break;


    case TC_OMP_TARGET::t_code_c:
      return ((Context*)this)->call_type_OMP_TARGET(t);
      break;


    case TC_OMP_SECTIONS::t_code_c:
      return ((Context*)this)->call_type_OMP_SECTIONS(t);
      break;


    case TC_OMP_SINGLE::t_code_c:
      return ((Context*)this)->call_type_OMP_SINGLE(t);
      break;


    case TC_OMP_SECTION::t_code_c:
      return ((Context*)this)->call_type_OMP_SECTION(t);
      break;


    case TC_OMP_MASTER::t_code_c:
      return ((Context*)this)->call_type_OMP_MASTER(t);
      break;


    case TC_OMP_TASKGROUP::t_code_c:
      return ((Context*)this)->call_type_OMP_TASKGROUP(t);
      break;


    case TC_OMP_ORDERED::t_code_c:
      return ((Context*)this)->call_type_OMP_ORDERED(t);
      break;


    case TC_OMP_CRITICAL::t_code_c:
      return ((Context*)this)->call_type_OMP_CRITICAL(t);
      break;


    case TC_OACC_CACHE::t_code_c:
      return ((Context*)this)->call_type_OACC_CACHE(t);
      break;


    case TC_OACC_DECLARE::t_code_c:
      return ((Context*)this)->call_type_OACC_DECLARE(t);
      break;


    case TC_OACC_ENTER_DATA::t_code_c:
      return ((Context*)this)->call_type_OACC_ENTER_DATA(t);
      break;


    case TC_OACC_EXIT_DATA::t_code_c:
      return ((Context*)this)->call_type_OACC_EXIT_DATA(t);
      break;


    case TC_OACC_UPDATE::t_code_c:
      return ((Context*)this)->call_type_OACC_UPDATE(t);
      break;


    case TC_OMP_TARGET_UPDATE::t_code_c:
      return ((Context*)this)->call_type_OMP_TARGET_UPDATE(t);
      break;


    case TC_OMP_ATOMIC::t_code_c:
      return ((Context*)this)->call_type_OMP_ATOMIC(t);
      break;


    case TC_OMP_ATOMIC_READ::t_code_c:
      return ((Context*)this)->call_type_OMP_ATOMIC_READ(t);
      break;


    case TC_OMP_ATOMIC_CAPTURE_OLD::t_code_c:
      return ((Context*)this)->call_type_OMP_ATOMIC_CAPTURE_OLD(t);
      break;


    case TC_OMP_ATOMIC_CAPTURE_NEW::t_code_c:
      return ((Context*)this)->call_type_OMP_ATOMIC_CAPTURE_NEW(t);
      break;


    case TC_OMP_CLAUSE::t_code_c:
      return ((Context*)this)->call_type_OMP_CLAUSE(t);
      break;


    case TC_TRANSACTION_EXPR::t_code_c:
      return ((Context*)this)->call_type_TRANSACTION_EXPR(t);
      break;


    case TC_REDUC_MAX_EXPR::t_code_c:
      return ((Context*)this)->call_type_REDUC_MAX_EXPR(t);
      break;


    case TC_REDUC_MIN_EXPR::t_code_c:
      return ((Context*)this)->call_type_REDUC_MIN_EXPR(t);
      break;


    case TC_REDUC_PLUS_EXPR::t_code_c:
      return ((Context*)this)->call_type_REDUC_PLUS_EXPR(t);
      break;


    case TC_DOT_PROD_EXPR::t_code_c:
      return ((Context*)this)->call_type_DOT_PROD_EXPR(t);
      break;


    case TC_WIDEN_SUM_EXPR::t_code_c:
      return ((Context*)this)->call_type_WIDEN_SUM_EXPR(t);
      break;


    case TC_SAD_EXPR::t_code_c:
      return ((Context*)this)->call_type_SAD_EXPR(t);
      break;


    case TC_WIDEN_MULT_EXPR::t_code_c:
      return ((Context*)this)->call_type_WIDEN_MULT_EXPR(t);
      break;


    case TC_WIDEN_MULT_PLUS_EXPR::t_code_c:
      return ((Context*)this)->call_type_WIDEN_MULT_PLUS_EXPR(t);
      break;


    case TC_WIDEN_MULT_MINUS_EXPR::t_code_c:
      return ((Context*)this)->call_type_WIDEN_MULT_MINUS_EXPR(t);
      break;


    case TC_WIDEN_LSHIFT_EXPR::t_code_c:
      return ((Context*)this)->call_type_WIDEN_LSHIFT_EXPR(t);
      break;


    case TC_FMA_EXPR::t_code_c:
      return ((Context*)this)->call_type_FMA_EXPR(t);
      break;


    case TC_VEC_WIDEN_MULT_HI_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_WIDEN_MULT_HI_EXPR(t);
      break;


    case TC_VEC_WIDEN_MULT_LO_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_WIDEN_MULT_LO_EXPR(t);
      break;


    case TC_VEC_WIDEN_MULT_EVEN_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_WIDEN_MULT_EVEN_EXPR(t);
      break;


    case TC_VEC_WIDEN_MULT_ODD_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_WIDEN_MULT_ODD_EXPR(t);
      break;


    case TC_VEC_UNPACK_HI_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_UNPACK_HI_EXPR(t);
      break;


    case TC_VEC_UNPACK_LO_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_UNPACK_LO_EXPR(t);
      break;


    case TC_VEC_UNPACK_FLOAT_HI_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_UNPACK_FLOAT_HI_EXPR(t);
      break;


    case TC_VEC_UNPACK_FLOAT_LO_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_UNPACK_FLOAT_LO_EXPR(t);
      break;


    case TC_VEC_PACK_TRUNC_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_PACK_TRUNC_EXPR(t);
      break;


    case TC_VEC_PACK_SAT_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_PACK_SAT_EXPR(t);
      break;


    case TC_VEC_PACK_FIX_TRUNC_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_PACK_FIX_TRUNC_EXPR(t);
      break;


    case TC_VEC_WIDEN_LSHIFT_HI_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_WIDEN_LSHIFT_HI_EXPR(t);
      break;


    case TC_VEC_WIDEN_LSHIFT_LO_EXPR::t_code_c:
      return ((Context*)this)->call_type_VEC_WIDEN_LSHIFT_LO_EXPR(t);
      break;


    case TC_PREDICT_EXPR::t_code_c:
      return ((Context*)this)->call_type_PREDICT_EXPR(t);
      break;


    case TC_OPTIMIZATION_NODE::t_code_c:
      return ((Context*)this)->call_type_OPTIMIZATION_NODE(t);
      break;


    case TC_TARGET_OPTION_NODE::t_code_c:
      return ((Context*)this)->call_type_TARGET_OPTION_NODE(t);
      break;


    case TC_ANNOTATE_EXPR::t_code_c:
      return ((Context*)this)->call_type_ANNOTATE_EXPR(t);
      break;


    case TC_CILK_SPAWN_STMT::t_code_c:
      return ((Context*)this)->call_type_CILK_SPAWN_STMT(t);
      break;


    case TC_CILK_SYNC_STMT::t_code_c:
      return ((Context*)this)->call_type_CILK_SYNC_STMT(t);
      break;

    default:
      enum tree_code tc=t->typed.base.code;
      cerr << "TODO: UKNOWN switchcall "<< get_tree_code_name (tc) << endl;
      break;
    }

  }
};
