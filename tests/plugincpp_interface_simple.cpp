enum tree_code {
  stuff
};

enum machine_mode {};

union tree_node;
typedef union tree_node *tree;
struct double_int {};


struct tree_base {
  enum tree_code code : 16;
  unsigned side_effects_flag : 1;
  unsigned constant_flag : 1;
  unsigned addressable_flag : 1;
  unsigned volatile_flag : 1;
  unsigned readonly_flag : 1;
  unsigned asm_written_flag: 1;
  unsigned nowarning_flag : 1;
  unsigned visited : 1;
  unsigned used_flag : 1;
  unsigned nothrow_flag : 1;
  unsigned static_flag : 1;
  unsigned public_flag : 1;
  unsigned private_flag : 1;
  unsigned protected_flag : 1;
  unsigned deprecated_flag : 1;
  unsigned default_def_flag : 1;
  union tree_base_union {
    struct tree_base_union_bits {
      unsigned lang_flag_0 : 1;
      unsigned lang_flag_1 : 1;
      unsigned lang_flag_2 : 1;
      unsigned lang_flag_3 : 1;
      unsigned lang_flag_4 : 1;
      unsigned lang_flag_5 : 1;
      unsigned lang_flag_6 : 1;
      unsigned saturating_flag : 1;
      unsigned unsigned_flag : 1;
      unsigned packed_flag : 1;
      unsigned user_align : 1;
      unsigned nameless_flag : 1;
      unsigned atomic_flag : 1;
      unsigned spare0 : 3;
      unsigned spare1 : 8;
      unsigned address_space : 8;
    } bits;
    
    int length;
    unsigned int version;
  } u;
  
};

struct tree_typed {
  struct tree_base base;
  tree type;
};

struct tree_common {
  struct tree_typed typed;
  tree chain;
};

struct tree_int_cst {
  struct tree_typed typed;
  double_int int_cst;
};

struct tree_real_cst {
  struct tree_typed typed;
  struct real_value * real_cst_ptr;
};

struct tree_fixed_cst {
  struct tree_typed typed;
  struct fixed_value * fixed_cst_ptr;
};

struct tree_string {
  struct tree_typed typed;
  int length;
  char str[1];
};

struct tree_complex {
  struct tree_typed typed;
  tree real;
  tree imag;
};

struct tree_vector {
  struct tree_typed typed;
  tree elts[1];
};

typedef struct ht_identifier ht_identifier;
typedef struct ht_identifier *ht_identifier_ptr;
struct ht_identifier {
  const unsigned char *str;
  unsigned int len;
  unsigned int hash_value;
};

typedef int alias_set_type;

struct tree_identifier {
  struct tree_common common;
  struct ht_identifier id;
};

struct tree_list {
  struct tree_common common;
  tree purpose;
  tree value;
};

struct tree_vec {
  struct tree_common common;
  tree a[1];
};

struct constructor_elt {
  tree index;
  tree value;
};

class vec_constructor_elt {
};

class vec_tree {
};

struct tree_constructor {
  struct tree_typed typed;
  vec_constructor_elt *elts;
};

struct tree_type_common {
  struct tree_common common;
  tree size;
  tree size_unit;
  tree attributes;
  unsigned int uid;
  unsigned int precision : 10;
  unsigned no_force_blk_flag : 1;
  unsigned needs_constructing_flag : 1;
  unsigned transparent_aggr_flag : 1;
  unsigned restrict_flag : 1;
  unsigned contains_placeholder_bits : 2;
  enum machine_mode mode : 8;
  unsigned string_flag : 1;
  unsigned lang_flag_0 : 1;
  unsigned lang_flag_1 : 1;
  unsigned lang_flag_2 : 1;
  unsigned lang_flag_3 : 1;
  unsigned lang_flag_4 : 1;
  unsigned lang_flag_5 : 1;
  unsigned lang_flag_6 : 1;
  unsigned int align;
  alias_set_type alias_set;
  tree pointer_to;
  tree reference_to;
  union tree_type_symtab {
    int address;
    const char * pointer;
    struct die_struct * die;
  } symtab;
  
  tree canonical;
  tree next_variant;
  tree main_variant;
  tree context;
  tree name;
};

struct tree_type_with_lang_specific {
  struct tree_type_common common;
  struct lang_type *lang_specific;
};

struct tree_type_non_common {
  struct tree_type_with_lang_specific with_lang_specific;
  tree values;
  tree minval;
  tree maxval;
  tree binfo;
};

struct tree_binfo {
  struct tree_common common;
  tree offset;
  tree vtable;
  tree virtuals;
  tree vptr_field;
  vec_tree *base_accesses;
  tree inheritance;
  tree vtt_subvtt;
  tree vtt_vptr;
  vec_tree base_binfos;
};

typedef unsigned int source_location;
typedef source_location location_t;
extern location_t input_location;

struct tree_decl_minimal {
  struct tree_common common;
  location_t locus;
  unsigned int uid;
  tree name;
  tree context;
};

struct tree_decl_common {
  struct tree_decl_minimal common;
  tree size;
  enum machine_mode mode : 8;
  unsigned nonlocal_flag : 1;
  unsigned virtual_flag : 1;
  unsigned ignored_flag : 1;
  unsigned abstract_flag : 1;
  unsigned artificial_flag : 1;
  unsigned preserve_flag: 1;
  unsigned debug_expr_is_from : 1;
  unsigned lang_flag_0 : 1;
  unsigned lang_flag_1 : 1;
  unsigned lang_flag_2 : 1;
  unsigned lang_flag_3 : 1;
  unsigned lang_flag_4 : 1;
  unsigned lang_flag_5 : 1;
  unsigned lang_flag_6 : 1;
  unsigned lang_flag_7 : 1;
  unsigned lang_flag_8 : 1;
  unsigned decl_flag_0 : 1;
  unsigned decl_flag_1 : 1;
  unsigned decl_flag_2 : 1;
  unsigned decl_flag_3 : 1;
  unsigned gimple_reg_flag : 1;
  unsigned decl_by_reference_flag : 1;
  unsigned decl_read_flag : 1;
  unsigned decl_nonshareable_flag : 1;
  unsigned int off_align : 8;
  unsigned int align;
  unsigned int pt_uid;
  tree size_unit;
  tree initial;
  tree attributes;
  tree abstract_origin;
  struct lang_decl *lang_specific;
};

struct rtx_def;
typedef struct rtx_def *rtx;

struct tree_decl_with_rtl {
  struct tree_decl_common common;
  rtx rtl;
};

struct tree_field_decl {
  struct tree_decl_common common;
  tree offset;
  tree bit_field_type;
  tree qualifier;
  tree bit_offset;
  tree fcontext;
};

struct tree_label_decl {
  struct tree_decl_with_rtl common;
  int label_decl_uid;
  int eh_landing_pad_nr;
};

struct tree_result_decl {
  struct tree_decl_with_rtl common;
};

struct tree_const_decl {
  struct tree_decl_common common;
};

struct tree_parm_decl {
  struct tree_decl_with_rtl common;
  rtx incoming_rtl;
};
enum symbol_visibility {};
enum tls_model {};
enum built_in_function {
  something,
  END_BUILTINS,
};
enum built_in_class {};

struct tree_decl_with_vis {
 struct tree_decl_with_rtl common;
 tree assembler_name;
 tree section_name;
 tree comdat_group;
 unsigned defer_output : 1;
 unsigned hard_register : 1;
 unsigned common_flag : 1;
 unsigned in_text_section : 1;
 unsigned in_constant_pool : 1;
 unsigned dllimport_flag : 1;
 unsigned weak_flag : 1;
 unsigned implicit_section_name_p : 1;
 unsigned seen_in_bind_expr : 1;
 unsigned comdat_flag : 1;
 enum symbol_visibility visibility : 2;
 unsigned visibility_specified : 1;
 enum tls_model tls_model : 3;
 unsigned init_priority_p : 1;
 unsigned shadowed_for_var_p : 1;
 unsigned cxx_constructor : 1;
 unsigned cxx_destructor : 1;
 unsigned final : 1;
};

struct tree_var_decl {
  struct tree_decl_with_vis common;
};

struct tree_decl_non_common {
  struct tree_decl_with_vis common;
  tree saved_tree;
  tree arguments;
  tree result;
  tree vindex;
};

struct tree_function_decl {
  struct tree_decl_non_common common;
  struct function *f;
  tree personality;
  tree function_specific_target;
  tree function_specific_optimization;
  enum built_in_function function_code : 11;
  enum built_in_class built_in_class : 2;
  unsigned static_ctor_flag : 1;
  unsigned static_dtor_flag : 1;
  unsigned uninlinable : 1;
  unsigned possibly_inlined : 1;
  unsigned novops_flag : 1;
  unsigned returns_twice_flag : 1;
  unsigned malloc_flag : 1;
  unsigned operator_new_flag : 1;
  unsigned declared_inline_flag : 1;
  unsigned regdecl_flag : 1;
  unsigned no_inline_warning_flag : 1;
  unsigned no_instrument_function_entry_exit : 1;
  unsigned no_limit_stack : 1;
  unsigned disregard_inline_limits : 1;
  unsigned pure_flag : 1;
  unsigned looping_const_or_pure_flag : 1;
  unsigned has_debug_args_flag : 1;
  unsigned tm_clone_flag : 1;
  unsigned versioned_function : 1;
};
struct tree_translation_unit_decl {
  struct tree_decl_common common;
  const char * language;
};

struct tree_type_decl {
  struct tree_decl_non_common common;
};

struct tree_statement_list_node
 {
  struct tree_statement_list_node *prev;
  struct tree_statement_list_node *next;
  tree stmt;
};

struct tree_statement_list
 {
  struct tree_typed typed;
  struct tree_statement_list_node *head;
  struct tree_statement_list_node *tail;
};

struct cl_optimization
{};

struct tree_optimization_option {
  struct tree_common common;
  struct cl_optimization opts;
  void * optabs;
  struct target_optabs * base_optabs;
};

struct target_globals;
struct cl_target_option {};

struct tree_target_option {
  struct tree_common common;
  struct target_globals *globals;
  struct cl_target_option opts;
};

struct tree_exp {
  struct tree_typed typed;
  location_t locus;
  tree operands[1];
};

  
union tree_node {
  struct tree_base base;
  struct tree_typed typed;
  struct tree_common common;
  struct tree_int_cst int_cst;
  struct tree_real_cst real_cst;
  struct tree_fixed_cst fixed_cst;
  struct tree_vector vector;
  struct tree_string string;
  struct tree_complex complex;
  struct tree_identifier identifier;
  struct tree_decl_minimal decl_minimal;
  struct tree_decl_common decl_common;
  struct tree_decl_with_rtl decl_with_rtl;
  struct tree_decl_non_common
    decl_non_common;
  struct tree_parm_decl parm_decl;
  struct tree_decl_with_vis decl_with_vis;
  struct tree_var_decl var_decl;
  struct tree_field_decl field_decl;
  struct tree_label_decl label_decl;
  struct tree_result_decl result_decl;
  struct tree_const_decl const_decl;
  struct tree_type_decl type_decl;
  struct tree_function_decl function_decl;
  struct tree_translation_unit_decl
    translation_unit_decl;
  struct tree_type_common type_common;
  struct tree_type_with_lang_specific
    type_with_lang_specific;
  struct tree_type_non_common
    type_non_common;
  struct tree_list list;
  struct tree_vec vec;
  struct tree_exp exp;
  //  struct tree_ssa_name ssa_name;
  //  struct tree_block block;
  struct tree_binfo binfo;
  struct tree_statement_list stmt_list;
  struct tree_constructor constructor;
  //  struct tree_omp_clause omp_clause;
  struct tree_optimization_option optimization;
  struct tree_target_option target_option;
};

struct attribute_spec {
  const char *name;
  int min_length;
  int max_length;
  bool decl_required;
  bool type_required;
  bool function_type_required;
  //tree (*handler) (tree *node, tree name, tree args,     int flags, bool *no_add_attrs);
  bool affects_type_identity;
};

typedef struct record_layout_info_s {
  tree t;
  tree offset;
  unsigned int offset_align;
  tree bitpos;
  unsigned int record_align;
  unsigned int unpacked_align;
  tree prev_field;
  vec_tree *pending_statics;
  int remaining_in_alignment;
  int packed_maybe_necessary;
} *record_layout_info;

struct function_args_iterator {
  tree next;
};

struct tree_map_base {
  tree from;
};

struct tree_map {
  struct tree_map_base base;
  unsigned int hash;
  tree to;
};

struct tree_decl_map {
  struct tree_map_base base;
  tree to;
};

struct tree_int_map {
  struct tree_map_base base;
  unsigned int to;
};
typedef unsigned short priority_type;
struct tree_priority_map {
  struct tree_map_base base;
  priority_type init;
  priority_type fini;
};

struct tree_vec_map {
  struct tree_map_base base;
  vec_tree *to;
};

struct call_expr_arg_iterator {
  tree t;
  int n;
  int i;
};
typedef const union tree_node *const_tree;
struct const_call_expr_arg_iterator {
  const_tree t;
  int n;
  int i;
};

struct builtin_info_type {
  tree decl[(int)END_BUILTINS];
  bool implicit_p[(int)END_BUILTINS];
};

