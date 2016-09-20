enum tree_code {
ERROR_MARK,
IDENTIFIER_NODE,
TREE_LIST,
TREE_VEC,
BLOCK,
// 126 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
OFFSET_TYPE,
// 139 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
ENUMERAL_TYPE,
BOOLEAN_TYPE,
// 153 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
INTEGER_TYPE,
REAL_TYPE,
// 166 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
POINTER_TYPE,REFERENCE_TYPE,
NULLPTR_TYPE,
FIXED_POINT_TYPE,
// 187 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
COMPLEX_TYPE,
VECTOR_TYPE,
// 208 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
ARRAY_TYPE,
// 218 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
RECORD_TYPE,UNION_TYPE,QUAL_UNION_TYPE,
VOID_TYPE,
POINTER_BOUNDS_TYPE,FUNCTION_TYPE,
METHOD_TYPE,LANG_TYPE,VOID_CST,
// 289 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
INTEGER_CST,
REAL_CST,
FIXED_CST,COMPLEX_CST,
VECTOR_CST,
STRING_CST,
// 365 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
FUNCTION_DECL,
LABEL_DECL,
FIELD_DECL,
VAR_DECL,
CONST_DECL,
PARM_DECL,
TYPE_DECL,
RESULT_DECL,DEBUG_EXPR_DECL,NAMESPACE_DECL,
// 395 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
IMPORTED_DECL,
// 405 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
NAMELIST_DECL,TRANSLATION_UNIT_DECL,
// 422 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
COMPONENT_REF,
// 432 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
BIT_FIELD_REF,
ARRAY_REF,
ARRAY_RANGE_REF,REALPART_EXPR,
IMAGPART_EXPR,
// 461 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
VIEW_CONVERT_EXPR,
INDIRECT_REF,
// 473 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
OBJ_TYPE_REF,
// 492 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
CONSTRUCTOR,
// 502 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
COMPOUND_EXPR,
MODIFY_EXPR,
INIT_EXPR,TARGET_EXPR,
// 532 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
COND_EXPR,
// 544 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
VEC_COND_EXPR,
// 558 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
VEC_PERM_EXPR,
// 581 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
BIND_EXPR,CALL_EXPR,
WITH_CLEANUP_EXPR,
// 613 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
CLEANUP_POINT_EXPR,
// 665 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
PLACEHOLDER_EXPR,
PLUS_EXPR,
MINUS_EXPR,
MULT_EXPR,POINTER_PLUS_EXPR,MULT_HIGHPART_EXPR,
TRUNC_DIV_EXPR,
CEIL_DIV_EXPR,
FLOOR_DIV_EXPR,
ROUND_DIV_EXPR,
TRUNC_MOD_EXPR,
CEIL_MOD_EXPR,
FLOOR_MOD_EXPR,
ROUND_MOD_EXPR,
RDIV_EXPR,EXACT_DIV_EXPR,
FIX_TRUNC_EXPR,
FLOAT_EXPR,
NEGATE_EXPR,
MIN_EXPR,
MAX_EXPR,ABS_EXPR,
// 739 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
LSHIFT_EXPR,
RSHIFT_EXPR,
LROTATE_EXPR,
RROTATE_EXPR,
BIT_IOR_EXPR,
BIT_XOR_EXPR,
BIT_AND_EXPR,
BIT_NOT_EXPR,
// 759 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
TRUTH_ANDIF_EXPR,
TRUTH_ORIF_EXPR,
TRUTH_AND_EXPR,
TRUTH_OR_EXPR,
TRUTH_XOR_EXPR,
TRUTH_NOT_EXPR,
// 775 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
LT_EXPR,
LE_EXPR,
GT_EXPR,
GE_EXPR,
EQ_EXPR,
NE_EXPR,
UNORDERED_EXPR,
ORDERED_EXPR,
UNLT_EXPR,
UNLE_EXPR,
UNGT_EXPR,
UNGE_EXPR,
UNEQ_EXPR,
LTGT_EXPR,RANGE_EXPR,PAREN_EXPR,
CONVERT_EXPR,ADDR_SPACE_CONVERT_EXPR,
FIXED_CONVERT_EXPR,
NOP_EXPR,
NON_LVALUE_EXPR,
COMPOUND_LITERAL_EXPR,
SAVE_EXPR,ADDR_EXPR,FDESC_EXPR,COMPLEX_EXPR,
CONJ_EXPR,
PREDECREMENT_EXPR,
PREINCREMENT_EXPR,
POSTDECREMENT_EXPR,
POSTINCREMENT_EXPR,
VA_ARG_EXPR,
TRY_CATCH_EXPR,
TRY_FINALLY_EXPR,DECL_EXPR,
LABEL_EXPR,GOTO_EXPR,
RETURN_EXPR,EXIT_EXPR,
LOOP_EXPR,
// 915 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
SWITCH_EXPR,
// 927 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
CASE_LABEL_EXPR,
ASM_EXPR,
SSA_NAME,CATCH_EXPR,
EH_FILTER_EXPR,SCEV_KNOWN,SCEV_NOT_KNOWN,POLYNOMIAL_CHREC,STATEMENT_LIST,
// 983 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
ASSERT_EXPR,TREE_BINFO,
WITH_SIZE_EXPR,
// 1005 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
REALIGN_LOAD_EXPR,
// 1021 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
TARGET_MEM_REF,
// 1031 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
MEM_REF,
// 1040 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
OACC_PARALLEL,OACC_KERNELS,OACC_DATA,OACC_HOST_DATA,OMP_PARALLEL,OMP_TASK,
// 1091 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
OMP_FOR,OMP_SIMD,CILK_SIMD,CILK_FOR,OMP_DISTRIBUTE,OACC_LOOP,
OMP_TEAMS,
OMP_TARGET_DATA,
OMP_TARGET,
OMP_SECTIONS,
OMP_SINGLE,OMP_SECTION,OMP_MASTER,OMP_TASKGROUP,OMP_ORDERED,
OMP_CRITICAL,
OACC_CACHE,OACC_DECLARE,OACC_ENTER_DATA,OACC_EXIT_DATA,OACC_UPDATE,OMP_TARGET_UPDATE,
// 1193 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
OMP_ATOMIC,
OMP_ATOMIC_READ,
// 1208 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
OMP_ATOMIC_CAPTURE_OLD,
OMP_ATOMIC_CAPTURE_NEW,
OMP_CLAUSE,TRANSACTION_EXPR,
// 1226 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
REDUC_MAX_EXPR,
REDUC_MIN_EXPR,
REDUC_PLUS_EXPR,
// 1239 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
DOT_PROD_EXPR,
// 1248 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
WIDEN_SUM_EXPR,
// 1264 "/usr/lib/gcc/x86_64-linux-gnu/5/plugin/include/tree.def"
SAD_EXPR,
WIDEN_MULT_EXPR,

WIDEN_MULT_PLUS_EXPR,
WIDEN_MULT_MINUS_EXPR,

WIDEN_LSHIFT_EXPR,FMA_EXPR,
VEC_WIDEN_MULT_HI_EXPR,
VEC_WIDEN_MULT_LO_EXPR,
VEC_WIDEN_MULT_EVEN_EXPR,
VEC_WIDEN_MULT_ODD_EXPR,VEC_UNPACK_HI_EXPR,
VEC_UNPACK_LO_EXPR,VEC_UNPACK_FLOAT_HI_EXPR,
VEC_UNPACK_FLOAT_LO_EXPR,VEC_PACK_TRUNC_EXPR,
VEC_PACK_SAT_EXPR,VEC_PACK_FIX_TRUNC_EXPR,

VEC_WIDEN_LSHIFT_HI_EXPR,
VEC_WIDEN_LSHIFT_LO_EXPR,
PREDICT_EXPR,
OPTIMIZATION_NODE,
TARGET_OPTION_NODE,
ANNOTATE_EXPR,CILK_SPAWN_STMT,
CILK_SYNC_STMT,

LAST_AND_UNUSED_TREE_CODE,

C_MAYBE_CONST_EXPR,
EXCESS_PRECISION_EXPR,USERDEF_LITERAL,SIZEOF_EXPR,
ARRAY_NOTATION_REF,

UNCONSTRAINED_ARRAY_TYPE,UNCONSTRAINED_ARRAY_REF,
NULL_EXPR,PLUS_NOMOD_EXPR,MINUS_NOMOD_EXPR,
ATTR_ADDR_EXPR,

STMT_STMT,LOOP_STMT,EXIT_STMT,
OFFSET_REF,
PTRMEM_CST,NEW_EXPR,
VEC_NEW_EXPR,
DELETE_EXPR,
VEC_DELETE_EXPR,
SCOPE_REF,
MEMBER_REF,TYPE_EXPR,
AGGR_INIT_EXPR,
VEC_INIT_EXPR,THROW_EXPR,EMPTY_CLASS_EXPR,
BASELINK,
TEMPLATE_DECL,
TEMPLATE_PARM_INDEX,
TEMPLATE_TEMPLATE_PARM,
TEMPLATE_TYPE_PARM,TYPENAME_TYPE,TYPEOF_TYPE,BOUND_TEMPLATE_TEMPLATE_PARM,UNBOUND_CLASS_TEMPLATE,USING_DECL,
USING_STMT,
DEFAULT_ARG,DEFERRED_NOEXCEPT,
TEMPLATE_ID_EXPR,OVERLOAD,
PSEUDO_DTOR_EXPR,MODOP_EXPR,
CAST_EXPR,
REINTERPRET_CAST_EXPR,
CONST_CAST_EXPR,
STATIC_CAST_EXPR,
DYNAMIC_CAST_EXPR,
IMPLICIT_CONV_EXPR,
DOTSTAR_EXPR,
TYPEID_EXPR,
NOEXCEPT_EXPR,
NON_DEPENDENT_EXPR,CTOR_INITIALIZER,TRY_BLOCK,EH_SPEC_BLOCK,HANDLER,
MUST_NOT_THROW_EXPR,
CLEANUP_STMT,IF_STMT,FOR_STMT,
RANGE_FOR_STMT,WHILE_STMT,DO_STMT,
BREAK_STMT,
CONTINUE_STMT,
SWITCH_STMT,EXPR_STMT,TAG_DEFN,
OFFSETOF_EXPR,
ARROW_EXPR,ALIGNOF_EXPR,AT_ENCODE_EXPR,
STMT_EXPR,UNARY_PLUS_EXPR,STATIC_ASSERT,
TYPE_ARGUMENT_PACK,
NONTYPE_ARGUMENT_PACK,
TYPE_PACK_EXPANSION,
EXPR_PACK_EXPANSION,
ARGUMENT_PACK_SELECT,
TRAIT_EXPR,
LAMBDA_EXPR,
DECLTYPE_TYPE,UNDERLYING_TYPE,BASES,
TEMPLATE_INFO,
IASM_EXPR,UNSIGNED_RSHIFT_EXPR,
FLOAT_MOD_EXPR,
URSHIFT_EXPR,COMPARE_EXPR,
COMPARE_L_EXPR,COMPARE_G_EXPR,
CLASS_INTERFACE_TYPE,
CLASS_IMPLEMENTATION_TYPE,CATEGORY_INTERFACE_TYPE,
CATEGORY_IMPLEMENTATION_TYPE,PROTOCOL_INTERFACE_TYPE,
KEYWORD_DECL,
INSTANCE_METHOD_DECL,
CLASS_METHOD_DECL,
PROPERTY_DECL,
MESSAGE_SEND_EXPR,
CLASS_REFERENCE_EXPR,
PROPERTY_REF,
MAX_TREE_CODES
};
struct tree_base {
  enum tree_code code : 16;  unsigned side_effects_flag : 1;
  unsigned constant_flag : 1;
  unsigned addressable_flag : 1;
  unsigned volatile_flag : 1;
  unsigned readonly_flag : 1;
  unsigned asm_written_flag: 1;
  unsigned nowarning_flag : 1;
  unsigned visited : 1;  unsigned used_flag : 1;
  unsigned nothrow_flag : 1;
  unsigned static_flag : 1;
  unsigned public_flag : 1;
  unsigned private_flag : 1;
  unsigned protected_flag : 1;
  unsigned deprecated_flag : 1;
  unsigned default_def_flag : 1;  union {
    struct {
      unsigned lang_flag_0 : 1;
      unsigned lang_flag_1 : 1;
      unsigned lang_flag_2 : 1;
      unsigned lang_flag_3 : 1;
      unsigned lang_flag_4 : 1;
      unsigned lang_flag_5 : 1;
      unsigned lang_flag_6 : 1;
      unsigned saturating_flag : 1;      unsigned unsigned_flag : 1;
      unsigned packed_flag : 1;
      unsigned user_align : 1;
      unsigned nameless_flag : 1;
      unsigned atomic_flag : 1;
      unsigned spare0 : 3;      unsigned spare1 : 8;
      unsigned address_space : 8;
    } bits;
    struct {
      unsigned char unextended;      unsigned char extended;      unsigned char offset;
    } int_length;
    int length;
    unsigned int version;
    enum internal_fn ifn;
    struct {
      unsigned short clique;
      unsigned short base;
    } dependence_info;
  } u;
};
