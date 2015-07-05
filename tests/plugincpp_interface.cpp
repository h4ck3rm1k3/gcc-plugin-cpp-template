namespace std
{
  typedef long unsigned int size_t;
};

typedef long unsigned int size_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;

extern void free (void *__ptr) throw ();

typedef int (*__compar_fn_t) (const void *, const void *);
typedef __compar_fn_t comparison_fn_t;

extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

typedef long gcov_type;
typedef unsigned long gcov_type_unsigned;

struct bitmap_head;
typedef struct bitmap_head *bitmap;
typedef const struct bitmap_head *const_bitmap;
struct simple_bitmap_def;
typedef struct simple_bitmap_def *sbitmap;
typedef const struct simple_bitmap_def *const_sbitmap;
struct rtx_def;
typedef struct rtx_def *rtx;
typedef const struct rtx_def *const_rtx;
struct rtvec_def;
typedef struct rtvec_def *rtvec;
typedef const struct rtvec_def *const_rtvec;
union tree_node;
typedef union tree_node *tree;
typedef const union tree_node *const_tree;
typedef struct gimple_statement_base *gimple;
typedef const struct gimple_statement_base *const_gimple;
typedef gimple gimple_seq;
struct gimple_stmt_iterator;
union section;
typedef union section section;
struct gcc_options;
struct cl_target_option;
struct cl_optimization;
struct cl_option;
struct cl_decoded_option;
struct cl_option_handlers;
struct diagnostic_context;
struct pretty_printer;
typedef unsigned char addr_space_t;

enum ir_type {
  IR_GIMPLE,
  IR_RTL_CFGRTL,
  IR_RTL_CFGLAYOUT
};






struct cpp_reader;
struct cpp_token;




enum tls_model {
  TLS_MODEL_NONE,
  TLS_MODEL_EMULATED,
  TLS_MODEL_REAL,
  TLS_MODEL_GLOBAL_DYNAMIC = TLS_MODEL_REAL,
  TLS_MODEL_LOCAL_DYNAMIC,
  TLS_MODEL_INITIAL_EXEC,
  TLS_MODEL_LOCAL_EXEC
};



enum unwind_info_type
{
  UI_NONE,
  UI_SJLJ,
  UI_DWARF2,
  UI_TARGET,
  UI_SEH
};


enum node_frequency {


  NODE_FREQUENCY_UNLIKELY_EXECUTED,


  NODE_FREQUENCY_EXECUTED_ONCE,

  NODE_FREQUENCY_NORMAL,


  NODE_FREQUENCY_HOT
};




enum var_init_status
{
  VAR_INIT_STATUS_UNKNOWN,
  VAR_INIT_STATUS_UNINITIALIZED,
  VAR_INIT_STATUS_INITIALIZED
};


struct edge_def;
typedef struct edge_def *edge;
typedef const struct edge_def *const_edge;
struct basic_block_def;
typedef struct basic_block_def *basic_block;
typedef const struct basic_block_def *const_basic_block;
// # 169 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/coretypes.h"
typedef int reg_class_t;

class rtl_opt_pass;

namespace gcc {
  class context;
}
// # 193 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/coretypes.h"
enum function_class {
  function_c94,
  function_c99_misc,
  function_c99_math_complex,
  function_sincos
};



enum memmodel
{
  MEMMODEL_RELAXED = 0,
  MEMMODEL_CONSUME = 1,
  MEMMODEL_ACQUIRE = 2,
  MEMMODEL_RELEASE = 3,
  MEMMODEL_ACQ_REL = 4,
  MEMMODEL_SEQ_CST = 5,
  MEMMODEL_LAST = 6
};






typedef void (*gt_pointer_operator) (void *, void *);


typedef unsigned char uchar;
// # 30 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gcc-plugin.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/highlev-plugin-common.h" 1
// # 31 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gcc-plugin.h" 2



enum plugin_event
{

// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/plugin.def" 1
// # 22 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/plugin.def"
PLUGIN_PASS_MANAGER_SETUP,


PLUGIN_FINISH_TYPE,


PLUGIN_FINISH_DECL,


PLUGIN_FINISH_UNIT,


PLUGIN_PRE_GENERICIZE,


PLUGIN_FINISH,


PLUGIN_INFO,


PLUGIN_GGC_START,


PLUGIN_GGC_MARKING,


PLUGIN_GGC_END,


PLUGIN_REGISTER_GGC_ROOTS,


PLUGIN_REGISTER_GGC_CACHES,


PLUGIN_ATTRIBUTES,


PLUGIN_START_UNIT,


PLUGIN_PRAGMAS,


PLUGIN_ALL_PASSES_START,


PLUGIN_ALL_PASSES_END,


PLUGIN_ALL_IPA_PASSES_START,


PLUGIN_ALL_IPA_PASSES_END,


PLUGIN_OVERRIDE_GATE,


PLUGIN_PASS_EXECUTION,



PLUGIN_EARLY_GIMPLE_PASSES_START,



PLUGIN_EARLY_GIMPLE_PASSES_END,


PLUGIN_NEW_PASS,




PLUGIN_INCLUDE_FILE,
// # 38 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gcc-plugin.h" 2

  PLUGIN_EVENT_FIRST_DYNAMIC
};




extern "C" {


extern const char **plugin_event_name;

struct plugin_argument
{
  char *key;
  char *value;
};



struct plugin_info
{
  const char *version;
  const char *help;
};



struct plugin_gcc_version
{
  const char *basever;
  const char *datestamp;
  const char *devphase;
  const char *revision;
  const char *configuration_arguments;
};


struct plugin_name_args
{
  char *base_name;

  const char *full_name;

  int argc;

  struct plugin_argument *argv;
  const char *version;
  const char *help;
};



extern bool plugin_default_version_check (struct plugin_gcc_version *,
       struct plugin_gcc_version *);
// # 103 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gcc-plugin.h"
typedef int (*plugin_init_func) (struct plugin_name_args *plugin_info,
                                 struct plugin_gcc_version *version);



extern int plugin_init (struct plugin_name_args *plugin_info,
                        struct plugin_gcc_version *version);






typedef void (*plugin_callback_func) (void *gcc_data, void *user_data);
// # 129 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gcc-plugin.h"
extern int get_event_last (void);
enum insert_option {NO_INSERT, INSERT};
int get_named_event_id (const char *name, enum insert_option insert);






extern void register_callback (const char *plugin_name,
          int event,
                               plugin_callback_func callback,
                               void *user_data);

extern int unregister_callback (const char *plugin_name, int event);





extern const char* default_plugin_dir_name (void);


}






extern "C" {

extern int plugin_is_GPL_compatible;

}
// # 4 "plugincpp.cpp" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/coretypes.h" 1
// # 5 "plugincpp.cpp" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h" 1
// # 23 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 1
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/machmode.h" 1
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/machmode.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/insn-modes.h" 1






enum machine_mode
{
  VOIDmode,
  BLKmode,
  CCmode,
  CCGCmode,
  CCGOCmode,
  CCNOmode,
  CCAmode,
  CCCmode,
  CCOmode,
  CCSmode,
  CCZmode,
  CCFPmode,
  CCFPUmode,
  BImode,
  QImode,
  HImode,
  SImode,
  DImode,
  TImode,
  OImode,
  XImode,
  QQmode,
  HQmode,
  SQmode,
  DQmode,
  TQmode,
  UQQmode,
  UHQmode,
  USQmode,
  UDQmode,
  UTQmode,
  HAmode,
  SAmode,
  DAmode,
  TAmode,
  UHAmode,
  USAmode,
  UDAmode,
  UTAmode,
  SFmode,
  DFmode,
  XFmode,
  TFmode,
  SDmode,
  DDmode,
  TDmode,
  CQImode,
  CHImode,
  CSImode,
  CDImode,
  CTImode,
  COImode,
  CXImode,
  SCmode,
  DCmode,
  XCmode,
  TCmode,
  V2QImode,
  V4QImode,
  V2HImode,
  V1SImode,
  V8QImode,
  V4HImode,
  V2SImode,
  V1DImode,
  V16QImode,
  V8HImode,
  V4SImode,
  V2DImode,
  V1TImode,
  V32QImode,
  V16HImode,
  V8SImode,
  V4DImode,
  V2TImode,
  V64QImode,
  V32HImode,
  V16SImode,
  V8DImode,
  V4TImode,
  V128QImode,
  V64HImode,
  V32SImode,
  V16DImode,
  V8TImode,
  V2SFmode,
  V4SFmode,
  V2DFmode,
  V8SFmode,
  V4DFmode,
  V2TFmode,
  V16SFmode,
  V8DFmode,
  V4TFmode,
  V32SFmode,
  V16DFmode,
  V8TFmode,
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCFPUmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = XImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FRACT = QQmode,
  MAX_MODE_FRACT = TQmode,

  MIN_MODE_UFRACT = UQQmode,
  MAX_MODE_UFRACT = UTQmode,

  MIN_MODE_ACCUM = HAmode,
  MAX_MODE_ACCUM = TAmode,

  MIN_MODE_UACCUM = UHAmode,
  MAX_MODE_UACCUM = UTAmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CXImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V2QImode,
  MAX_MODE_VECTOR_INT = V8TImode,

  MIN_MODE_VECTOR_FRACT = VOIDmode,
  MAX_MODE_VECTOR_FRACT = VOIDmode,

  MIN_MODE_VECTOR_UFRACT = VOIDmode,
  MAX_MODE_VECTOR_UFRACT = VOIDmode,

  MIN_MODE_VECTOR_ACCUM = VOIDmode,
  MAX_MODE_VECTOR_ACCUM = VOIDmode,

  MIN_MODE_VECTOR_UACCUM = VOIDmode,
  MAX_MODE_VECTOR_UACCUM = VOIDmode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V8TFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};
// # 25 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/machmode.h" 2



extern const char * const mode_name[NUM_MACHINE_MODES];




// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/mode-classes.def" 1
// # 34 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/machmode.h" 2

enum mode_class { MODE_RANDOM, MODE_CC, MODE_INT, MODE_PARTIAL_INT, MODE_FRACT, MODE_UFRACT, MODE_ACCUM, MODE_UACCUM, MODE_FLOAT, MODE_DECIMAL_FLOAT, MODE_COMPLEX_INT, MODE_COMPLEX_FLOAT, MODE_VECTOR_INT, MODE_VECTOR_FRACT, MODE_VECTOR_UFRACT, MODE_VECTOR_ACCUM, MODE_VECTOR_UACCUM, MODE_VECTOR_FLOAT, MAX_MODE_CLASS };






extern const unsigned char mode_class[NUM_MACHINE_MODES];
// # 179 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/machmode.h"
extern unsigned char mode_size[NUM_MACHINE_MODES];





extern const unsigned short mode_precision[NUM_MACHINE_MODES];



extern const unsigned char mode_ibit[NUM_MACHINE_MODES];



extern const unsigned char mode_fbit[NUM_MACHINE_MODES];





extern const unsigned long mode_mask_array[NUM_MACHINE_MODES];





extern const unsigned char mode_inner[NUM_MACHINE_MODES];
// # 226 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/machmode.h"
extern const unsigned char mode_nunits[NUM_MACHINE_MODES];




extern const unsigned char mode_wider[NUM_MACHINE_MODES];




extern const unsigned char mode_2xwider[NUM_MACHINE_MODES];






extern enum machine_mode mode_for_size (unsigned int, enum mode_class, int);



extern enum machine_mode smallest_mode_for_size (unsigned int,
       enum mode_class);





extern enum machine_mode int_mode_for_mode (enum machine_mode);




extern enum machine_mode mode_for_vector (enum machine_mode, unsigned);


class bit_field_mode_iterator
{
public:
  bit_field_mode_iterator (long, long,
      long, long,
      unsigned int, bool);
  bool next_mode (enum machine_mode *);
  bool prefer_smaller_modes ();

private:
  enum machine_mode m_mode;


  long m_bitsize;
  long m_bitpos;
  long m_bitregion_start;
  long m_bitregion_end;
  unsigned int m_align;
  bool m_volatilep;
  int m_count;
};



extern enum machine_mode get_best_mode (int, int,
     unsigned long,
     unsigned long,
     unsigned int,
     enum machine_mode, bool);



extern unsigned char mode_base_align[NUM_MACHINE_MODES];

extern unsigned get_mode_alignment (enum machine_mode);





extern unsigned int element_precision (enum machine_mode);



extern const unsigned char class_narrowest_mode[MAX_MODE_CLASS];






extern enum machine_mode byte_mode;
extern enum machine_mode word_mode;
extern enum machine_mode ptr_mode;


extern void init_adjust_machine_modes (void);
// # 25 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/input.h" 1
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/input.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h" 1
// # 36 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
enum lc_reason
{
  LC_ENTER = 0,
  LC_LEAVE,
  LC_RENAME,
  LC_RENAME_VERBATIM,
  LC_ENTER_MACRO

};


typedef unsigned int linenum_type;


typedef unsigned int source_location;


typedef void *(*line_map_realloc) (void *, size_t);



typedef size_t (*line_map_round_alloc_size_func) (size_t);
// # 70 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
struct line_map_ordinary {
  const char *to_file;
  linenum_type to_line;




  int included_from;





  unsigned char sysp;


  unsigned int column_bits : 8;
};





struct cpp_hashnode;
// # 104 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
struct line_map_macro {

  struct cpp_hashnode *


    macro;


  unsigned int n_tokens;
// # 167 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
  source_location * macro_locations;






  source_location expansion;
};
// # 203 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
struct line_map {
  source_location start_location;


  enum lc_reason reason : 8;

  union map_u {
    struct line_map_ordinary ordinary;
    struct line_map_macro macro;
  } d;
};
// # 243 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
struct maps_info {





  struct line_map * maps;


  unsigned int allocated;



  unsigned int used;

  unsigned int cache;
};


struct location_adhoc_data {
  source_location locus;
  void * data;
};

struct htab;
// # 279 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
struct location_adhoc_data_map {
  struct htab * htab;
  source_location curr_loc;
  unsigned int allocated;
  struct location_adhoc_data *data;
};


struct line_maps {

  struct maps_info info_ordinary;

  struct maps_info info_macro;


  unsigned int depth;


  bool trace_includes;


  source_location highest_location;


  source_location highest_line;



  unsigned int max_column_hint;



  line_map_realloc reallocator;



  line_map_round_alloc_size_func round_alloc_size;

  struct location_adhoc_data_map location_adhoc_data_map;
};
// # 437 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
extern void location_adhoc_data_fini (struct line_maps *);
extern source_location get_combined_adhoc_loc (struct line_maps *,
            source_location, void *);
extern void *get_data_from_adhoc_loc (struct line_maps *, source_location);
extern source_location get_location_from_adhoc_loc (struct line_maps *,
          source_location);





extern void rebuild_location_adhoc_htab (struct line_maps *);


extern void linemap_init (struct line_maps *);



extern void linemap_check_files_exited (struct line_maps *);







extern source_location linemap_line_start
(struct line_maps *set, linenum_type to_line, unsigned int max_column_hint);
// # 479 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
extern const struct line_map *linemap_add
  (struct line_maps *, enum lc_reason, unsigned int sysp,
   const char *to_file, linenum_type to_line);







extern const struct line_map *linemap_lookup
  (struct line_maps *, source_location);



bool linemap_tracks_macro_expansion_locs_p (struct line_maps *);



bool linemap_macro_expansion_map_p (const struct line_map *);


const char* linemap_map_get_macro_name (const struct line_map*);
// # 512 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
int linemap_location_in_system_header_p (struct line_maps *,
      source_location);




bool linemap_location_from_macro_expansion_p (struct line_maps *,
           source_location);
// # 589 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
extern source_location
linemap_position_for_column (struct line_maps *, unsigned int);



source_location linemap_position_for_line_and_column (struct line_map *,
            linenum_type,
            unsigned int);
// # 616 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
int linemap_compare_locations (struct line_maps *set,
          source_location pre,
          source_location post);







typedef struct
{

  const char *file;


  int line;

  int column;

  void *data;


  bool sysp;
} expanded_location;




enum location_resolution_kind
{
  LRK_MACRO_EXPANSION_POINT,
  LRK_SPELLING_LOCATION,
  LRK_MACRO_DEFINITION_LOCATION
};
// # 700 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
source_location linemap_resolve_location (struct line_maps *,
       source_location loc,
       enum location_resolution_kind lrk,
       const struct line_map **loc_map);
// # 712 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
source_location linemap_unwind_toward_expansion (struct line_maps *,
       source_location loc,
       const struct line_map **loc_map);
// # 730 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/line-map.h"
source_location linemap_unwind_to_first_non_reserved_loc (struct line_maps *,
         source_location loc,
         const struct line_map **map);





expanded_location linemap_expand_location (struct line_maps *,
        const struct line_map *,
        source_location loc);



struct linemap_stats
{
  long num_ordinary_maps_allocated;
  long num_ordinary_maps_used;
  long ordinary_maps_allocated_size;
  long ordinary_maps_used_size;
  long num_expanded_macros;
  long num_macro_tokens;
  long num_macro_maps_used;
  long macro_maps_allocated_size;
  long macro_maps_used_size;
  long macro_maps_locations_size;
  long duplicated_macro_maps_locations_size;
};





bool linemap_get_file_highest_location (struct line_maps * set,
     const char *file_name,
     source_location *loc);



void linemap_get_statistics (struct line_maps *, struct linemap_stats *);



void linemap_dump_location (struct line_maps *, source_location, FILE *);




void linemap_dump (FILE *, struct line_maps *, unsigned, bool);




void line_table_dump (FILE *, struct line_maps *, unsigned int, unsigned int);
// # 25 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/input.h" 2

extern struct line_maps *line_table;
// # 36 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/input.h"
extern char builtins_location_check[(((source_location) 1)
         < 2) ? 1 : -1];

extern expanded_location expand_location (source_location);
extern const char *location_get_source_line (expanded_location xloc,
          int *line_size);
extern expanded_location expand_location_to_spelling_point (source_location);
extern source_location expansion_point_location_if_in_system_header (source_location);



typedef source_location location_t;

extern location_t input_location;
// # 64 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/input.h"
void dump_line_table_statistics (void);

void diagnostics_file_cache_fini (void);
// # 26 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/statistics.h" 1
// # 61 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/statistics.h"
struct function;


extern void statistics_early_init (void);
extern void statistics_init (void);
extern void statistics_fini (void);
extern void statistics_fini_pass (void);
extern void statistics_counter_event (struct function *, const char *, int);
extern void statistics_histogram_event (struct function *, const char *, int);
// # 27 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/vec.h" 1
// # 44 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/vec.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h" 1
// # 29 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h"
extern const char empty_string[];




// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gtype-desc.h" 1
// # 2828 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gtype-desc.h"
extern void gt_ggc_mx_vec_ivarref_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_prot_list_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_msgref_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_ident_data_tuple_va_gc_ (void *);



extern void gt_ggc_mx_string_descriptor (void *);



extern void gt_ggc_mx_imp_entry (void *);



extern void gt_ggc_mx_hashed_attribute (void *);



extern void gt_ggc_mx_hashed_entry (void *);



extern void gt_ggc_mx_objc_map_private (void *);



extern void gt_ggc_mx_vec_method_entry_va_gc_ (void *);



extern void gt_ggc_mx_type_assertion (void *);



extern void gt_ggc_mx_treetreehash_entry (void *);



extern void gt_ggc_mx_CPool (void *);



extern void gt_ggc_mx_JCF (void *);



extern void gt_ggc_mx_module_htab_entry (void *);



extern void gt_ggc_mx_binding_level (void *);



extern void gt_ggc_mx_vec_pending_noexcept_va_gc_ (void *);



extern void gt_ggc_mx_pending_abstract_type (void *);



extern void gt_ggc_mx_vec_tree_int_va_gc_ (void *);



extern void gt_ggc_mx_cp_parser (void *);



extern void gt_ggc_mx_vec_cp_unparsed_functions_entry_va_gc_ (void *);



extern void gt_ggc_mx_cp_parser_context (void *);



extern void gt_ggc_mx_vec_cp_default_arg_entry_va_gc_ (void *);



extern void gt_ggc_mx_cp_lexer (void *);



extern void gt_ggc_mx_vec_cp_token_va_gc_ (void *);



extern void gt_ggc_mx_tree_check (void *);



extern void gt_ggc_mx_constexpr_call (void *);



extern void gt_ggc_mx_constexpr_fundef (void *);



extern void gt_ggc_mx_vec_deferred_access_va_gc_ (void *);



extern void gt_ggc_mx_vec_deferred_access_check_va_gc_ (void *);



extern void gt_ggc_mx_spec_entry (void *);



extern void gt_ggc_mx_pending_template (void *);



extern void gt_ggc_mx_vec_incomplete_var_va_gc_ (void *);



extern void gt_ggc_mx_named_label_use_entry (void *);



extern void gt_ggc_mx_vec_tree_pair_s_va_gc_ (void *);



extern void gt_ggc_mx_named_label_entry (void *);



extern void gt_ggc_mx_vec_cxx_saved_binding_va_gc_ (void *);



extern void gt_ggc_mx_vec_qualified_typedef_usage_t_va_gc_ (void *);



extern void gt_ggc_mx_cp_token_cache (void *);



extern void gt_ggc_mx_saved_scope (void *);



extern void gt_ggc_mx_cxx_int_tree_map (void *);



extern void gt_ggc_mx_vec_cp_label_binding_va_gc_ (void *);



extern void gt_ggc_mx_vec_cp_class_binding_va_gc_ (void *);



extern void gt_ggc_mx_cp_binding_level (void *);



extern void gt_ggc_mx_cxx_binding (void *);



extern void gt_ggc_mx_binding_entry_s (void *);



extern void gt_ggc_mx_binding_table_s (void *);



extern void gt_ggc_mx_tinst_level (void *);



extern void gt_ggc_mx_vec_tinfo_s_va_gc_ (void *);



extern void gt_ggc_mx_c_parser (void *);



extern void gt_ggc_mx_vec_c_token_va_gc_ (void *);



extern void gt_ggc_mx_opt_stack (void *);



extern void gt_ggc_mx_vec_pending_redefinition_va_gc_ (void *);



extern void gt_ggc_mx_vec_pending_weak_va_gc_ (void *);



extern void gt_ggc_mx_align_stack (void *);



extern void gt_ggc_mx_vec_tree_gc_vec_va_gc_ (void *);



extern void gt_ggc_mx_vec_const_char_p_va_gc_ (void *);



extern void gt_ggc_mx_sorted_fields_type (void *);



extern void gt_ggc_mx_c_inline_static (void *);



extern void gt_ggc_mx_vec_c_goto_bindings_p_va_gc_ (void *);



extern void gt_ggc_mx_c_goto_bindings (void *);



extern void gt_ggc_mx_c_scope (void *);



extern void gt_ggc_mx_c_binding (void *);



extern void gt_ggc_mx_c_label_vars (void *);



extern void gt_ggc_mx_pad_type_hash (void *);



extern void gt_ggc_mx_gnat_binding_level (void *);



extern void gt_ggc_mx_vec_loop_info_va_gc_ (void *);



extern void gt_ggc_mx_loop_info_d (void *);



extern void gt_ggc_mx_vec_range_check_info_va_gc_ (void *);



extern void gt_ggc_mx_range_check_info_d (void *);



extern void gt_ggc_mx_elab_info (void *);



extern void gt_ggc_mx_stmt_group (void *);



extern void gt_ggc_mx_vec_parm_attr_va_gc_ (void *);



extern void gt_ggc_mx_parm_attr_d (void *);



extern void gt_ggc_mx_vec_odr_type_va_gc_ (void *);



extern void gt_ggc_mx_tree_type_map (void *);



extern void gt_ggc_mx_vec_inline_summary_t_va_gc_ (void *);



extern void gt_ggc_mx_vec_size_time_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_condition_va_gc_ (void *);



extern void gt_ggc_mx_lto_in_decl_state (void *);



extern void gt_ggc_mx_vec_ipa_edge_args_va_gc_ (void *);



extern void gt_ggc_mx_vec_ipa_agg_replacement_value_p_va_gc_ (void *);



extern void gt_ggc_mx_vec_ipa_jump_func_va_gc_ (void *);



extern void gt_ggc_mx_vec_ipa_agg_jf_item_va_gc_ (void *);



extern void gt_ggc_mx_ssa_operand_memory_d (void *);



extern void gt_ggc_mx_scev_info_str (void *);



extern void gt_ggc_mx_vec_mem_addr_template_va_gc_ (void *);



extern void gt_ggc_mx_vec_gimple_va_gc_ (void *);



extern void gt_ggc_mx_tm_restart_node (void *);



extern void gt_ggc_mx_type_hash (void *);



extern void gt_ggc_mx_string_pool_data (void *);



extern void gt_ggc_mx_temp_slot_address_entry (void *);



extern void gt_ggc_mx_throw_stmt_node (void *);



extern void gt_ggc_mx_vec_eh_landing_pad_va_gc_ (void *);



extern void gt_ggc_mx_vec_eh_region_va_gc_ (void *);



extern void gt_ggc_mx_eh_catch_d (void *);



extern void gt_ggc_mx_eh_landing_pad_d (void *);



extern void gt_ggc_mx_pointer_map_t (void *);



extern void gt_ggc_mx_eh_region_d (void *);



extern void gt_ggc_mx_vec_die_arg_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_macinfo_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_pubname_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_dw_line_info_table_p_va_gc_ (void *);



extern void gt_ggc_mx_cached_dw_loc_list_def (void *);



extern void gt_ggc_mx_call_arg_loc_node (void *);



extern void gt_ggc_mx_var_loc_list_def (void *);



extern void gt_ggc_mx_var_loc_node (void *);



extern void gt_ggc_mx_limbo_die_struct (void *);



extern void gt_ggc_mx_vec_dw_attr_node_va_gc_ (void *);



extern void gt_ggc_mx_dw_line_info_table_struct (void *);



extern void gt_ggc_mx_vec_dw_line_info_entry_va_gc_ (void *);



extern void gt_ggc_mx_comdat_type_struct (void *);



extern void gt_ggc_mx_dw_ranges_by_label_struct (void *);



extern void gt_ggc_mx_dw_ranges_struct (void *);



extern void gt_ggc_mx_vec_deferred_locations_va_gc_ (void *);



extern void gt_ggc_mx_vec_dw_fde_ref_va_gc_ (void *);



extern void gt_ggc_mx_reg_saved_in_data_struct (void *);



extern void gt_ggc_mx_dw_cfi_row_struct (void *);



extern void gt_ggc_mx_dwarf_file_data (void *);



extern void gt_ggc_mx_indirect_string_node (void *);



extern void gt_ggc_mx_addr_table_entry_struct (void *);



extern void gt_ggc_mx_vec_dw_cfi_ref_va_gc_ (void *);



extern void gt_ggc_mx_dw_loc_list_struct (void *);



extern void gt_ggc_mx_dw_loc_descr_node (void *);



extern void gt_ggc_mx_dw_cfi_node (void *);



extern void gt_ggc_mx_typeinfo (void *);



extern void gt_ggc_mx_odr_type_d (void *);



extern void gt_ggc_mx_ipa_agg_replacement_value (void *);



extern void gt_ggc_mx_vec_alias_set_entry_va_gc_ (void *);



extern void gt_ggc_mx_alias_set_entry_d (void *);



extern void gt_ggc_mx_constant_descriptor_tree (void *);



extern void gt_ggc_mx_asm_node (void *);



extern void gt_ggc_mx_cgraph_indirect_call_info (void *);



extern void gt_ggc_mx_cgraph_function_version_info (void *);



extern void gt_ggc_mx_cgraph_edge (void *);



extern void gt_ggc_mx_cgraph_simd_clone (void *);



extern void gt_ggc_mx_vec_ipa_replace_map_p_va_gc_ (void *);



extern void gt_ggc_mx_ipa_replace_map (void *);



extern void gt_ggc_mx_lto_file_decl_data (void *);



extern void gt_ggc_mx_vec_ipa_ref_t_va_gc_ (void *);



extern void gt_ggc_mx_symtab_node (void *);



extern void gt_ggc_mx_vec_basic_block_va_gc_ (void *);



extern void gt_ggc_mx_vec_edge_va_gc_ (void *);



extern void gt_ggc_mx_rtl_bb_info (void *);



extern void gt_ggc_mx_niter_desc (void *);



extern void gt_ggc_mx_vec_loop_p_va_gc_ (void *);



extern void gt_ggc_mx_loop (void *);



extern void gt_ggc_mx_loop_exit (void *);



extern void gt_ggc_mx_nb_iter_bound (void *);



extern void gt_ggc_mx_types_used_by_vars_entry (void *);



extern void gt_ggc_mx_language_function (void *);



extern void gt_ggc_mx_loops (void *);



extern void gt_ggc_mx_control_flow_graph (void *);



extern void gt_ggc_mx_eh_status (void *);



extern void gt_ggc_mx_stack_usage (void *);



extern void gt_ggc_mx_vec_temp_slot_p_va_gc_ (void *);



extern void gt_ggc_mx_initial_value_struct (void *);



extern void gt_ggc_mx_frame_space (void *);



extern void gt_ggc_mx_rtx_constant_pool (void *);



extern void gt_ggc_mx_dw_fde_node (void *);



extern void gt_ggc_mx_temp_slot (void *);



extern void gt_ggc_mx_gimple_df (void *);



extern void gt_ggc_mx_vec_call_site_record_va_gc_ (void *);



extern void gt_ggc_mx_vec_uchar_va_gc_ (void *);



extern void gt_ggc_mx_call_site_record_d (void *);



extern void gt_ggc_mx_sequence_stack (void *);



extern void gt_ggc_mx_target_libfuncs (void *);



extern void gt_ggc_mx_libfunc_entry (void *);



extern void gt_ggc_mx_vec_alias_pair_va_gc_ (void *);



extern void gt_ggc_mx_tree_vec_map (void *);



extern void gt_ggc_mx_tree_priority_map (void *);



extern void gt_ggc_mx_tree_int_map (void *);



extern void gt_ggc_mx_tree_decl_map (void *);



extern void gt_ggc_mx_tree_map (void *);



extern void gt_ggc_mx_lang_tree_node (void *);



extern void gt_ggc_mx_target_globals (void *);



extern void gt_ggc_mx_tree_statement_list_node (void *);



extern void gt_ggc_mx_lang_decl (void *);



extern void gt_ggc_mx_lang_type (void *);



extern void gt_ggc_mx_vec_tree_va_gc_ (void *);



extern void gt_ggc_mx_vec_constructor_elt_va_gc_ (void *);



extern void gt_ggc_mx_die_struct (void *);



extern void gt_ggc_mx_range_info_def (void *);



extern void gt_ggc_mx_ptr_info_def (void *);



extern void gt_ggc_mx_target_rtl (void *);



extern void gt_ggc_mx_function (void *);



extern void gt_ggc_mx_constant_descriptor_rtx (void *);



extern void gt_ggc_mx_fixed_value (void *);



extern void gt_ggc_mx_real_value (void *);



extern void gt_ggc_mx_vec_rtx_va_gc_ (void *);



extern void gt_ggc_mx_object_block (void *);



extern void gt_ggc_mx_reg_attrs (void *);



extern void gt_ggc_mx_mem_attrs (void *);



extern void gt_ggc_mx_coverage_data (void *);



extern void gt_ggc_mx_bitmap_obstack (void *);



extern void gt_ggc_mx_bitmap_element (void *);



extern void gt_ggc_mx_machine_function (void *);



extern void gt_ggc_mx_stack_local_entry (void *);



extern void gt_ggc_mx_basic_block_def (void *);



extern void gt_ggc_mx_edge_def (void *);



extern void gt_ggc_mx_section (void *);



extern void gt_ggc_mx_gimple_statement_base (void *);



extern void gt_ggc_mx_rtvec_def (void *);



extern void gt_ggc_mx_rtx_def (void *);



extern void gt_ggc_mx_bitmap_head (void *);



extern void gt_ggc_mx_answer (void *);



extern void gt_ggc_mx_cpp_macro (void *);



extern void gt_ggc_mx_cpp_token (void *);



extern void gt_ggc_mx_line_maps (void *);




extern void gt_ggc_m_II17splay_tree_node_s (void *);
extern void gt_ggc_m_SP9tree_node17splay_tree_node_s (void *);
extern void gt_ggc_m_P9tree_nodeP9tree_node17splay_tree_node_s (void *);
extern void gt_ggc_m_P17string_descriptor4htab (void *);
extern void gt_ggc_m_P14type_assertion4htab (void *);
extern void gt_ggc_m_P18treetreehash_entry4htab (void *);
extern void gt_ggc_m_P17module_htab_entry4htab (void *);
extern void gt_ggc_m_P21pending_abstract_type4htab (void *);
extern void gt_ggc_m_P14constexpr_call4htab (void *);
extern void gt_ggc_m_P16constexpr_fundef4htab (void *);
extern void gt_ggc_m_P10spec_entry4htab (void *);
extern void gt_ggc_m_P16cxx_int_tree_map4htab (void *);
extern void gt_ggc_m_P17named_label_entry4htab (void *);
extern void gt_ggc_m_P13pad_type_hash4htab (void *);
extern void gt_ggc_m_P12tree_int_map4htab (void *);
extern void gt_ggc_m_P13tree_type_map4htab (void *);
extern void gt_ggc_m_P17lto_in_decl_state4htab (void *);
extern void gt_ggc_m_P9tree_nodeP9tree_node12splay_tree_s (void *);
extern void gt_ggc_m_P13scev_info_str4htab (void *);
extern void gt_ggc_m_P15tm_restart_node4htab (void *);
extern void gt_ggc_m_P8tree_map4htab (void *);
extern void gt_ggc_m_P23constant_descriptor_rtx4htab (void *);
extern void gt_ggc_m_P24constant_descriptor_tree4htab (void *);
extern void gt_ggc_m_P12object_block4htab (void *);
extern void gt_ggc_m_P7section4htab (void *);
extern void gt_ggc_m_P17tree_priority_map4htab (void *);
extern void gt_ggc_m_P12tree_vec_map4htab (void *);
extern void gt_ggc_m_P13tree_decl_map4htab (void *);
extern void gt_ggc_m_P9type_hash4htab (void *);
extern void gt_ggc_m_P23temp_slot_address_entry4htab (void *);
extern void gt_ggc_m_P15throw_stmt_node4htab (void *);
extern void gt_ggc_m_P9reg_attrs4htab (void *);
extern void gt_ggc_m_P7rtx_def4htab (void *);
extern void gt_ggc_m_P23addr_table_entry_struct4htab (void *);
extern void gt_ggc_m_P22cached_dw_loc_list_def4htab (void *);
extern void gt_ggc_m_P16var_loc_list_def4htab (void *);
extern void gt_ggc_m_P10die_struct4htab (void *);
extern void gt_ggc_m_P15dwarf_file_data4htab (void *);
extern void gt_ggc_m_P20indirect_string_node4htab (void *);
extern void gt_ggc_m_SP9tree_node12splay_tree_s (void *);
extern void gt_ggc_m_P28cgraph_function_version_info4htab (void *);
extern void gt_ggc_m_II12splay_tree_s (void *);
extern void gt_ggc_m_P11symtab_node4htab (void *);
extern void gt_ggc_m_P11cgraph_edge4htab (void *);
extern void gt_ggc_m_P9loop_exit4htab (void *);
extern void gt_ggc_m_P24types_used_by_vars_entry4htab (void *);
extern void gt_ggc_m_P9tree_node4htab (void *);
extern void gt_ggc_m_P13libfunc_entry4htab (void *);
// # 3721 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gtype-desc.h"
extern void gt_pch_nx_vec_ivarref_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_prot_list_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_msgref_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_ident_data_tuple_va_gc_ (void *);



extern void gt_pch_nx_string_descriptor (void *);



extern void gt_pch_nx_imp_entry (void *);



extern void gt_pch_nx_hashed_attribute (void *);



extern void gt_pch_nx_hashed_entry (void *);



extern void gt_pch_nx_objc_map_private (void *);



extern void gt_pch_nx_vec_method_entry_va_gc_ (void *);



extern void gt_pch_nx_type_assertion (void *);



extern void gt_pch_nx_treetreehash_entry (void *);



extern void gt_pch_nx_CPool (void *);



extern void gt_pch_nx_JCF (void *);



extern void gt_pch_nx_module_htab_entry (void *);



extern void gt_pch_nx_binding_level (void *);



extern void gt_pch_nx_vec_pending_noexcept_va_gc_ (void *);



extern void gt_pch_nx_pending_abstract_type (void *);



extern void gt_pch_nx_vec_tree_int_va_gc_ (void *);



extern void gt_pch_nx_cp_parser (void *);



extern void gt_pch_nx_vec_cp_unparsed_functions_entry_va_gc_ (void *);



extern void gt_pch_nx_cp_parser_context (void *);



extern void gt_pch_nx_vec_cp_default_arg_entry_va_gc_ (void *);



extern void gt_pch_nx_cp_lexer (void *);



extern void gt_pch_nx_vec_cp_token_va_gc_ (void *);



extern void gt_pch_nx_tree_check (void *);



extern void gt_pch_nx_constexpr_call (void *);



extern void gt_pch_nx_constexpr_fundef (void *);



extern void gt_pch_nx_vec_deferred_access_va_gc_ (void *);



extern void gt_pch_nx_vec_deferred_access_check_va_gc_ (void *);



extern void gt_pch_nx_spec_entry (void *);



extern void gt_pch_nx_pending_template (void *);



extern void gt_pch_nx_vec_incomplete_var_va_gc_ (void *);



extern void gt_pch_nx_named_label_use_entry (void *);



extern void gt_pch_nx_vec_tree_pair_s_va_gc_ (void *);



extern void gt_pch_nx_named_label_entry (void *);



extern void gt_pch_nx_vec_cxx_saved_binding_va_gc_ (void *);



extern void gt_pch_nx_vec_qualified_typedef_usage_t_va_gc_ (void *);



extern void gt_pch_nx_cp_token_cache (void *);



extern void gt_pch_nx_saved_scope (void *);



extern void gt_pch_nx_cxx_int_tree_map (void *);



extern void gt_pch_nx_vec_cp_label_binding_va_gc_ (void *);



extern void gt_pch_nx_vec_cp_class_binding_va_gc_ (void *);



extern void gt_pch_nx_cp_binding_level (void *);



extern void gt_pch_nx_cxx_binding (void *);



extern void gt_pch_nx_binding_entry_s (void *);



extern void gt_pch_nx_binding_table_s (void *);



extern void gt_pch_nx_tinst_level (void *);



extern void gt_pch_nx_vec_tinfo_s_va_gc_ (void *);



extern void gt_pch_nx_c_parser (void *);



extern void gt_pch_nx_vec_c_token_va_gc_ (void *);



extern void gt_pch_nx_opt_stack (void *);



extern void gt_pch_nx_vec_pending_redefinition_va_gc_ (void *);



extern void gt_pch_nx_vec_pending_weak_va_gc_ (void *);



extern void gt_pch_nx_align_stack (void *);



extern void gt_pch_nx_vec_tree_gc_vec_va_gc_ (void *);



extern void gt_pch_nx_vec_const_char_p_va_gc_ (void *);



extern void gt_pch_nx_sorted_fields_type (void *);



extern void gt_pch_nx_c_inline_static (void *);



extern void gt_pch_nx_vec_c_goto_bindings_p_va_gc_ (void *);



extern void gt_pch_nx_c_goto_bindings (void *);



extern void gt_pch_nx_c_scope (void *);



extern void gt_pch_nx_c_binding (void *);



extern void gt_pch_nx_c_label_vars (void *);



extern void gt_pch_nx_pad_type_hash (void *);



extern void gt_pch_nx_gnat_binding_level (void *);



extern void gt_pch_nx_vec_loop_info_va_gc_ (void *);



extern void gt_pch_nx_loop_info_d (void *);



extern void gt_pch_nx_vec_range_check_info_va_gc_ (void *);



extern void gt_pch_nx_range_check_info_d (void *);



extern void gt_pch_nx_elab_info (void *);



extern void gt_pch_nx_stmt_group (void *);



extern void gt_pch_nx_vec_parm_attr_va_gc_ (void *);



extern void gt_pch_nx_parm_attr_d (void *);



extern void gt_pch_nx_vec_odr_type_va_gc_ (void *);



extern void gt_pch_nx_tree_type_map (void *);



extern void gt_pch_nx_vec_inline_summary_t_va_gc_ (void *);



extern void gt_pch_nx_vec_size_time_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_condition_va_gc_ (void *);



extern void gt_pch_nx_lto_in_decl_state (void *);



extern void gt_pch_nx_vec_ipa_edge_args_va_gc_ (void *);



extern void gt_pch_nx_vec_ipa_agg_replacement_value_p_va_gc_ (void *);



extern void gt_pch_nx_vec_ipa_jump_func_va_gc_ (void *);



extern void gt_pch_nx_vec_ipa_agg_jf_item_va_gc_ (void *);



extern void gt_pch_nx_ssa_operand_memory_d (void *);



extern void gt_pch_nx_scev_info_str (void *);



extern void gt_pch_nx_vec_mem_addr_template_va_gc_ (void *);



extern void gt_pch_nx_vec_gimple_va_gc_ (void *);



extern void gt_pch_nx_tm_restart_node (void *);



extern void gt_pch_nx_type_hash (void *);



extern void gt_pch_nx_string_pool_data (void *);



extern void gt_pch_nx_temp_slot_address_entry (void *);



extern void gt_pch_nx_throw_stmt_node (void *);



extern void gt_pch_nx_vec_eh_landing_pad_va_gc_ (void *);



extern void gt_pch_nx_vec_eh_region_va_gc_ (void *);



extern void gt_pch_nx_eh_catch_d (void *);



extern void gt_pch_nx_eh_landing_pad_d (void *);



extern void gt_pch_nx_pointer_map_t (void *);



extern void gt_pch_nx_eh_region_d (void *);



extern void gt_pch_nx_vec_die_arg_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_macinfo_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_pubname_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_dw_line_info_table_p_va_gc_ (void *);



extern void gt_pch_nx_cached_dw_loc_list_def (void *);



extern void gt_pch_nx_call_arg_loc_node (void *);



extern void gt_pch_nx_var_loc_list_def (void *);



extern void gt_pch_nx_var_loc_node (void *);



extern void gt_pch_nx_limbo_die_struct (void *);



extern void gt_pch_nx_vec_dw_attr_node_va_gc_ (void *);



extern void gt_pch_nx_dw_line_info_table_struct (void *);



extern void gt_pch_nx_vec_dw_line_info_entry_va_gc_ (void *);



extern void gt_pch_nx_comdat_type_struct (void *);



extern void gt_pch_nx_dw_ranges_by_label_struct (void *);



extern void gt_pch_nx_dw_ranges_struct (void *);



extern void gt_pch_nx_vec_deferred_locations_va_gc_ (void *);



extern void gt_pch_nx_vec_dw_fde_ref_va_gc_ (void *);



extern void gt_pch_nx_reg_saved_in_data_struct (void *);



extern void gt_pch_nx_dw_cfi_row_struct (void *);



extern void gt_pch_nx_dwarf_file_data (void *);



extern void gt_pch_nx_indirect_string_node (void *);



extern void gt_pch_nx_addr_table_entry_struct (void *);



extern void gt_pch_nx_vec_dw_cfi_ref_va_gc_ (void *);



extern void gt_pch_nx_dw_loc_list_struct (void *);



extern void gt_pch_nx_dw_loc_descr_node (void *);



extern void gt_pch_nx_dw_cfi_node (void *);



extern void gt_pch_nx_typeinfo (void *);



extern void gt_pch_nx_odr_type_d (void *);



extern void gt_pch_nx_ipa_agg_replacement_value (void *);



extern void gt_pch_nx_vec_alias_set_entry_va_gc_ (void *);



extern void gt_pch_nx_alias_set_entry_d (void *);



extern void gt_pch_nx_constant_descriptor_tree (void *);



extern void gt_pch_nx_asm_node (void *);



extern void gt_pch_nx_cgraph_indirect_call_info (void *);



extern void gt_pch_nx_cgraph_function_version_info (void *);



extern void gt_pch_nx_cgraph_edge (void *);



extern void gt_pch_nx_cgraph_simd_clone (void *);



extern void gt_pch_nx_vec_ipa_replace_map_p_va_gc_ (void *);



extern void gt_pch_nx_ipa_replace_map (void *);



extern void gt_pch_nx_lto_file_decl_data (void *);



extern void gt_pch_nx_vec_ipa_ref_t_va_gc_ (void *);



extern void gt_pch_nx_symtab_node (void *);



extern void gt_pch_nx_vec_basic_block_va_gc_ (void *);



extern void gt_pch_nx_vec_edge_va_gc_ (void *);



extern void gt_pch_nx_rtl_bb_info (void *);



extern void gt_pch_nx_niter_desc (void *);



extern void gt_pch_nx_vec_loop_p_va_gc_ (void *);



extern void gt_pch_nx_loop (void *);



extern void gt_pch_nx_loop_exit (void *);



extern void gt_pch_nx_nb_iter_bound (void *);



extern void gt_pch_nx_types_used_by_vars_entry (void *);



extern void gt_pch_nx_language_function (void *);



extern void gt_pch_nx_loops (void *);



extern void gt_pch_nx_control_flow_graph (void *);



extern void gt_pch_nx_eh_status (void *);



extern void gt_pch_nx_stack_usage (void *);



extern void gt_pch_nx_vec_temp_slot_p_va_gc_ (void *);



extern void gt_pch_nx_initial_value_struct (void *);



extern void gt_pch_nx_frame_space (void *);



extern void gt_pch_nx_rtx_constant_pool (void *);



extern void gt_pch_nx_dw_fde_node (void *);



extern void gt_pch_nx_temp_slot (void *);



extern void gt_pch_nx_gimple_df (void *);



extern void gt_pch_nx_vec_call_site_record_va_gc_ (void *);



extern void gt_pch_nx_vec_uchar_va_gc_ (void *);



extern void gt_pch_nx_call_site_record_d (void *);



extern void gt_pch_nx_sequence_stack (void *);



extern void gt_pch_nx_target_libfuncs (void *);



extern void gt_pch_nx_libfunc_entry (void *);



extern void gt_pch_nx_vec_alias_pair_va_gc_ (void *);



extern void gt_pch_nx_tree_vec_map (void *);



extern void gt_pch_nx_tree_priority_map (void *);



extern void gt_pch_nx_tree_int_map (void *);



extern void gt_pch_nx_tree_decl_map (void *);



extern void gt_pch_nx_tree_map (void *);



extern void gt_pch_nx_lang_tree_node (void *);



extern void gt_pch_nx_target_globals (void *);



extern void gt_pch_nx_tree_statement_list_node (void *);



extern void gt_pch_nx_lang_decl (void *);



extern void gt_pch_nx_lang_type (void *);



extern void gt_pch_nx_vec_tree_va_gc_ (void *);



extern void gt_pch_nx_vec_constructor_elt_va_gc_ (void *);



extern void gt_pch_nx_die_struct (void *);



extern void gt_pch_nx_range_info_def (void *);



extern void gt_pch_nx_ptr_info_def (void *);



extern void gt_pch_nx_target_rtl (void *);



extern void gt_pch_nx_function (void *);



extern void gt_pch_nx_constant_descriptor_rtx (void *);



extern void gt_pch_nx_fixed_value (void *);



extern void gt_pch_nx_real_value (void *);



extern void gt_pch_nx_vec_rtx_va_gc_ (void *);



extern void gt_pch_nx_object_block (void *);



extern void gt_pch_nx_reg_attrs (void *);



extern void gt_pch_nx_mem_attrs (void *);



extern void gt_pch_nx_coverage_data (void *);



extern void gt_pch_nx_bitmap_obstack (void *);



extern void gt_pch_nx_bitmap_element (void *);



extern void gt_pch_nx_machine_function (void *);



extern void gt_pch_nx_stack_local_entry (void *);



extern void gt_pch_nx_basic_block_def (void *);



extern void gt_pch_nx_edge_def (void *);



extern void gt_pch_nx_section (void *);



extern void gt_pch_nx_gimple_statement_base (void *);



extern void gt_pch_nx_rtvec_def (void *);



extern void gt_pch_nx_rtx_def (void *);



extern void gt_pch_nx_bitmap_head (void *);



extern void gt_pch_nx_answer (void *);



extern void gt_pch_nx_cpp_macro (void *);



extern void gt_pch_nx_cpp_token (void *);



extern void gt_pch_nx_line_maps (void *);




extern void gt_pch_n_II17splay_tree_node_s (void *);
extern void gt_pch_n_SP9tree_node17splay_tree_node_s (void *);
extern void gt_pch_n_P9tree_nodeP9tree_node17splay_tree_node_s (void *);
extern void gt_pch_n_P17string_descriptor4htab (void *);
extern void gt_pch_n_P14type_assertion4htab (void *);
extern void gt_pch_n_P18treetreehash_entry4htab (void *);
extern void gt_pch_n_P17module_htab_entry4htab (void *);
extern void gt_pch_n_P21pending_abstract_type4htab (void *);
extern void gt_pch_n_P14constexpr_call4htab (void *);
extern void gt_pch_n_P16constexpr_fundef4htab (void *);
extern void gt_pch_n_P10spec_entry4htab (void *);
extern void gt_pch_n_P16cxx_int_tree_map4htab (void *);
extern void gt_pch_n_P17named_label_entry4htab (void *);
extern void gt_pch_n_P13pad_type_hash4htab (void *);
extern void gt_pch_n_P12tree_int_map4htab (void *);
extern void gt_pch_n_P13tree_type_map4htab (void *);
extern void gt_pch_n_P17lto_in_decl_state4htab (void *);
extern void gt_pch_n_P9tree_nodeP9tree_node12splay_tree_s (void *);
extern void gt_pch_n_P13scev_info_str4htab (void *);
extern void gt_pch_n_P15tm_restart_node4htab (void *);
extern void gt_pch_n_P8tree_map4htab (void *);
extern void gt_pch_n_P23constant_descriptor_rtx4htab (void *);
extern void gt_pch_n_P24constant_descriptor_tree4htab (void *);
extern void gt_pch_n_P12object_block4htab (void *);
extern void gt_pch_n_P7section4htab (void *);
extern void gt_pch_n_P17tree_priority_map4htab (void *);
extern void gt_pch_n_P12tree_vec_map4htab (void *);
extern void gt_pch_n_P13tree_decl_map4htab (void *);
extern void gt_pch_n_P9type_hash4htab (void *);
extern void gt_pch_n_P23temp_slot_address_entry4htab (void *);
extern void gt_pch_n_P15throw_stmt_node4htab (void *);
extern void gt_pch_n_P9reg_attrs4htab (void *);
extern void gt_pch_n_P7rtx_def4htab (void *);
extern void gt_pch_n_P23addr_table_entry_struct4htab (void *);
extern void gt_pch_n_P22cached_dw_loc_list_def4htab (void *);
extern void gt_pch_n_P16var_loc_list_def4htab (void *);
extern void gt_pch_n_P10die_struct4htab (void *);
extern void gt_pch_n_P15dwarf_file_data4htab (void *);
extern void gt_pch_n_P20indirect_string_node4htab (void *);
extern void gt_pch_n_SP9tree_node12splay_tree_s (void *);
extern void gt_pch_n_P28cgraph_function_version_info4htab (void *);
extern void gt_pch_n_II12splay_tree_s (void *);
extern void gt_pch_n_P11symtab_node4htab (void *);
extern void gt_pch_n_P11cgraph_edge4htab (void *);
extern void gt_pch_n_P9loop_exit4htab (void *);
extern void gt_pch_n_P24types_used_by_vars_entry4htab (void *);
extern void gt_pch_n_P9tree_node4htab (void *);
extern void gt_pch_n_P13libfunc_entry4htab (void *);




extern void gt_pch_p_24vec_ivarref_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_prot_list_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_msgref_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_ident_data_tuple_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17string_descriptor
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9imp_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16hashed_attribute
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12hashed_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16objc_map_private
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_method_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14type_assertion
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18treetreehash_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_5CPool
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_3JCF
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17module_htab_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13binding_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_pending_noexcept_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21pending_abstract_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19vec_tree_int_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9cp_parser
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_38vec_cp_unparsed_functions_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17cp_parser_context
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_31vec_cp_default_arg_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8cp_lexer
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19vec_cp_token_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10tree_check
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14constexpr_call
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16constexpr_fundef
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_deferred_access_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_32vec_deferred_access_check_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10spec_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16pending_template
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25vec_incomplete_var_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21named_label_use_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_tree_pair_s_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17named_label_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_cxx_saved_binding_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_36vec_qualified_typedef_usage_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14cp_token_cache
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11saved_scope
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16cxx_int_tree_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_cp_label_binding_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_cp_class_binding_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16cp_binding_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cxx_binding
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15binding_entry_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15binding_table_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11tinst_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18vec_tinfo_s_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8c_parser
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18vec_c_token_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9opt_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_31vec_pending_redefinition_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_pending_weak_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11align_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_tree_gc_vec_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_const_char_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18sorted_fields_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15c_inline_static
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_c_goto_bindings_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15c_goto_bindings
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7c_scope
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9c_binding
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12c_label_vars
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13pad_type_hash
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18gnat_binding_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_loop_info_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11loop_info_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_range_check_info_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18range_check_info_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9elab_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10stmt_group
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_parm_attr_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11parm_attr_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19vec_odr_type_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13tree_type_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_inline_summary_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_size_time_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_condition_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17lto_in_decl_state
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_ipa_edge_args_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_38vec_ipa_agg_replacement_value_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_ipa_jump_func_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_ipa_agg_jf_item_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20ssa_operand_memory_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13scev_info_str
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_mem_addr_template_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17vec_gimple_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15tm_restart_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9type_hash
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16string_pool_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23temp_slot_address_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15throw_stmt_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25vec_eh_landing_pad_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_eh_region_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10eh_catch_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16eh_landing_pad_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13pointer_map_t
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11eh_region_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_die_arg_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_macinfo_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_pubname_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_31vec_dw_line_info_table_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22cached_dw_loc_list_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17call_arg_loc_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16var_loc_list_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12var_loc_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16limbo_die_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_dw_attr_node_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25dw_line_info_table_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_29vec_dw_line_info_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18comdat_type_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25dw_ranges_by_label_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16dw_ranges_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_29vec_deferred_locations_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21vec_dw_fde_ref_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24reg_saved_in_data_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17dw_cfi_row_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15dwarf_file_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20indirect_string_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23addr_table_entry_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21vec_dw_cfi_ref_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18dw_loc_list_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17dw_loc_descr_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11dw_cfi_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8typeinfo
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10odr_type_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25ipa_agg_replacement_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_alias_set_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17alias_set_entry_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24constant_descriptor_tree
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8asm_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25cgraph_indirect_call_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28cgraph_function_version_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cgraph_edge
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17cgraph_simd_clone
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_ipa_replace_map_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15ipa_replace_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18lto_file_decl_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_ipa_ref_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11symtab_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11symtab_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11symtab_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_basic_block_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15vec_edge_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11rtl_bb_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10niter_desc
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17vec_loop_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_4loop
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9loop_exit
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13nb_iter_bound
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24types_used_by_vars_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17language_function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_5loops
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18control_flow_graph
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9eh_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11stack_usage
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_temp_slot_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20initial_value_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11frame_space
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17rtx_constant_pool
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11dw_fde_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9temp_slot
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9gimple_df
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_call_site_record_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16vec_uchar_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18call_site_record_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14sequence_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15target_libfuncs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13libfunc_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21vec_alias_pair_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12tree_vec_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17tree_priority_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12tree_int_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13tree_decl_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8tree_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14lang_tree_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14target_globals
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24tree_statement_list_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9lang_decl
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9lang_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15vec_tree_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_constructor_elt_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10die_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14range_info_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12ptr_info_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10target_rtl
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23constant_descriptor_rtx
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11fixed_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10real_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14vec_rtx_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12object_block
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9reg_attrs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9mem_attrs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13coverage_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14bitmap_obstack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14bitmap_element
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16machine_function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17stack_local_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15basic_block_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8edge_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7section
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21gimple_statement_base
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9rtvec_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7rtx_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11bitmap_head
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_6answer
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9cpp_macro
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9cpp_token
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9line_maps
    (void *, void *, gt_pointer_operator, void *);

extern void gt_pch_p_II17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_SP9tree_node17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_nodeP9tree_node17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17string_descriptor4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P14type_assertion4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P18treetreehash_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17module_htab_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P21pending_abstract_type4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P14constexpr_call4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P16constexpr_fundef4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P10spec_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P16cxx_int_tree_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17named_label_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13pad_type_hash4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P12tree_int_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13tree_type_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17lto_in_decl_state4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_nodeP9tree_node12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13scev_info_str4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15tm_restart_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P8tree_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P23constant_descriptor_rtx4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P24constant_descriptor_tree4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P12object_block4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P7section4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17tree_priority_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P12tree_vec_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13tree_decl_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9type_hash4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P23temp_slot_address_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15throw_stmt_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9reg_attrs4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P7rtx_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P23addr_table_entry_struct4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P22cached_dw_loc_list_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P16var_loc_list_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P10die_struct4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15dwarf_file_data4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P20indirect_string_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_SP9tree_node12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P28cgraph_function_version_info4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_II12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P11symtab_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P11cgraph_edge4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9loop_exit4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P24types_used_by_vars_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13libfunc_entry4htab
    (void *, void *, gt_pointer_operator, void *);


extern void * ggc_alloc_splay_tree_scalar_scalar_splay_tree_node_s (int, void *);
extern void * ggc_alloc_splay_tree_str_tree_node_splay_tree_node_s (int, void *);
extern void * ggc_alloc_splay_tree_tree_node_tree_node_splay_tree_node_s (int, void *);
extern void * ggc_alloc_splay_tree_string_descriptor_htab (int, void *);
extern void * ggc_alloc_splay_tree_type_assertion_htab (int, void *);
extern void * ggc_alloc_splay_tree_treetreehash_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_module_htab_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_pending_abstract_type_htab (int, void *);
extern void * ggc_alloc_splay_tree_constexpr_call_htab (int, void *);
extern void * ggc_alloc_splay_tree_constexpr_fundef_htab (int, void *);
extern void * ggc_alloc_splay_tree_spec_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_cxx_int_tree_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_named_label_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_pad_type_hash_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_int_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_type_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_lto_in_decl_state_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_node_tree_node_splay_tree_s (int, void *);
extern void * ggc_alloc_splay_tree_scev_info_str_htab (int, void *);
extern void * ggc_alloc_splay_tree_tm_restart_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_constant_descriptor_rtx_htab (int, void *);
extern void * ggc_alloc_splay_tree_constant_descriptor_tree_htab (int, void *);
extern void * ggc_alloc_splay_tree_object_block_htab (int, void *);
extern void * ggc_alloc_splay_tree_section_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_priority_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_vec_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_decl_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_type_hash_htab (int, void *);
extern void * ggc_alloc_splay_tree_temp_slot_address_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_throw_stmt_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_reg_attrs_htab (int, void *);
extern void * ggc_alloc_splay_tree_rtx_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_addr_table_entry_struct_htab (int, void *);
extern void * ggc_alloc_splay_tree_cached_dw_loc_list_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_var_loc_list_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_die_struct_htab (int, void *);
extern void * ggc_alloc_splay_tree_dwarf_file_data_htab (int, void *);
extern void * ggc_alloc_splay_tree_indirect_string_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_str_tree_node_splay_tree_s (int, void *);
extern void * ggc_alloc_splay_tree_cgraph_function_version_info_htab (int, void *);
extern void * ggc_alloc_splay_tree_scalar_scalar_splay_tree_s (int, void *);
extern void * ggc_alloc_splay_tree_symtab_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_cgraph_edge_htab (int, void *);
extern void * ggc_alloc_splay_tree_loop_exit_htab (int, void *);
extern void * ggc_alloc_splay_tree_types_used_by_vars_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_libfunc_entry_htab (int, void *);
// # 35 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h" 2




typedef void (*gt_note_pointers) (void *, void *, gt_pointer_operator,
      void *);






typedef void (*gt_handle_reorder) (void *, void *, gt_pointer_operator,
       void *);


extern int gt_pch_note_object (void *, void *, gt_note_pointers);



extern void gt_pch_note_reorder (void *, void *, gt_handle_reorder);


typedef void (*gt_pointer_walker) (void *);



struct ggc_root_tab {
  void *base;
  size_t nelt;
  size_t stride;
  gt_pointer_walker cb;
  gt_pointer_walker pchw;
};


extern const struct ggc_root_tab * const gt_ggc_rtab[];
extern const struct ggc_root_tab * const gt_ggc_deletable_rtab[];
extern const struct ggc_root_tab * const gt_pch_cache_rtab[];
extern const struct ggc_root_tab * const gt_pch_scalar_rtab[];


struct htab;
struct ggc_cache_tab {
  struct htab * *base;
  size_t nelt;
  size_t stride;
  gt_pointer_walker cb;
  gt_pointer_walker pchw;
  int (*marked_p) (const void *);
};


extern const struct ggc_cache_tab * const gt_ggc_cache_rtab[];
// # 107 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h"
extern int ggc_set_mark (const void *);




extern int ggc_marked_p (const void *);


extern void gt_pch_n_S (const void *);
extern void gt_ggc_m_S (const void *);




extern void init_stringpool (void);


extern void init_ggc (void);





extern bool ggc_protect_identifiers;


extern void gt_pch_save (FILE *f);





extern void *ggc_internal_alloc_stat (size_t )
  __attribute__ ((__malloc__));

extern size_t ggc_round_alloc_size (size_t requested_size);




extern void *ggc_internal_cleared_alloc_stat (size_t )
  __attribute__ ((__malloc__));



extern void *ggc_realloc_stat (void *, size_t );


extern void ggc_free (void *);

extern void dump_ggc_loc_statistics (bool);
// # 166 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h"
static inline void *
ggc_internal_vec_alloc_stat (size_t s, size_t c )
{
    return ggc_internal_alloc_stat (c * s );
}

static inline void *
ggc_internal_cleared_vec_alloc_stat (size_t s, size_t c )
{
    return ggc_internal_cleared_alloc_stat (c * s );
}




static inline void *
ggc_alloc_atomic_stat (size_t s )
{
    return ggc_internal_alloc_stat (s );
}






extern void *ggc_cleared_alloc_htab_ignore_args (size_t, size_t)
  __attribute__ ((__malloc__));

extern void *ggc_cleared_alloc_ptr_array_two_args (size_t, size_t)
  __attribute__ ((__malloc__));
// # 208 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h"
extern void *ggc_splay_alloc (int, void *)
  __attribute__ ((__malloc__));

extern void ggc_splay_dont_free (void *, void *);




extern const char *ggc_alloc_string_stat (const char *contents, int length
                                          );
// # 226 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ggc.h"
extern void ggc_collect (void);



extern void ggc_register_root_tab (const struct ggc_root_tab *);



extern void ggc_register_cache_tab (const struct ggc_cache_tab *);


extern void gt_pch_restore (FILE *f);




extern void ggc_print_statistics (void);

extern void stringpool_statistics (void);


extern void init_ggc_heuristics (void);







static inline struct rtx_def *
ggc_alloc_rtx_def_stat (size_t s )
{
  return (struct rtx_def *) ggc_internal_alloc_stat (s );
}

static inline union tree_node *
ggc_alloc_tree_node_stat (size_t s )
{
  return (union tree_node *) ggc_internal_alloc_stat (s );
}

static inline union tree_node *
ggc_alloc_cleared_tree_node_stat (size_t s )
{
  return (union tree_node *) ggc_internal_cleared_alloc_stat (s );
}

static inline struct gimple_statement_base *
ggc_alloc_cleared_gimple_statement_stat (size_t s )
{
  return (struct gimple_statement_base *)
    ggc_internal_cleared_alloc_stat (s );
}

static inline struct simd_clone *
ggc_alloc_cleared_simd_clone_stat (size_t s )
{
  return (struct simd_clone *)
    ggc_internal_cleared_alloc_stat (s );
}
// # 45 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/vec.h" 2
// # 206 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/vec.h"
extern void dump_vec_loc_statistics (void);

struct vl_embed { };
struct vl_ptr { };


struct double_int
{
  static double_int from_uhwi (unsigned long cst);
  static double_int from_shwi (long cst);
  static double_int from_pair (long high, unsigned long low);
  static double_int from_buffer (const unsigned char *buffer, int len);
  static double_int mask (unsigned prec);
  static double_int max_value (unsigned int prec, bool uns);
  static double_int min_value (unsigned int prec, bool uns);



  double_int &operator ++ ();
  double_int &operator -- ();
  double_int &operator *= (double_int);
  double_int &operator += (double_int);
  double_int &operator -= (double_int);
  double_int &operator &= (double_int);
  double_int &operator ^= (double_int);
  double_int &operator |= (double_int);





  long to_shwi () const;
  unsigned long to_uhwi () const;



  bool fits_uhwi () const;
  bool fits_shwi () const;
  bool fits_hwi (bool uns) const;



  int trailing_zeros () const;
  int popcount () const;



  bool multiple_of (double_int, bool, double_int *) const;







  double_int set_bit (unsigned) const;
  double_int mul_with_sign (double_int, bool unsigned_p, bool *overflow) const;
  double_int wide_mul_with_sign (double_int, bool unsigned_p,
     double_int *higher, bool *overflow) const;
  double_int add_with_sign (double_int, bool unsigned_p, bool *overflow) const;
  double_int sub_with_overflow (double_int, bool *overflow) const;
  double_int neg_with_overflow (bool *overflow) const;

  double_int operator * (double_int) const;
  double_int operator + (double_int) const;
  double_int operator - (double_int) const;
  double_int operator - () const;
  double_int operator ~ () const;
  double_int operator & (double_int) const;
  double_int operator | (double_int) const;
  double_int operator ^ (double_int) const;
  double_int and_not (double_int) const;

  double_int lshift (long count) const;
  double_int lshift (long count, unsigned int prec, bool arith) const;
  double_int rshift (long count) const;
  double_int rshift (long count, unsigned int prec, bool arith) const;
  double_int alshift (long count, unsigned int prec) const;
  double_int arshift (long count, unsigned int prec) const;
  double_int llshift (long count, unsigned int prec) const;
  double_int lrshift (long count, unsigned int prec) const;
  double_int lrotate (long count, unsigned int prec) const;
  double_int rrotate (long count, unsigned int prec) const;





  double_int div (double_int, bool, unsigned) const;
  double_int sdiv (double_int, unsigned) const;
  double_int udiv (double_int, unsigned) const;
  double_int mod (double_int, bool, unsigned) const;
  double_int smod (double_int, unsigned) const;
  double_int umod (double_int, unsigned) const;
  double_int divmod_with_overflow (double_int, bool, unsigned,
       double_int *, bool *) const;
  double_int divmod (double_int, bool, unsigned, double_int *) const;
  double_int sdivmod (double_int, unsigned, double_int *) const;
  double_int udivmod (double_int, unsigned, double_int *) const;



  double_int ext (unsigned prec, bool uns) const;
  double_int zext (unsigned prec) const;
  double_int sext (unsigned prec) const;



  bool is_zero () const;
  bool is_one () const;
  bool is_minus_one () const;
  bool is_negative () const;

  int cmp (double_int b, bool uns) const;
  int ucmp (double_int b) const;
  int scmp (double_int b) const;

  bool ult (double_int b) const;
  bool ule (double_int b) const;
  bool ugt (double_int b) const;
  bool slt (double_int b) const;
  bool sle (double_int b) const;
  bool sgt (double_int b) const;

  double_int max (double_int b, bool uns);
  double_int smax (double_int b);
  double_int umax (double_int b);

  double_int min (double_int b, bool uns);
  double_int smin (double_int b);
  double_int umin (double_int b);

  bool operator == (double_int cst2) const;
  bool operator != (double_int cst2) const;



  unsigned long low;
  long high;

};
// # 207 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/double-int.h"
inline double_int
double_int::from_shwi (long cst)
{
  double_int r;
  r.low = (unsigned long) cst;
  r.high = cst < 0 ? -1 : 0;
  return r;
}
// # 230 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/double-int.h"
inline double_int
double_int::from_uhwi (unsigned long cst)
{
  double_int r;
  r.low = cst;
  r.high = 0;
  return r;
}

inline double_int
double_int::from_pair (long high, unsigned long low)
{
  double_int r;
  r.low = low;
  r.high = high;
  return r;
}

inline double_int &
double_int::operator ++ ()
{
  *this += (double_int::from_shwi (1));
  return *this;
}

inline double_int &
double_int::operator -- ()
{
  *this -= (double_int::from_shwi (1));
  return *this;
}

inline double_int &
double_int::operator &= (double_int b)
{
  *this = *this & b;
  return *this;
}

inline double_int &
double_int::operator ^= (double_int b)
{
  *this = *this ^ b;
  return *this;
}

inline double_int &
double_int::operator |= (double_int b)
{
  *this = *this | b;
  return *this;
}




inline long
double_int::to_shwi () const
{
  return (long) low;
}




inline unsigned long
double_int::to_uhwi () const
{
  return low;
}



inline bool
double_int::fits_uhwi () const
{
  return high == 0;
}





inline double_int
double_int::operator ~ () const
{
  double_int result;
  result.low = ~low;
  result.high = ~high;
  return result;
}



inline double_int
double_int::operator | (double_int b) const
{
  double_int result;
  result.low = low | b.low;
  result.high = high | b.high;
  return result;
}



inline double_int
double_int::operator & (double_int b) const
{
  double_int result;
  result.low = low & b.low;
  result.high = high & b.high;
  return result;
}



inline double_int
double_int::and_not (double_int b) const
{
  double_int result;
  result.low = low & ~b.low;
  result.high = high & ~b.high;
  return result;
}



inline double_int
double_int::operator ^ (double_int b) const
{
  double_int result;
  result.low = low ^ b.low;
  result.high = high ^ b.high;
  return result;
}

void dump_double_int (FILE *, double_int, bool);
// # 376 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/double-int.h"
inline bool
double_int::is_zero () const
{
  return low == 0 && high == 0;
}



inline bool
double_int::is_one () const
{
  return low == 1 && high == 0;
}



inline bool
double_int::is_minus_one () const
{
  return low == (~((unsigned long) 0)) && high == -1;
}



inline bool
double_int::is_negative () const
{
  return high < 0;
}



inline bool
double_int::operator == (double_int cst2) const
{
  return low == cst2.low && high == cst2.high;
}



inline bool
double_int::operator != (double_int cst2) const
{
  return low != cst2.low || high != cst2.high;
}


static inline int
popcount_hwi (unsigned long x)
{
  return __builtin_popcountl (x);
}

inline int
double_int::popcount () const
{
  return popcount_hwi (high) + popcount_hwi (low);
}

typedef unsigned long int mp_limb_t;

typedef struct
{
  int _mp_alloc;
  int _mp_size;
  mp_limb_t *_mp_d;
} __mpz_struct;

typedef __mpz_struct MP_INT;
typedef __mpz_struct mpz_t[1];

void mpz_set_double_int (mpz_t, double_int, bool);
double_int mpz_get_double_int (const_tree, mpz_t, bool);
// # 29 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h" 1
// # 28 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
enum real_value_class {
  rvc_zero,
  rvc_normal,
  rvc_inf,
  rvc_nan
};







struct real_value {



  unsigned int cl : 2;
  unsigned int decimal : 1;
  unsigned int sign : 1;
  unsigned int signalling : 1;
  unsigned int canonical : 1;
  unsigned int uexp : (32 - 6);
  unsigned long sig[((128 + (8 * 8)) / (8 * 8))];
};
// # 75 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
extern char test_real_width
  [sizeof (struct real_value) <= (((128 + (8 * 8)) + 32)/(8 * 8) + (((128 + (8 * 8)) + 32)%(8 * 8) ? 1 : 0)) * sizeof (long) ? 1 : -1];
// # 113 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
struct real_format
{

  void (*encode) (const struct real_format *, long *,
    const struct real_value *);
  void (*decode) (const struct real_format *, struct real_value *,
    const long *);


  int b;


  int p;


  int pnan;


  int emin;


  int emax;



  int signbit_ro;



  int signbit_rw;


  bool round_towards_zero;
  bool has_sign_dependent_rounding;


  bool has_nans;
  bool has_inf;
  bool has_denorm;
  bool has_signed_zero;
  bool qnan_msb_set;
  bool canonical_nan_lsbs_set;
};







extern const struct real_format *
  real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1
         + MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1];
// # 224 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
extern bool real_arithmetic (struct real_value *, int, const struct real_value *,
        const struct real_value *);


extern bool real_compare (int, const struct real_value *, const struct real_value *);


extern bool real_isinf (const struct real_value *);


extern bool real_isnan (const struct real_value *);


extern bool real_isfinite (const struct real_value *);


extern bool real_isneg (const struct real_value *);


extern bool real_isnegzero (const struct real_value *);


extern bool real_identical (const struct real_value *, const struct real_value *);


extern void real_convert (struct real_value *, enum machine_mode,
     const struct real_value *);


extern bool exact_real_truncate (enum machine_mode, const struct real_value *);


extern void real_to_decimal (char *, const struct real_value *, size_t,
        size_t, int);



extern void real_to_decimal_for_mode (char *, const struct real_value *, size_t,
          size_t, int, enum machine_mode);


extern void real_to_hexadecimal (char *, const struct real_value *,
     size_t, size_t, int);


extern long real_to_integer (const struct real_value *);
extern void real_to_integer2 (long *, long *,
         const struct real_value *);



extern int real_from_string (struct real_value *, const char *);

extern void real_from_string3 (struct real_value *, const char *, enum machine_mode);


extern void real_from_integer (struct real_value *, enum machine_mode,
          unsigned long, long, int);

extern long real_to_target_fmt (long *, const struct real_value *,
    const struct real_format *);
extern long real_to_target (long *, const struct real_value *, enum machine_mode);

extern void real_from_target_fmt (struct real_value *, const long *,
      const struct real_format *);
extern void real_from_target (struct real_value *, const long *,
         enum machine_mode);

extern void real_inf (struct real_value *);

extern bool real_nan (struct real_value *, const char *, int, enum machine_mode);

extern void real_maxval (struct real_value *, int, enum machine_mode);

extern void real_2expN (struct real_value *, int, enum machine_mode);

extern unsigned int real_hash (const struct real_value *);



extern const struct real_format ieee_single_format;
extern const struct real_format mips_single_format;
extern const struct real_format motorola_single_format;
extern const struct real_format spu_single_format;
extern const struct real_format ieee_double_format;
extern const struct real_format mips_double_format;
extern const struct real_format motorola_double_format;
extern const struct real_format ieee_extended_motorola_format;
extern const struct real_format ieee_extended_intel_96_format;
extern const struct real_format ieee_extended_intel_96_round_53_format;
extern const struct real_format ieee_extended_intel_128_format;
extern const struct real_format ibm_extended_format;
extern const struct real_format mips_extended_format;
extern const struct real_format ieee_quad_format;
extern const struct real_format mips_quad_format;
extern const struct real_format vax_f_format;
extern const struct real_format vax_d_format;
extern const struct real_format vax_g_format;
extern const struct real_format real_internal_format;
extern const struct real_format decimal_single_format;
extern const struct real_format decimal_double_format;
extern const struct real_format decimal_quad_format;
extern const struct real_format ieee_half_format;
extern const struct real_format arm_half_format;
// # 383 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
extern struct real_value real_value_truncate (enum machine_mode,
         struct real_value);




extern struct real_value real_value_negate (const struct real_value *);
extern struct real_value real_value_abs (const struct real_value *);

extern int significand_size (enum machine_mode);

extern struct real_value real_from_string2 (const char *, enum machine_mode);
// # 412 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
extern int real_exponent (const struct real_value *);


extern void real_ldexp (struct real_value *, const struct real_value *, int);





extern struct real_value dconst0;
extern struct real_value dconst1;
extern struct real_value dconst2;
extern struct real_value dconstm1;
extern struct real_value dconsthalf;






extern const struct real_value * dconst_e_ptr (void);


extern const struct real_value * dconst_third_ptr (void);


extern const struct real_value * dconst_sqrt2_ptr (void);



struct real_value real_value_from_int_cst (const_tree, const_tree);
// # 451 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/real.h"
extern rtx const_double_from_real_value (struct real_value, enum machine_mode);


extern bool exact_real_inverse (enum machine_mode, struct real_value *);




bool real_can_shorten_arithmetic (enum machine_mode, enum machine_mode);


extern tree build_real (tree, struct real_value);


extern bool real_powi (struct real_value *, enum machine_mode,
         const struct real_value *, long);


extern void real_trunc (struct real_value *, enum machine_mode,
   const struct real_value *);
extern void real_floor (struct real_value *, enum machine_mode,
   const struct real_value *);
extern void real_ceil (struct real_value *, enum machine_mode,
         const struct real_value *);
extern void real_round (struct real_value *, enum machine_mode,
   const struct real_value *);


extern void real_copysign (struct real_value *, const struct real_value *);


extern bool real_isinteger (const struct real_value *c, enum machine_mode mode);




extern void get_max_float (const struct real_format *, char *, size_t);
// # 30 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/fixed-value.h" 1
// # 27 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/fixed-value.h"
struct fixed_value
{
  double_int data;
  enum machine_mode mode;
};
// # 40 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/fixed-value.h"
extern struct fixed_value fconst0[18];
extern struct fixed_value fconst1[8];
// # 50 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/fixed-value.h"
extern rtx const_fixed_from_fixed_value (struct fixed_value, enum machine_mode);



extern struct fixed_value fixed_from_double_int (double_int,
           enum machine_mode);



static inline rtx
const_fixed_from_double_int (double_int payload,
                             enum machine_mode mode)
{
  return
    const_fixed_from_fixed_value (fixed_from_double_int (payload, mode),
                                  mode);
}


extern void fixed_from_string (struct fixed_value *, const char *,
          enum machine_mode);


extern tree build_fixed (tree, struct fixed_value);


extern bool fixed_convert (struct fixed_value *, enum machine_mode,
      const struct fixed_value *, bool);


extern bool fixed_convert_from_int (struct fixed_value *, enum machine_mode,
        double_int, bool, bool);


extern bool fixed_convert_from_real (struct fixed_value *, enum machine_mode,
         const struct real_value *, bool);


extern void real_convert_from_fixed (struct real_value *, enum machine_mode,
         const struct fixed_value *);


extern bool fixed_identical (const struct fixed_value *, const struct fixed_value *);


extern unsigned int fixed_hash (const struct fixed_value *);







extern void fixed_to_decimal (char *str, const struct fixed_value *, size_t);


extern bool fixed_arithmetic (struct fixed_value *, int, const struct fixed_value *,
         const struct fixed_value *, bool);


extern bool fixed_compare (int, const struct fixed_value *,
      const struct fixed_value *);


extern bool fixed_isneg (const struct fixed_value *);
// # 31 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/alias.h" 1
// # 29 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/alias.h"
typedef int alias_set_type;

extern alias_set_type new_alias_set (void);
extern alias_set_type get_alias_set (tree);
extern alias_set_type get_deref_alias_set (tree);
extern alias_set_type get_varargs_alias_set (void);
extern alias_set_type get_frame_alias_set (void);
extern tree component_uses_parent_alias_set_from (const_tree);
extern bool alias_set_subset_of (alias_set_type, alias_set_type);
extern void record_alias_subset (alias_set_type, alias_set_type);
extern void record_component_aliases (tree);
extern int alias_sets_conflict_p (alias_set_type, alias_set_type);
extern int alias_sets_must_conflict_p (alias_set_type, alias_set_type);
extern int objects_must_conflict_p (tree, tree);
extern int nonoverlapping_memrefs_p (const_rtx, const_rtx, bool);
tree reference_alias_ptr_type (tree);
bool alias_ptr_types_compatible_p (tree, tree);
// # 32 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flags.h" 1
// # 23 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flags.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flag-types.h" 1
// # 23 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flag-types.h"
enum debug_info_type
{
  NO_DEBUG,
  DBX_DEBUG,
  SDB_DEBUG,
  DWARF2_DEBUG,
  XCOFF_DEBUG,
  VMS_DEBUG,
  VMS_AND_DWARF2_DEBUG

};

enum debug_info_levels
{
  DINFO_LEVEL_NONE,
  DINFO_LEVEL_TERSE,
  DINFO_LEVEL_NORMAL,
  DINFO_LEVEL_VERBOSE
};
// # 51 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flag-types.h"
enum debug_info_usage
{
  DINFO_USAGE_DFN,
  DINFO_USAGE_DIR_USE,
  DINFO_USAGE_IND_USE,
  DINFO_USAGE_NUM_ENUMS
};
// # 84 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flag-types.h"
enum debug_struct_file
{
  DINFO_STRUCT_FILE_NONE,
  DINFO_STRUCT_FILE_BASE,

  DINFO_STRUCT_FILE_SYS,

  DINFO_STRUCT_FILE_ANY
};





enum symbol_visibility
{
  VISIBILITY_DEFAULT,
  VISIBILITY_PROTECTED,
  VISIBILITY_HIDDEN,
  VISIBILITY_INTERNAL
};



enum stack_reuse_level
{
  SR_NONE,
  SR_NAMED_VARS,
  SR_ALL
};


enum ira_algorithm
{
  IRA_ALGORITHM_CB,
  IRA_ALGORITHM_PRIORITY
};


enum ira_region
{
  IRA_REGION_ONE,
  IRA_REGION_ALL,
  IRA_REGION_MIXED,



  IRA_REGION_AUTODETECT
};


enum excess_precision
{
  EXCESS_PRECISION_DEFAULT,
  EXCESS_PRECISION_FAST,
  EXCESS_PRECISION_STANDARD
};


enum stack_check_type
{

  NO_STACK_CHECK = 0,



  GENERIC_STACK_CHECK,




  STATIC_BUILTIN_STACK_CHECK,



  FULL_BUILTIN_STACK_CHECK
};




enum warn_strict_overflow_code
{



  WARN_STRICT_OVERFLOW_ALL = 1,




  WARN_STRICT_OVERFLOW_CONDITIONAL = 2,


  WARN_STRICT_OVERFLOW_COMPARISON = 3,


  WARN_STRICT_OVERFLOW_MISC = 4,


  WARN_STRICT_OVERFLOW_MAGNITUDE = 5
};


enum fp_contract_mode {
  FP_CONTRACT_OFF = 0,
  FP_CONTRACT_ON = 1,
  FP_CONTRACT_FAST = 2
};


enum vect_cost_model {
  VECT_COST_MODEL_UNLIMITED = 0,
  VECT_COST_MODEL_CHEAP = 1,
  VECT_COST_MODEL_DYNAMIC = 2,
  VECT_COST_MODEL_DEFAULT = 3
};



enum sanitize_code {

  SANITIZE_ADDRESS = 1 << 0,
  SANITIZE_USER_ADDRESS = 1 << 1,
  SANITIZE_KERNEL_ADDRESS = 1 << 2,

  SANITIZE_THREAD = 1 << 3,

  SANITIZE_LEAK = 1 << 4,

  SANITIZE_SHIFT = 1 << 5,
  SANITIZE_DIVIDE = 1 << 6,
  SANITIZE_UNREACHABLE = 1 << 7,
  SANITIZE_VLA = 1 << 8,
  SANITIZE_NULL = 1 << 9,
  SANITIZE_RETURN = 1 << 10,
  SANITIZE_SI_OVERFLOW = 1 << 11,
  SANITIZE_BOOL = 1 << 12,
  SANITIZE_ENUM = 1 << 13,
  SANITIZE_UNDEFINED = SANITIZE_SHIFT | SANITIZE_DIVIDE | SANITIZE_UNREACHABLE
         | SANITIZE_VLA | SANITIZE_NULL | SANITIZE_RETURN
         | SANITIZE_SI_OVERFLOW | SANITIZE_BOOL | SANITIZE_ENUM
};


enum vtv_priority {
  VTV_NO_PRIORITY = 0,
  VTV_STANDARD_PRIORITY = 1,
  VTV_PREINIT_PRIORITY = 2
};
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flags.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h" 1







// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/config/i386/i386-opts.h" 1
// # 29 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/config/i386/i386-opts.h"
enum stringop_alg
{






// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/config/i386/stringop.def" 1
// # 20 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/config/i386/stringop.def"

no_stringop,

libcall,

rep_prefix_1_byte,

rep_prefix_4_byte,

rep_prefix_8_byte,

loop_1_byte,

loop,

unrolled_loop,

vector_loop,
// # 38 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/config/i386/i386-opts.h" 2
last_alg



};


enum calling_abi
{
  SYSV_ABI = 0,
  MS_ABI = 1
};

enum fpmath_unit
{
  FPMATH_387 = 1,
  FPMATH_SSE = 2
};

enum tls_dialect
{
  TLS_DIALECT_GNU,
  TLS_DIALECT_GNU2,
  TLS_DIALECT_SUN
};

enum cmodel {
  CM_32,
  CM_SMALL,
  CM_KERNEL,
  CM_MEDIUM,
  CM_LARGE,
  CM_SMALL_PIC,
  CM_MEDIUM_PIC,
  CM_LARGE_PIC
};

enum pmode {
  PMODE_SI,
  PMODE_DI
};

enum asm_dialect {
  ASM_ATT,
  ASM_INTEL
};

enum ix86_veclibabi {
  ix86_veclibabi_type_none,
  ix86_veclibabi_type_svml,
  ix86_veclibabi_type_acml
};

enum stack_protector_guard {
  SSP_TLS,
  SSP_GLOBAL
};
// # 9 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h" 2




struct gcc_options



{




  int x_recip_mask;





  long x_frame_larger_than_size;





  long x_ix86_isa_flags;





  long x_ix86_isa_flags_explicit;





  long x_larger_than_size;





  bool x_dump_base_name_prefixed;





  bool x_exit_after_options;





  bool x_flag_dump_all_passed;





  bool x_flag_opts_finished;





  bool x_flag_stack_usage_info;





  bool x_flag_warn_unused_result;





  bool x_in_lto_p;





  bool x_use_gnu_debug_info_extensions;





  bool x_warn_frame_larger_than;





  bool x_warn_larger_than;





  char * x_help_enum_printed;





  char * x_help_printed;





  const char * x_main_input_basename;





  const char * x_main_input_filename;





  enum debug_info_levels x_debug_info_level;





  enum debug_info_type x_write_symbols;





  enum debug_struct_file x_debug_struct_generic[DINFO_USAGE_NUM_ENUMS];





  enum debug_struct_file x_debug_struct_ordinary[DINFO_USAGE_NUM_ENUMS];





  enum stack_check_type x_flag_stack_check;





  int * x_param_values;





  int x_flag_complex_method;





  int x_flag_debug_asm;





  int x_flag_dump_rtl_in_asm;





  int x_flag_emit_templates;





  int x_flag_evaluation_order;





  int x_flag_gen_aux_info;





  int x_flag_generate_lto;





  int x_flag_print_asm_name;





  int x_flag_shlib;





  int x_ix86_target_flags_explicit;





  int x_main_input_baselength;





  int x_optimize;





  int x_optimize_debug;





  int x_optimize_fast;





  int x_optimize_size;





  int x_recip_mask_explicit;





  int x_rtl_dump_and_exit;





  int x_target_flags;





  unsigned int x_flag_sanitize;





  unsigned int x_help_columns;





  unsigned int x_initial_max_fld_align;





  void * x_flag_instrument_functions_exclude_files;





  void * x_flag_instrument_functions_exclude_functions;





  int x_help_flag;





  int x_no_sysroot_suffix;





  int x_flag_preprocess_only;





  int x_warn_abi;





  int x_warn_abi_tag;





  int x_warn_address;





  int x_warn_aggregate_return;





  int x_warn_aggressive_loop_optimizations;





  int x_warn_array_bounds;





  int x_warn_assign_intercept;





  int x_warn_attributes;





  int x_warn_bad_function_cast;





  int x_warn_cxx_compat;





  int x_warn_cxx0x_compat;





  int x_warn_cast_align;





  int x_warn_cast_qual;





  int x_warn_cast_result;





  int x_warn_char_subscripts;





  int x_warn_clobbered;





  int x_warn_conditionally_supported;





  int x_warn_conversion;





  int x_warn_conversion_null;





  int x_warn_coverage_mismatch;





  int x_warn_cpp;





  int x_warn_ctor_dtor_privacy;





  int x_cpp_warn_date_time;





  int x_warn_declaration_after_statement;





  int x_warn_delete_incomplete;





  int x_warn_delnonvdtor;





  int x_warn_deprecated;





  int x_warn_deprecated_decl;





  int x_warn_disabled_optimization;





  int x_warn_div_by_zero;





  int x_warn_double_promotion;





  int x_warn_ecpp;





  int x_warn_empty_body;





  int x_warn_enum_compare;





  int x_warnings_are_errors;





  int x_extra_warnings;





  int x_flag_extraneous_semicolon;





  int x_flag_fatal_errors;





  int x_warn_float_conversion;





  int x_warn_float_equal;





  int x_warn_format_contains_nul;





  int x_warn_format_extra_args;





  int x_warn_format_nonliteral;





  int x_warn_format_security;





  int x_warn_format_y2k;





  int x_warn_format_zero_length;





  int x_warn_format;





  int x_warn_free_nonheap_object;





  int x_warn_ignored_qualifiers;





  int x_warn_implicit;





  int x_warn_implicit_function_declaration;





  int x_warn_implicit_int;





  int x_warn_inh_var_ctor;





  int x_warn_init_self;





  int x_warn_inline;





  int x_warn_int_to_pointer_cast;





  int x_warn_invalid_memory_model;





  int x_warn_invalid_offsetof;





  int x_warn_jump_misses_init;





  int x_warn_logical_op;





  int x_warn_long_long;





  int x_warn_main;





  int x_warn_maybe_uninitialized;





  int x_warn_memset_transposed_args;





  int x_warn_missing_braces;





  int x_warn_missing_declarations;





  int x_warn_missing_field_initializers;





  int x_warn_missing_parameter_type;





  int x_warn_missing_prototypes;





  int x_warn_narrowing;





  int x_warn_nested_externs;





  int x_warn_noexcept;





  int x_warn_nontemplate_friend;





  int x_warn_nonvdtor;





  int x_warn_nonnull;





  int x_warn_old_style_cast;





  int x_warn_old_style_declaration;





  int x_warn_old_style_definition;





  int x_warn_openmp_simd;





  int x_flag_newer;





  int x_warn_overflow;





  int x_warn_overlength_strings;





  int x_warn_overloaded_virtual;





  int x_warn_override_init;





  int x_warn_packed;





  int x_warn_packed_bitfield_compat;





  int x_warn_padded;





  int x_warn_parentheses;





  int x_pedantic;





  int x_warn_pmf2ptr;





  int x_warn_pointer_arith;





  int x_warn_pointer_sign;





  int x_warn_pointer_to_int_cast;





  int x_warn_pragmas;





  int x_warn_property_assign_default;





  int x_warn_protocol;





  int x_warn_psabi;





  int x_warn_redundant_decls;





  int x_flag_redundant;





  int x_warn_reorder;





  int x_warn_return_local_addr;





  int x_warn_return_type;





  int x_warn_selector;





  int x_warn_sequence_point;





  int x_warn_shadow;





  int x_warn_sign_compare;





  int x_warn_sign_conversion;





  int x_warn_sign_promo;





  int x_warn_sizeof_pointer_memaccess;





  int x_warn_stack_protect;





  int x_warn_stack_usage;





  int x_warn_strict_aliasing;





  int x_warn_strict_null_sentinel;





  int x_warn_strict_overflow;





  int x_warn_strict_prototypes;





  int x_warn_strict_selector_match;





  int x_warn_suggest_attribute_const;





  int x_warn_suggest_attribute_format;





  int x_warn_suggest_attribute_noreturn;





  int x_warn_suggest_attribute_pure;





  int x_warn_switch;





  int x_warn_switch_default;





  int x_warn_switch_enum;





  int x_warn_sync_nand;





  int x_warn_synth;





  int x_warn_system_headers;





  int x_warn_traditional;





  int x_warn_traditional_conversion;





  int x_warn_trampolines;





  int x_warn_type_limits;





  int x_warn_undeclared_selector;





  int x_warn_uninitialized;





  int x_warn_unknown_pragmas;





  int x_warn_unsafe_loop_optimizations;





  int x_warn_unsuffixed_float_constants;





  int x_warn_unused;





  int x_warn_unused_but_set_parameter;





  int x_warn_unused_but_set_variable;





  int x_warn_unused_function;





  int x_warn_unused_label;





  int x_warn_unused_local_typedefs;





  int x_cpp_warn_unused_macros;





  int x_warn_unused_parameter;





  int x_warn_unused_result;





  int x_warn_unused_value;





  int x_warn_unused_variable;





  int x_warn_useless_cast;





  int x_warn_varargs;





  int x_cpp_warn_variadic_macros;





  int x_warn_vector_operation_performance;





  int x_warn_virtual_move_assign;





  int x_warn_vla;





  int x_warn_volatile_register_var;





  int x_warn_write_strings;





  int x_warn_zero_as_null_pointer_constant;





  const char *x_aux_info_file_name;





  const char *x_aux_base_name;





  const char *x_dump_base_name;





  const char *x_dump_dir_name;





  int x_flag_pic;





  int x_flag_pie;





  int x_flag_abi_version;





  int x_flag_access_control;





  const char *x_ada_specs_parent;





  int x_flag_aggressive_loop_optimizations;





  int x_align_functions;





  int x_align_jumps;





  int x_align_labels;





  int x_align_loops;





  int x_flag_allow_parameterless_variadic_functions;





  int x_flag_no_asm;





  int x_flag_assert;





  int x_flag_associative_math;





  int x_flag_asynchronous_unwind_tables;





  int x_flag_auto_inc_dec;





  int x_flag_bootstrap_classes;





  int x_flag_bounds_check;





  int x_flag_branch_on_count_reg;





  int x_flag_branch_probabilities;





  int x_flag_branch_target_load_optimize;





  int x_flag_branch_target_load_optimize2;





  int x_flag_btr_bb_exclusive;





  int x_flag_building_libgcc;





  int x_flag_no_builtin;
  void *x_common_deferred_options;

  int x_flag_caller_saves;





  int x_flag_check_data_deps;





  int x_flag_check_new;





  int x_flag_check_references;





  int x_flag_cilkplus;





  int x_flag_combine_stack_adjustments;





  int x_flag_no_common;





  int x_flag_compare_debug;





  const char *x_flag_compare_debug_opt;





  int x_flag_compare_elim_after_reload;





  int x_flag_conserve_space;





  int x_flag_conserve_stack;





  int x_max_constexpr_depth;





  int x_flag_cprop_registers;





  int x_flag_crossjumping;





  int x_flag_cse_follow_jumps;





  int x_flag_cx_fortran_rules;





  int x_flag_cx_limited_range;





  int x_flag_data_sections;





  int x_flag_dce;





  int x_flag_debug_types_section;





  int x_flag_declone_ctor_dtor;





  int x_flag_deduce_init_list;





  int x_flag_defer_pop;





  int x_flag_delayed_branch;





  int x_flag_delete_dead_exceptions;





  int x_flag_delete_null_pointer_checks;





  int x_flag_devirtualize;





  int x_flag_devirtualize_speculatively;





  int x_flag_diagnostics_show_color;





  int x_flag_diagnostics_show_caret;





  int x_flag_diagnostics_show_option;





  int x_flag_dse;





  int x_flag_dump_ada_spec;





  int x_flag_dump_ada_spec_slim;





  const char *x_flag_dump_final_insns;





  const char *x_flag_dump_go_spec;





  int x_flag_dump_noaddr;





  int x_flag_dump_passes;





  int x_flag_dump_unnumbered;





  int x_flag_dump_unnumbered_links;





  int x_flag_dwarf2_cfi_asm;





  int x_flag_early_inlining;





  int x_flag_elide_constructors;





  int x_flag_eliminate_dwarf2_dups;





  int x_flag_debug_only_used_symbols;





  int x_flag_eliminate_unused_debug_types;





  int x_flag_emit_class_debug_always;





  int x_flag_emit_class_files;





  int x_flag_enforce_eh_specs;





  int x_flag_exceptions;





  enum excess_precision x_flag_excess_precision_cmdline;





  int x_flag_expensive_optimizations;





  int x_flag_extern_tls_init;





  int x_flag_fat_lto_objects;





  int x_flag_filelist_file;





  int x_flag_finite_math_only;





  int x_flag_float_store;





  int x_flag_new_for_scope;





  int x_flag_force_classes_archive_check;





  int x_flag_forward_propagate;





  enum fp_contract_mode x_flag_fp_contract_mode;





  int x_flag_friend_injection;





  int x_flag_no_function_cse;





  int x_flag_function_sections;





  int x_flag_gcse;





  int x_flag_gcse_after_reload;





  int x_flag_gcse_las;





  int x_flag_gcse_lm;





  int x_flag_gcse_sm;





  int x_flag_no_gnu_keywords;





  int x_flag_next_runtime;





  int x_flag_tm;





  int x_flag_gnu_unique;





  int x_flag_gnu89_inline;





  int x_go_check_divide_overflow;





  int x_go_check_divide_zero;





  int x_flag_graphite;





  int x_flag_graphite_identity;





  int x_flag_guess_branch_prob;





  int x_flag_hash_synchronization;





  int x_flag_hoist_adjacent_loads;





  int x_flag_no_ident;





  int x_flag_if_conversion;





  int x_flag_if_conversion2;





  int x_flag_implement_inlines;





  int x_flag_implicit_inline_templates;





  int x_flag_implicit_templates;





  int x_flag_indirect_classes;





  int x_flag_indirect_dispatch;





  int x_flag_indirect_inlining;





  int x_flag_inhibit_size_directive;





  int x_flag_no_inline;





  int x_flag_inline_atomics;





  int x_flag_inline_functions;





  int x_flag_inline_functions_called_once;





  int x_flag_inline_small_functions;





  int x_flag_instrument_function_entry_exit;





  int x_flag_ipa_cp;





  int x_flag_ipa_cp_clone;





  int x_flag_ipa_profile;





  int x_flag_ipa_pta;





  int x_flag_ipa_pure_const;





  int x_flag_ipa_reference;





  int x_flag_ipa_sra;





  enum ira_algorithm x_flag_ira_algorithm;





  int x_flag_ira_hoist_pressure;





  int x_flag_ira_loop_pressure;





  enum ira_region x_flag_ira_region;





  int x_flag_ira_share_save_slots;





  int x_flag_ira_share_spill_slots;





  int x_flag_ira_verbose;





  int x_flag_isolate_erroneous_paths_attribute;





  int x_flag_isolate_erroneous_paths_dereference;





  int x_flag_ivopts;





  int x_flag_jni;





  int x_flag_jump_tables;





  int x_flag_keep_inline_dllexport;





  int x_flag_keep_inline_functions;





  int x_flag_keep_static_consts;





  int x_flag_lax_vector_conversions;





  int x_flag_leading_underscore;





  int x_flag_lifetime_dse;





  int x_flag_live_range_shrinkage;





  int x_flag_loop_block;





  int x_flag_loop_interchange;





  int x_flag_loop_optimize_isl;





  int x_flag_loop_parallelize_all;





  int x_flag_loop_strip_mine;





  int x_flag_lto_compression_level;





  int x_flag_lto_partition_1to1;





  int x_flag_lto_partition_balanced;





  int x_flag_lto_partition_max;





  int x_flag_lto_partition_none;





  int x_flag_lto_report;





  int x_flag_lto_report_wpa;





  const char *x_flag_lto;





  int x_flag_ltrans;





  const char *x_ltrans_output_list;





  int x_flag_errno_math;





  int x_flag_max_errors;





  int x_mem_report;





  int x_mem_report_wpa;





  int x_flag_merge_constants;





  int x_flag_merge_debug_strings;





  int x_flag_modulo_sched;





  int x_flag_modulo_sched_allow_regmoves;





  int x_flag_move_loop_invariants;





  int x_flag_ms_extensions;





  int x_flag_nil_receivers;





  int x_flag_non_call_exceptions;





  int x_flag_no_nonansi_builtin;





  int x_flag_nothrow_opt;





  int x_flag_objc_abi;





  int x_flag_objc_call_cxx_cdtors;





  int x_flag_objc_direct_dispatch;





  int x_flag_objc_exceptions;





  int x_flag_objc_gc;





  int x_flag_objc_nilcheck;





  int x_flag_objc_sjlj_exceptions;





  int x_flag_objc1_only;





  int x_flag_omit_frame_pointer;





  int x_flag_openmp;





  int x_flag_openmp_simd;





  int x_flag_opt_info;





  int x_flag_optimize_sibling_calls;





  int x_flag_optimize_sci;





  int x_flag_optimize_strlen;





  int x_flag_pack_struct;





  int x_flag_partial_inlining;





  int x_flag_pcc_struct_return;





  int x_flag_peel_loops;





  int x_flag_no_peephole;





  int x_flag_peephole2;





  int x_flag_permissive;





  int x_flag_plan9_extensions;





  int x_post_ipa_mem_report;





  int x_pre_ipa_mem_report;





  int x_flag_predictive_commoning;





  int x_flag_prefetch_loop_arrays;





  int x_flag_pretty_templates;





  int x_profile_flag;





  int x_profile_arc_flag;





  int x_flag_profile_correction;





  const char *x_profile_data_prefix;





  int x_flag_profile_reorder_functions;





  int x_profile_report;





  int x_flag_profile_use;





  int x_flag_profile_values;





  int x_flag_reciprocal_math;





  int x_flag_record_gcc_switches;





  int x_flag_reduced_reflection;





  int x_flag_ree;





  int x_flag_rename_registers;





  int x_flag_reorder_blocks;





  int x_flag_reorder_blocks_and_partition;





  int x_flag_reorder_functions;





  int x_flag_replace_objc_classes;





  int x_go_require_return_statement;





  int x_flag_rerun_cse_after_loop;





  int x_flag_resched_modulo_sched;





  int x_flag_rounding_math;





  int x_flag_rtti;





  int x_flag_sched_critical_path_heuristic;





  int x_flag_sched_dep_count_heuristic;





  int x_flag_sched_group_heuristic;





  int x_flag_schedule_interblock;





  int x_flag_sched_last_insn_heuristic;





  int x_flag_sched_pressure;





  int x_flag_sched_rank_heuristic;





  int x_flag_schedule_speculative;





  int x_flag_sched_spec_insn_heuristic;





  int x_flag_schedule_speculative_load;





  int x_flag_schedule_speculative_load_dangerous;





  int x_flag_sched_stalled_insns;





  int x_flag_sched_stalled_insns_dep;





  int x_sched_verbose_param;





  int x_flag_sched2_use_superblocks;





  int x_flag_schedule_insns;





  int x_flag_schedule_insns_after_reload;





  int x_flag_section_anchors;





  int x_flag_sel_sched_pipelining;





  int x_flag_sel_sched_pipelining_outer_loops;





  int x_flag_sel_sched_reschedule_pipelined;





  int x_flag_selective_scheduling;





  int x_flag_selective_scheduling2;





  int x_flag_short_double;





  int x_flag_short_enums;





  int x_flag_short_wchar;





  int x_flag_show_column;





  int x_flag_shrink_wrap;





  int x_flag_signaling_nans;





  int x_flag_signed_bitfields;





  int x_flag_signed_char;





  int x_flag_signed_zeros;





  enum vect_cost_model x_flag_simd_cost_model;





  int x_flag_single_precision_constant;





  int x_flag_split_ivs_in_unroller;





  int x_flag_split_stack;





  int x_flag_split_wide_types;





  int x_flag_stack_protect;





  enum stack_reuse_level x_flag_stack_reuse;





  int x_flag_stack_usage;





  int x_flag_detailed_statistics;





  int x_flag_store_check;





  int x_flag_strict_aliasing;





  int x_flag_strict_enums;





  int x_flag_strict_overflow;





  int x_flag_strict_volatile_bitfields;





  int x_flag_sync_libcalls;





  int x_flag_syntax_only;





  int x_template_backtrace_limit;





  int x_flag_test_coverage;





  int x_flag_thread_jumps;





  int x_flag_threadsafe_statics;





  int x_time_report;





  enum tls_model x_flag_tls_default;





  int x_flag_toplevel_reorder;





  int x_flag_tracer;





  int x_flag_trapping_math;





  int x_flag_trapv;





  int x_flag_tree_bit_ccp;





  int x_flag_tree_builtin_call_dce;





  int x_flag_tree_ccp;





  int x_flag_tree_ch;





  int x_flag_ssa_coalesce_vars;





  int x_flag_tree_copy_prop;





  int x_flag_tree_copyrename;





  int x_flag_tree_cselim;





  int x_flag_tree_dce;





  int x_flag_tree_dom;





  int x_flag_tree_dse;





  int x_flag_tree_forwprop;





  int x_flag_tree_fre;





  int x_flag_tree_loop_distribute_patterns;





  int x_flag_tree_loop_distribution;





  int x_flag_tree_loop_if_convert;





  int x_flag_tree_loop_if_convert_stores;





  int x_flag_tree_loop_im;





  int x_flag_tree_loop_ivcanon;





  int x_flag_tree_loop_optimize;





  int x_flag_tree_loop_vectorize;





  int x_flag_tree_live_range_split;





  int x_flag_tree_parallelize_loops;





  int x_flag_tree_partial_pre;





  int x_flag_tree_phiprop;





  int x_flag_tree_pre;





  int x_flag_tree_pta;





  int x_flag_tree_reassoc;





  int x_flag_tree_scev_cprop;





  int x_flag_tree_sink;





  int x_flag_tree_slp_vectorize;





  int x_flag_tree_slsr;





  int x_flag_tree_sra;





  int x_flag_tree_switch_conversion;





  int x_flag_tree_tail_merge;





  int x_flag_tree_ter;





  int x_flag_tree_vectorize;





  int x_flag_tree_vrp;





  int x_flag_unit_at_a_time;





  int x_flag_unroll_all_loops;





  int x_flag_unroll_loops;





  int x_flag_unsafe_loop_optimizations;





  int x_flag_unsafe_math_optimizations;





  int x_flag_unswitch_loops;





  int x_flag_unwind_tables;





  int x_flag_use_atomic_builtins;





  int x_flag_use_boehm_gc;





  int x_flag_use_cxa_atexit;





  int x_flag_use_cxa_get_exception_ptr;





  int x_flag_use_divide_subroutine;





  int x_flag_use_linker_plugin;





  int x_flag_var_tracking;





  int x_flag_var_tracking_assignments;





  int x_flag_var_tracking_assignments_toggle;





  int x_flag_var_tracking_uninit;





  int x_flag_variable_expansion_in_unroller;





  enum vect_cost_model x_flag_vect_cost_model;





  int x_flag_verbose_asm;





  int x_flag_visibility_ms_compat;





  enum symbol_visibility x_default_visibility;





  int x_flag_value_profile_transformations;





  enum vtv_priority x_flag_vtable_verify;





  int x_flag_vtv_counts;





  int x_flag_vtv_debug;





  int x_flag_weak;





  int x_flag_web;





  int x_flag_whole_program;





  int x_flag_working_directory;





  const char *x_flag_wpa;





  int x_flag_wrapv;





  int x_flag_zero_initialized_in_bss;





  int x_flag_zero_link;





  int x_dwarf_version;





  int x_flag_gen_declaration;





  int x_debug_generate_pub_sections;





  int x_dwarf_record_gcc_switches;





  int x_dwarf_split_debug_info;





  int x_dwarf_strict;





  int x_flag_gtoggle;





  const char *x_imultiarch;





  const char *x_plugindir_string;





  enum calling_abi x_ix86_abi;





  enum pmode x_ix86_pmode;





  int x_flag_android;





  const char *x_ix86_arch_string;





  enum asm_dialect x_ix86_asm_dialect;





  int x_linux_libc;





  int x_ix86_branch_cost;





  enum cmodel x_ix86_cmodel;





  int x_flag_dispatch_scheduler;





  int x_ix86_dump_tunes;





  int x_flag_fentry;





  int x_ix86_force_drap;





  enum fpmath_unit x_ix86_fpmath;





  int x_ix86_incoming_stack_boundary_arg;





  int x_ix86_section_threshold;





  const char *x_ix86_tune_memcpy_strategy;





  const char *x_ix86_tune_memset_strategy;





  int x_ix86_tune_no_default;





  int x_ix86_preferred_stack_boundary_arg;





  const char *x_ix86_recip_name;





  int x_ix86_regparm;





  int x_ix86_sse2avx;





  enum stack_protector_guard x_ix86_stack_protector_guard;





  int x_ix86_force_align_arg_pointer;





  enum stringop_alg x_ix86_stringop_alg;





  enum tls_dialect x_ix86_tls_dialect;





  const char *x_ix86_tune_ctrl_string;





  const char *x_ix86_tune_string;





  enum ix86_veclibabi x_ix86_veclibabi_type;





  const char *x_asm_file_name;





  int x_pass_exit_codes;





  int x_flag_pedantic_errors;





  int x_use_pipes;





  const char *x_print_file_name;





  int x_print_multi_directory;





  int x_print_multi_lib;





  int x_print_multi_os_directory;





  int x_print_multiarch;





  const char *x_print_prog_name;





  int x_print_search_dirs;





  int x_print_sysroot;





  int x_print_sysroot_headers_suffix;





  int x_quiet_flag;





  int x_report_times;





  int x_flag_undef;





  int x_verbose_flag;





  int x_version_flag;





  int x_inhibit_warnings;





  const char *x_wrapper_string;



  int x_VAR_malign_functions_;



  int x_VAR_malign_jumps_;



  int x_VAR_malign_loops_;



  int x_VAR_mpc32;



  int x_VAR_mpc64;



  int x_VAR_mpc80;



  bool frontend_set_flag_associative_math;


  bool frontend_set_flag_cx_limited_range;


  bool frontend_set_flag_finite_math_only;


  bool frontend_set_flag_errno_math;


  bool frontend_set_flag_reciprocal_math;


  bool frontend_set_flag_rounding_math;


  bool frontend_set_flag_signaling_nans;


  bool frontend_set_flag_signed_zeros;


  bool frontend_set_flag_trapping_math;


  bool frontend_set_flag_unsafe_math_optimizations;


};
extern struct gcc_options global_options;
extern const struct gcc_options global_options_init;
extern struct gcc_options global_options_set;







struct cl_optimization
{
  int x_align_functions;
  int x_align_jumps;
  int x_align_labels;
  int x_align_loops;
  int x_flag_sched_stalled_insns;
  int x_flag_sched_stalled_insns_dep;
  enum fp_contract_mode x_flag_fp_contract_mode;
  unsigned char x_optimize;
  unsigned char x_optimize_size;
  signed char x_flag_aggressive_loop_optimizations;
  signed char x_flag_asynchronous_unwind_tables;
  signed char x_flag_branch_on_count_reg;
  signed char x_flag_branch_probabilities;
  signed char x_flag_branch_target_load_optimize;
  signed char x_flag_branch_target_load_optimize2;
  signed char x_flag_btr_bb_exclusive;
  signed char x_flag_caller_saves;
  signed char x_flag_combine_stack_adjustments;
  signed char x_flag_no_common;
  signed char x_flag_compare_elim_after_reload;
  signed char x_flag_conserve_stack;
  signed char x_flag_cprop_registers;
  signed char x_flag_crossjumping;
  signed char x_flag_cse_follow_jumps;
  signed char x_flag_cx_fortran_rules;
  signed char x_flag_cx_limited_range;
  signed char x_flag_data_sections;
  signed char x_flag_dce;
  signed char x_flag_defer_pop;
  signed char x_flag_delayed_branch;
  signed char x_flag_delete_null_pointer_checks;
  signed char x_flag_devirtualize;
  signed char x_flag_devirtualize_speculatively;
  signed char x_flag_dse;
  signed char x_flag_early_inlining;
  signed char x_flag_exceptions;
  signed char x_flag_expensive_optimizations;
  signed char x_flag_finite_math_only;
  signed char x_flag_float_store;
  signed char x_flag_forward_propagate;
  signed char x_flag_gcse;
  signed char x_flag_gcse_after_reload;
  signed char x_flag_gcse_las;
  signed char x_flag_gcse_lm;
  signed char x_flag_gcse_sm;
  signed char x_flag_graphite_identity;
  signed char x_flag_guess_branch_prob;
  signed char x_flag_hoist_adjacent_loads;
  signed char x_flag_if_conversion;
  signed char x_flag_if_conversion2;
  signed char x_flag_no_inline;
  signed char x_flag_inline_atomics;
  signed char x_flag_inline_functions;
  signed char x_flag_inline_functions_called_once;
  signed char x_flag_inline_small_functions;
  signed char x_flag_ipa_cp;
  signed char x_flag_ipa_cp_clone;
  signed char x_flag_ipa_profile;
  signed char x_flag_ipa_pta;
  signed char x_flag_ipa_pure_const;
  signed char x_flag_ipa_reference;
  signed char x_flag_ipa_sra;
  signed char x_flag_ira_hoist_pressure;
  signed char x_flag_ira_loop_pressure;
  signed char x_flag_isolate_erroneous_paths_attribute;
  signed char x_flag_isolate_erroneous_paths_dereference;
  signed char x_flag_ivopts;
  signed char x_flag_jump_tables;
  signed char x_flag_lifetime_dse;
  signed char x_flag_live_range_shrinkage;
  signed char x_flag_loop_block;
  signed char x_flag_loop_interchange;
  signed char x_flag_loop_optimize_isl;
  signed char x_flag_loop_parallelize_all;
  signed char x_flag_loop_strip_mine;
  signed char x_flag_errno_math;
  signed char x_flag_merge_constants;
  signed char x_flag_modulo_sched;
  signed char x_flag_move_loop_invariants;
  signed char x_flag_non_call_exceptions;
  signed char x_flag_nothrow_opt;
  signed char x_flag_omit_frame_pointer;
  signed char x_flag_opt_info;
  signed char x_flag_optimize_sibling_calls;
  signed char x_flag_optimize_strlen;
  signed char x_flag_pack_struct;
  signed char x_flag_peel_loops;
  signed char x_flag_no_peephole;
  signed char x_flag_peephole2;
  signed char x_flag_predictive_commoning;
  signed char x_flag_prefetch_loop_arrays;
  signed char x_flag_pcc_struct_return;
  signed char x_flag_rename_registers;
  signed char x_flag_reorder_blocks;
  signed char x_flag_reorder_blocks_and_partition;
  signed char x_flag_reorder_functions;
  signed char x_flag_rerun_cse_after_loop;
  signed char x_flag_resched_modulo_sched;
  signed char x_flag_rounding_math;
  signed char x_flag_rtti;
  signed char x_flag_sched_critical_path_heuristic;
  signed char x_flag_sched_dep_count_heuristic;
  signed char x_flag_sched_group_heuristic;
  signed char x_flag_schedule_interblock;
  signed char x_flag_sched_last_insn_heuristic;
  signed char x_flag_sched_pressure;
  signed char x_flag_sched_rank_heuristic;
  signed char x_flag_schedule_speculative;
  signed char x_flag_sched_spec_insn_heuristic;
  signed char x_flag_schedule_speculative_load;
  signed char x_flag_schedule_speculative_load_dangerous;
  signed char x_flag_sched2_use_superblocks;
  signed char x_flag_schedule_insns;
  signed char x_flag_schedule_insns_after_reload;
  signed char x_flag_section_anchors;
  signed char x_flag_sel_sched_pipelining;
  signed char x_flag_sel_sched_pipelining_outer_loops;
  signed char x_flag_sel_sched_reschedule_pipelined;
  signed char x_flag_selective_scheduling;
  signed char x_flag_selective_scheduling2;
  signed char x_flag_short_double;
  signed char x_flag_short_enums;
  signed char x_flag_short_wchar;
  signed char x_flag_shrink_wrap;
  signed char x_flag_signaling_nans;
  signed char x_flag_signed_zeros;
  signed char x_flag_single_precision_constant;
  signed char x_flag_split_ivs_in_unroller;
  signed char x_flag_split_wide_types;
  signed char x_flag_strict_aliasing;
  signed char x_flag_strict_enums;
  signed char x_flag_thread_jumps;
  signed char x_flag_threadsafe_statics;
  signed char x_flag_toplevel_reorder;
  signed char x_flag_trapping_math;
  signed char x_flag_trapv;
  signed char x_flag_tree_bit_ccp;
  signed char x_flag_tree_builtin_call_dce;
  signed char x_flag_tree_ccp;
  signed char x_flag_tree_ch;
  signed char x_flag_ssa_coalesce_vars;
  signed char x_flag_tree_copy_prop;
  signed char x_flag_tree_copyrename;
  signed char x_flag_tree_cselim;
  signed char x_flag_tree_dce;
  signed char x_flag_tree_dom;
  signed char x_flag_tree_dse;
  signed char x_flag_tree_forwprop;
  signed char x_flag_tree_fre;
  signed char x_flag_tree_loop_distribute_patterns;
  signed char x_flag_tree_loop_distribution;
  signed char x_flag_tree_loop_if_convert;
  signed char x_flag_tree_loop_if_convert_stores;
  signed char x_flag_tree_loop_im;
  signed char x_flag_tree_loop_ivcanon;
  signed char x_flag_tree_loop_optimize;
  signed char x_flag_tree_loop_vectorize;
  signed char x_flag_tree_live_range_split;
  signed char x_flag_tree_partial_pre;
  signed char x_flag_tree_phiprop;
  signed char x_flag_tree_pre;
  signed char x_flag_tree_pta;
  signed char x_flag_tree_reassoc;
  signed char x_flag_tree_scev_cprop;
  signed char x_flag_tree_sink;
  signed char x_flag_tree_slp_vectorize;
  signed char x_flag_tree_slsr;
  signed char x_flag_tree_sra;
  signed char x_flag_tree_switch_conversion;
  signed char x_flag_tree_tail_merge;
  signed char x_flag_tree_ter;
  signed char x_flag_tree_vectorize;
  signed char x_flag_tree_vrp;
  signed char x_flag_unit_at_a_time;
  signed char x_flag_unroll_all_loops;
  signed char x_flag_unroll_loops;
  signed char x_flag_unsafe_loop_optimizations;
  signed char x_flag_unsafe_math_optimizations;
  signed char x_flag_unswitch_loops;
  signed char x_flag_unwind_tables;
  signed char x_flag_var_tracking;
  signed char x_flag_var_tracking_assignments;
  signed char x_flag_var_tracking_assignments_toggle;
  signed char x_flag_var_tracking_uninit;
  signed char x_flag_variable_expansion_in_unroller;
  signed char x_flag_value_profile_transformations;
  signed char x_flag_web;
  signed char x_flag_whole_program;
  signed char x_flag_wrapv;
};


struct cl_target_option
{
  long x_ix86_isa_flags_explicit;
  long x_ix86_target_flags_explicit;
  const char *x_ix86_arch_string;
  const char *x_ix86_recip_name;
  const char *x_ix86_tune_ctrl_string;
  const char *x_ix86_tune_memcpy_strategy;
  const char *x_ix86_tune_memset_strategy;
  const char *x_ix86_tune_string;
  long x_ix86_isa_flags;
  enum fpmath_unit x_ix86_fpmath;
  enum asm_dialect x_ix86_asm_dialect;
  enum calling_abi x_ix86_abi;
  enum cmodel x_ix86_cmodel;
  enum ix86_veclibabi x_ix86_veclibabi_type;
  enum pmode x_ix86_pmode;
  enum stack_protector_guard x_ix86_stack_protector_guard;
  enum stringop_alg x_ix86_stringop_alg;
  enum tls_dialect x_ix86_tls_dialect;
  int x_ix86_branch_cost;
  int x_ix86_dump_tunes;
  int x_ix86_force_align_arg_pointer;
  int x_ix86_force_drap;
  int x_ix86_incoming_stack_boundary_arg;
  int x_ix86_preferred_stack_boundary_arg;
  int x_ix86_regparm;
  int x_ix86_section_threshold;
  int x_ix86_sse2avx;
  int x_ix86_tune_no_default;
  int x_recip_mask_explicit;
  int x_recip_mask;
  int x_target_flags;
  unsigned char arch;
  unsigned char arch_specified;
  unsigned char branch_cost;
  unsigned char schedule;
  unsigned char tune;
  unsigned char tune_defaulted;
};



extern void cl_optimization_save (struct cl_optimization *, struct gcc_options *);


extern void cl_optimization_restore (struct gcc_options *, struct cl_optimization *);


extern void cl_optimization_print (FILE *, int, struct cl_optimization *);


extern void cl_target_option_save (struct cl_target_option *, struct gcc_options *);


extern void cl_target_option_restore (struct gcc_options *, struct cl_target_option *);


extern void cl_target_option_print (FILE *, int, struct cl_target_option *);




bool
common_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           const struct cl_decoded_option *decoded,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
Ada_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
AdaSCIL_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
AdaWhy_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
C_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
CXX_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
D_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
Fortran_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
Go_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
Java_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
LTO_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
ObjC_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
bool
ObjCXX_handle_option_auto (struct gcc_options *opts,
                           struct gcc_options *opts_set,
                           size_t scode, const char *arg, int value,
                           unsigned int lang_mask, int kind,
                           location_t loc,
                           const struct cl_option_handlers *handlers,
                           diagnostic_context *dc);
// # 4469 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h"
enum opt_code
{
  OPT____ = 0,
// # 4503 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h"
  OPT__help = 32,
  OPT__help_ = 33,
// # 4531 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h"
  OPT__no_sysroot_suffix = 60,





  OPT__output_pch_ = 66,

  OPT__param = 68,
// # 4572 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h"
  OPT__sysroot_ = 101,
  OPT__target_help = 102,
// # 4583 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/options.h"
  OPT__version = 112,


  OPT_A = 115,
  OPT_B = 116,
  OPT_C = 117,
  OPT_CC = 118,

  OPT_D = 120,
  OPT_E = 121,
  OPT_F = 122,
  OPT_H = 123,
  OPT_I = 124,
  OPT_J = 125,
  OPT_L = 126,
  OPT_M = 127,
  OPT_MD = 128,
  OPT_MD_ = 129,
  OPT_MF = 130,
  OPT_MG = 131,
  OPT_MM = 132,
  OPT_MMD = 133,
  OPT_MMD_ = 134,
  OPT_MP = 135,
  OPT_MQ = 136,
  OPT_MT = 137,
  OPT_N = 138,
  OPT_O = 139,
  OPT_Ofast = 140,
  OPT_Og = 141,
  OPT_Os = 142,
  OPT_P = 143,
  OPT_Q = 144,
  OPT_Qn = 145,
  OPT_Qy = 146,
  OPT_R = 147,
  OPT_S = 148,
  OPT_T = 149,
  OPT_Tbss = 150,
  OPT_Tbss_ = 151,
  OPT_Tdata = 152,
  OPT_Tdata_ = 153,
  OPT_Ttext = 154,
  OPT_Ttext_ = 155,
  OPT_U = 156,

  OPT_Wa_ = 158,
  OPT_Wabi = 159,
  OPT_Wabi_tag = 160,
  OPT_Waddress = 161,
  OPT_Waggregate_return = 162,
  OPT_Waggressive_loop_optimizations = 163,
  OPT_Waliasing = 164,
  OPT_Walign_commons = 165,
  OPT_Wall = 166,
  OPT_Wall_deprecation = 167,
  OPT_Wall_javadoc = 168,
  OPT_Wampersand = 169,
  OPT_Warray_bounds = 170,
  OPT_Warray_temporaries = 171,
  OPT_Wassert_identifier = 172,
  OPT_Wassign_intercept = 173,
  OPT_Wattributes = 174,
  OPT_Wbad_function_cast = 175,
  OPT_Wboxing = 176,
  OPT_Wbuiltin_macro_redefined = 177,
  OPT_Wc___compat = 178,
  OPT_Wc__0x_compat = 179,

  OPT_Wc_binding_type = 181,
  OPT_Wcast_align = 182,
  OPT_Wcast_qual = 183,
  OPT_Wcast_result = 184,
  OPT_Wchar_concat = 185,
  OPT_Wchar_subscripts = 186,
  OPT_Wcharacter_truncation = 187,
  OPT_Wclobbered = 188,
  OPT_Wcomment = 189,

  OPT_Wcompare_reals = 191,
  OPT_Wcondition_assign = 192,
  OPT_Wconditionally_supported = 193,
  OPT_Wconstructor_name = 194,
  OPT_Wconversion = 195,
  OPT_Wconversion_extra = 196,
  OPT_Wconversion_null = 197,
  OPT_Wcoverage_mismatch = 198,
  OPT_Wcpp = 199,
  OPT_Wctor_dtor_privacy = 200,
  OPT_Wdate_time = 201,
  OPT_Wdeclaration_after_statement = 202,
  OPT_Wdelete_incomplete = 203,
  OPT_Wdelete_non_virtual_dtor = 204,
  OPT_Wdep_ann = 205,
  OPT_Wdeprecated = 206,
  OPT_Wdeprecated_declarations = 207,
  OPT_Wdisabled_optimization = 208,
  OPT_Wdiscouraged = 209,
  OPT_Wdiv_by_zero = 210,
  OPT_Wdouble_promotion = 211,
  OPT_Weffc__ = 212,
  OPT_Wempty_block = 213,
  OPT_Wempty_body = 214,
  OPT_Wendif_labels = 215,
  OPT_Wenum_compare = 216,
  OPT_Wenum_identifier = 217,
  OPT_Wenum_switch = 218,
  OPT_Werror = 219,

  OPT_Werror_ = 221,
  OPT_Wextra = 222,
  OPT_Wextraneous_semicolon = 223,
  OPT_Wfallthrough = 224,
  OPT_Wfatal_errors = 225,
  OPT_Wfield_hiding = 226,
  OPT_Wfinal_bound = 227,
  OPT_Wfinally = 228,
  OPT_Wfloat_conversion = 229,
  OPT_Wfloat_equal = 230,
  OPT_Wforbidden = 231,

  OPT_Wformat_contains_nul = 233,
  OPT_Wformat_extra_args = 234,
  OPT_Wformat_nonliteral = 235,
  OPT_Wformat_security = 236,
  OPT_Wformat_y2k = 237,
  OPT_Wformat_zero_length = 238,
  OPT_Wformat_ = 239,
  OPT_Wframe_larger_than_ = 240,
  OPT_Wfree_nonheap_object = 241,
  OPT_Wfunction_elimination = 242,
  OPT_Whiding = 243,
  OPT_Wignored_qualifiers = 244,
  OPT_Wimplicit = 245,
  OPT_Wimplicit_function_declaration = 246,
  OPT_Wimplicit_int = 247,
  OPT_Wimplicit_interface = 248,
  OPT_Wimplicit_procedure = 249,

  OPT_Windirect_static = 251,
  OPT_Winherited_variadic_ctor = 252,
  OPT_Winit_self = 253,
  OPT_Winline = 254,
  OPT_Wint_to_pointer_cast = 255,
  OPT_Wintf_annotation = 256,
  OPT_Wintf_non_inherited = 257,
  OPT_Wintrinsic_shadow = 258,
  OPT_Wintrinsics_std = 259,
  OPT_Winvalid_memory_model = 260,
  OPT_Winvalid_offsetof = 261,
  OPT_Winvalid_pch = 262,
  OPT_Wjavadoc = 263,
  OPT_Wjump_misses_init = 264,
  OPT_Wl_ = 265,

  OPT_Wlarger_than_ = 267,
  OPT_Wline_truncation = 268,
  OPT_Wliteral_suffix = 269,
  OPT_Wlocal_hiding = 270,
  OPT_Wlogical_op = 271,
  OPT_Wlong_long = 272,
  OPT_Wmain = 273,
  OPT_Wmasked_catch_block = 274,
  OPT_Wmaybe_uninitialized = 275,
  OPT_Wmemset_transposed_args = 276,
  OPT_Wmissing_braces = 277,
  OPT_Wmissing_declarations = 278,
  OPT_Wmissing_field_initializers = 279,

  OPT_Wmissing_include_dirs = 281,

  OPT_Wmissing_parameter_type = 283,
  OPT_Wmissing_prototypes = 284,

  OPT_Wmultichar = 286,
  OPT_Wnarrowing = 287,
  OPT_Wnested_externs = 288,
  OPT_Wnls = 289,
  OPT_Wno_effect_assign = 290,
  OPT_Wnoexcept = 291,
  OPT_Wnon_template_friend = 292,
  OPT_Wnon_virtual_dtor = 293,
  OPT_Wnonnull = 294,
  OPT_Wnormalized_ = 295,
  OPT_Wnull = 296,
  OPT_Wold_style_cast = 297,
  OPT_Wold_style_declaration = 298,
  OPT_Wold_style_definition = 299,
  OPT_Wopenmp_simd = 300,
  OPT_Wout_of_date = 301,
  OPT_Wover_ann = 302,
  OPT_Woverflow = 303,
  OPT_Woverlength_strings = 304,
  OPT_Woverloaded_virtual = 305,
  OPT_Woverride_init = 306,
  OPT_Wp_ = 307,
  OPT_Wpacked = 308,
  OPT_Wpacked_bitfield_compat = 309,
  OPT_Wpadded = 310,
  OPT_Wparam_assign = 311,
  OPT_Wparentheses = 312,
  OPT_Wpedantic = 313,
  OPT_Wpkg_default_method = 314,
  OPT_Wpmf_conversions = 315,
  OPT_Wpointer_arith = 316,
  OPT_Wpointer_sign = 317,
  OPT_Wpointer_to_int_cast = 318,
  OPT_Wpragmas = 319,
  OPT_Wproperty_assign_default = 320,
  OPT_Wprotocol = 321,
  OPT_Wpsabi = 322,
  OPT_Wraw = 323,
  OPT_Wreal_q_constant = 324,
  OPT_Wrealloc_lhs = 325,
  OPT_Wrealloc_lhs_all = 326,
  OPT_Wredundant_decls = 327,
  OPT_Wredundant_modifiers = 328,
  OPT_Wreorder = 329,
  OPT_Wreturn_local_addr = 330,
  OPT_Wreturn_type = 331,
  OPT_Wselector = 332,
  OPT_Wsequence_point = 333,
  OPT_Wserial = 334,
  OPT_Wshadow = 335,
  OPT_Wsign_compare = 336,
  OPT_Wsign_conversion = 337,
  OPT_Wsign_promo = 338,
  OPT_Wsizeof_pointer_memaccess = 339,
  OPT_Wspecial_param_hiding = 340,
  OPT_Wstack_protector = 341,
  OPT_Wstack_usage_ = 342,
  OPT_Wstatic_access = 343,
  OPT_Wstatic_receiver = 344,
  OPT_Wstrict_aliasing = 345,
  OPT_Wstrict_aliasing_ = 346,
  OPT_Wstrict_null_sentinel = 347,
  OPT_Wstrict_overflow = 348,
  OPT_Wstrict_overflow_ = 349,
  OPT_Wstrict_prototypes = 350,
  OPT_Wstrict_selector_match = 351,
  OPT_Wsuggest_attribute_const = 352,
  OPT_Wsuggest_attribute_format = 353,
  OPT_Wsuggest_attribute_noreturn = 354,
  OPT_Wsuggest_attribute_pure = 355,
  OPT_Wsuppress = 356,
  OPT_Wsurprising = 357,
  OPT_Wswitch = 358,
  OPT_Wswitch_default = 359,
  OPT_Wswitch_enum = 360,
  OPT_Wsync_nand = 361,
  OPT_Wsynth = 362,
  OPT_Wsynthetic_access = 363,
  OPT_Wsystem_headers = 364,
  OPT_Wtabs = 365,
  OPT_Wtarget_lifetime = 366,
  OPT_Wtasks = 367,
  OPT_Wtraditional = 368,
  OPT_Wtraditional_conversion = 369,
  OPT_Wtrampolines = 370,
  OPT_Wtrigraphs = 371,
  OPT_Wtype_hiding = 372,
  OPT_Wtype_limits = 373,
  OPT_Wuncheck = 374,
  OPT_Wundeclared_selector = 375,
  OPT_Wundef = 376,
  OPT_Wunderflow = 377,
  OPT_Wuninitialized = 378,
  OPT_Wunknown_pragmas = 379,
  OPT_Wunnecessary_else = 380,
  OPT_Wunqualified_field = 381,

  OPT_Wunsafe_loop_optimizations = 383,
  OPT_Wunsuffixed_float_constants = 384,
  OPT_Wunused = 385,
  OPT_Wunused_argument = 386,
  OPT_Wunused_but_set_parameter = 387,
  OPT_Wunused_but_set_variable = 388,
  OPT_Wunused_dummy_argument = 389,
  OPT_Wunused_function = 390,
  OPT_Wunused_import = 391,
  OPT_Wunused_label = 392,
  OPT_Wunused_local = 393,
  OPT_Wunused_local_typedefs = 394,
  OPT_Wunused_macros = 395,
  OPT_Wunused_parameter = 396,
  OPT_Wunused_private = 397,
  OPT_Wunused_result = 398,
  OPT_Wunused_thrown = 399,
  OPT_Wunused_value = 400,
  OPT_Wunused_variable = 401,
  OPT_Wuseless_cast = 402,
  OPT_Wuseless_type_check = 403,
  OPT_Wvarargs = 404,
  OPT_Wvarargs_cast = 405,
  OPT_Wvariadic_macros = 406,
  OPT_Wvector_operation_performance = 407,
  OPT_Wvirtual_move_assign = 408,
  OPT_Wvla = 409,
  OPT_Wvolatile_register_var = 410,
  OPT_Wwarning_token = 411,
  OPT_Wwrite_strings = 412,
  OPT_Wzero_as_null_pointer_constant = 413,
  OPT_Wzerotrip = 414,
  OPT_Xassembler = 415,
  OPT_Xlinker = 416,
  OPT_Xpreprocessor = 417,
  OPT_Z = 418,
  OPT_ansi = 419,
  OPT_aux_info = 420,

  OPT_auxbase = 422,
  OPT_auxbase_strip = 423,

  OPT_c = 425,

  OPT_coverage = 427,
  OPT_cpp = 428,
  OPT_cpp_ = 429,
  OPT_d = 430,
  OPT_debuglib_ = 431,
  OPT_defaultlib_ = 432,
  OPT_dumpbase = 433,
  OPT_dumpdir = 434,
  OPT_dumpmachine = 435,
  OPT_dumpspecs = 436,
  OPT_dumpversion = 437,
  OPT_e = 438,

  OPT_export_dynamic = 440,
  OPT_extdirs = 441,

  OPT_fPIC = 443,
  OPT_fPIE = 444,
  OPT_fRTS_ = 445,
  OPT_fXf_ = 446,
  OPT_fabi_version_ = 447,
  OPT_faccess_control = 448,
  OPT_fada_spec_parent_ = 449,
  OPT_faggressive_function_elimination = 450,
  OPT_faggressive_loop_optimizations = 451,
  OPT_falign_commons = 452,
  OPT_falign_functions = 453,
  OPT_falign_functions_ = 454,
  OPT_falign_jumps = 455,
  OPT_falign_jumps_ = 456,
  OPT_falign_labels = 457,
  OPT_falign_labels_ = 458,
  OPT_falign_loops = 459,
  OPT_falign_loops_ = 460,
  OPT_fall_intrinsics = 461,

  OPT_fallow_leading_underscore = 463,
  OPT_fallow_parameterless_variadic_functions = 464,





  OPT_fasm = 470,
  OPT_fassert = 471,
  OPT_fassociative_math = 472,
  OPT_fassume_compiled = 473,
  OPT_fassume_compiled_ = 474,
  OPT_fasynchronous_unwind_tables = 475,
  OPT_fauto_inc_dec = 476,
  OPT_fautomatic = 477,
  OPT_faux_classpath = 478,
  OPT_fbackslash = 479,
  OPT_fbacktrace = 480,
  OPT_fblas_matmul_limit_ = 481,
  OPT_fbootclasspath_ = 482,
  OPT_fbootstrap_classes = 483,
  OPT_fbounds_check = 484,
  OPT_fbranch_count_reg = 485,
  OPT_fbranch_probabilities = 486,
  OPT_fbranch_target_load_optimize = 487,
  OPT_fbranch_target_load_optimize2 = 488,
  OPT_fbtr_bb_exclusive = 489,
  OPT_fbuilding_libgcc = 490,
  OPT_fbuiltin = 491,
  OPT_fbuiltin_ = 492,
  OPT_fcall_saved_ = 493,
  OPT_fcall_used_ = 494,
  OPT_fcaller_saves = 495,
  OPT_fcanonical_system_headers = 496,
  OPT_fcheck_array_temporaries = 497,
  OPT_fcheck_data_deps = 498,
  OPT_fcheck_new = 499,
  OPT_fcheck_references = 500,
  OPT_fcheck_ = 501,
  OPT_fcilkplus = 502,
  OPT_fclasspath_ = 503,
  OPT_fcoarray_ = 504,
  OPT_fcombine_stack_adjustments = 505,
  OPT_fcommon = 506,
  OPT_fcompare_debug = 507,
  OPT_fcompare_debug_second = 508,
  OPT_fcompare_debug_ = 509,
  OPT_fcompare_elim = 510,
  OPT_fcompile_resource_ = 511,
  OPT_fcond_mismatch = 512,
  OPT_fconserve_space = 513,
  OPT_fconserve_stack = 514,
  OPT_fconstant_string_class_ = 515,
  OPT_fconstexpr_depth_ = 516,
  OPT_fconvert_big_endian = 517,
  OPT_fconvert_little_endian = 518,
  OPT_fconvert_native = 519,
  OPT_fconvert_swap = 520,
  OPT_fcprop_registers = 521,
  OPT_fcray_pointer = 522,
  OPT_fcrossjumping = 523,
  OPT_fcse_follow_jumps = 524,

  OPT_fcx_fortran_rules = 526,
  OPT_fcx_limited_range = 527,
  OPT_fd_lines_as_code = 528,
  OPT_fd_lines_as_comments = 529,
  OPT_fd_verbose = 530,
  OPT_fd_vtls = 531,
  OPT_fdata_sections = 532,
  OPT_fdbg_cnt_list = 533,
  OPT_fdbg_cnt_ = 534,
  OPT_fdce = 535,
  OPT_fdebug = 536,
  OPT_fdebug_cpp = 537,
  OPT_fdebug_prefix_map_ = 538,
  OPT_fdebug_types_section = 539,
  OPT_fdebug_ = 540,
  OPT_fdeclone_ctor_dtor = 541,
  OPT_fdeduce_init_list = 542,
  OPT_fdefault_double_8 = 543,

  OPT_fdefault_integer_8 = 545,
  OPT_fdefault_real_8 = 546,
  OPT_fdefer_pop = 547,
  OPT_fdelayed_branch = 548,
  OPT_fdelete_dead_exceptions = 549,
  OPT_fdelete_null_pointer_checks = 550,
  OPT_fdeps = 551,
  OPT_fdeps_ = 552,
  OPT_fdevirtualize = 553,
  OPT_fdevirtualize_speculatively = 554,

  OPT_fdiagnostics_color_ = 556,
  OPT_fdiagnostics_show_caret = 557,
  OPT_fdiagnostics_show_location_ = 558,
  OPT_fdiagnostics_show_option = 559,
  OPT_fdirectives_only = 560,
  OPT_fdisable_ = 561,
  OPT_fdisable_assertions = 562,
  OPT_fdisable_assertions_ = 563,
  OPT_fdoc = 564,
  OPT_fdoc_dir_ = 565,
  OPT_fdoc_file_ = 566,
  OPT_fdoc_inc_ = 567,
  OPT_fdollar_ok = 568,
  OPT_fdollars_in_identifiers = 569,
  OPT_fdse = 570,
  OPT_fdump_ = 571,
  OPT_fdump_ada_spec = 572,
  OPT_fdump_ada_spec_slim = 573,

  OPT_fdump_final_insns = 575,
  OPT_fdump_final_insns_ = 576,
  OPT_fdump_fortran_optimized = 577,
  OPT_fdump_fortran_original = 578,
  OPT_fdump_go_spec_ = 579,
  OPT_fdump_noaddr = 580,
  OPT_fdump_parse_tree = 581,
  OPT_fdump_passes = 582,
  OPT_fdump_unnumbered = 583,
  OPT_fdump_unnumbered_links = 584,
  OPT_fdwarf2_cfi_asm = 585,
  OPT_fearly_inlining = 586,
  OPT_felide_constructors = 587,
  OPT_feliminate_dwarf2_dups = 588,
  OPT_feliminate_unused_debug_symbols = 589,
  OPT_feliminate_unused_debug_types = 590,
  OPT_femit_class_debug_always = 591,
  OPT_femit_class_file = 592,
  OPT_femit_class_files = 593,
  OPT_femit_moduleinfo = 594,
  OPT_femit_struct_debug_baseonly = 595,
  OPT_femit_struct_debug_detailed_ = 596,
  OPT_femit_struct_debug_reduced = 597,
  OPT_femit_templates = 598,
  OPT_fenable_ = 599,
  OPT_fenable_assertions = 600,
  OPT_fenable_assertions_ = 601,
  OPT_fencoding_ = 602,
  OPT_fenforce_eh_specs = 603,

  OPT_fexceptions = 605,
  OPT_fexcess_precision_ = 606,
  OPT_fexec_charset_ = 607,
  OPT_fexpensive_optimizations = 608,
  OPT_fext_numeric_literals = 609,
  OPT_fextdirs_ = 610,
  OPT_fextended_identifiers = 611,
  OPT_fextern_tls_init = 612,
  OPT_fexternal_blas = 613,

  OPT_ff2c = 615,
  OPT_ffast_math = 616,
  OPT_ffat_lto_objects = 617,
  OPT_ffilelist_file = 618,
  OPT_ffinite_math_only = 619,
  OPT_ffixed_ = 620,
  OPT_ffixed_form = 621,
  OPT_ffixed_line_length_ = 622,
  OPT_ffixed_line_length_none = 623,
  OPT_ffloat_store = 624,
  OPT_ffor_scope = 625,

  OPT_fforce_classes_archive_check = 627,
  OPT_fforward_propagate = 628,
  OPT_ffp_contract_ = 629,
  OPT_ffpe_summary_ = 630,
  OPT_ffpe_trap_ = 631,
  OPT_ffree_form = 632,
  OPT_ffree_line_length_ = 633,
  OPT_ffree_line_length_none = 634,
  OPT_ffreestanding = 635,
  OPT_ffriend_injection = 636,
  OPT_ffrontend_optimize = 637,
  OPT_ffunction_cse = 638,
  OPT_ffunction_sections = 639,
  OPT_fgcse = 640,
  OPT_fgcse_after_reload = 641,
  OPT_fgcse_las = 642,
  OPT_fgcse_lm = 643,
  OPT_fgcse_sm = 644,
  OPT_fgnu_keywords = 645,
  OPT_fgnu_runtime = 646,
  OPT_fgnu_tm = 647,
  OPT_fgnu_unique = 648,
  OPT_fgnu89_inline = 649,
  OPT_fgo_check_divide_overflow = 650,
  OPT_fgo_check_divide_zero = 651,
  OPT_fgo_dump_ = 652,
  OPT_fgo_optimize_ = 653,
  OPT_fgo_pkgpath_ = 654,
  OPT_fgo_prefix_ = 655,
  OPT_fgo_relative_import_path_ = 656,
  OPT_fgraphite = 657,
  OPT_fgraphite_identity = 658,
  OPT_fguess_branch_probability = 659,


  OPT_fhash_synchronization = 662,


  OPT_fhoist_adjacent_loads = 665,

  OPT_fhosted = 667,

  OPT_fident = 669,
  OPT_fif_conversion = 670,
  OPT_fif_conversion2 = 671,
  OPT_fignore_unknown_pragmas = 672,
  OPT_fimplement_inlines = 673,
  OPT_fimplicit_inline_templates = 674,
  OPT_fimplicit_none = 675,
  OPT_fimplicit_templates = 676,
  OPT_fin = 677,
  OPT_findirect_classes = 678,
  OPT_findirect_dispatch = 679,
  OPT_findirect_inlining = 680,
  OPT_finhibit_size_directive = 681,
  OPT_finit_character_ = 682,
  OPT_finit_integer_ = 683,
  OPT_finit_local_zero = 684,
  OPT_finit_logical_ = 685,
  OPT_finit_real_ = 686,
  OPT_finline = 687,
  OPT_finline_atomics = 688,
  OPT_finline_functions = 689,
  OPT_finline_functions_called_once = 690,

  OPT_finline_limit_ = 692,
  OPT_finline_small_functions = 693,
  OPT_finput_charset_ = 694,
  OPT_finstrument_functions = 695,
  OPT_finstrument_functions_exclude_file_list_ = 696,
  OPT_finstrument_functions_exclude_function_list_ = 697,
  OPT_finteger_4_integer_8 = 698,
  OPT_fintfc = 699,
  OPT_fintfc_dir_ = 700,
  OPT_fintfc_file_ = 701,
  OPT_fintrinsic_modules_path = 702,
  OPT_fintrinsic_modules_path_ = 703,
  OPT_finvariants = 704,
  OPT_fipa_cp = 705,
  OPT_fipa_cp_clone = 706,

  OPT_fipa_profile = 708,
  OPT_fipa_pta = 709,
  OPT_fipa_pure_const = 710,
  OPT_fipa_reference = 711,
  OPT_fipa_sra = 712,

  OPT_fira_algorithm_ = 714,
  OPT_fira_hoist_pressure = 715,
  OPT_fira_loop_pressure = 716,
  OPT_fira_region_ = 717,
  OPT_fira_share_save_slots = 718,
  OPT_fira_share_spill_slots = 719,
  OPT_fira_verbose_ = 720,
  OPT_fisolate_erroneous_paths_attribute = 721,
  OPT_fisolate_erroneous_paths_dereference = 722,
  OPT_fivopts = 723,
  OPT_fjni = 724,
  OPT_fjump_tables = 725,
  OPT_fkeep_inline_dllexport = 726,
  OPT_fkeep_inline_functions = 727,
  OPT_fkeep_static_consts = 728,

  OPT_flax_vector_conversions = 730,
  OPT_fleading_underscore = 731,
  OPT_flifetime_dse = 732,
  OPT_flive_range_shrinkage = 733,
  OPT_floop_block = 734,

  OPT_floop_interchange = 736,
  OPT_floop_nest_optimize = 737,

  OPT_floop_parallelize_all = 739,
  OPT_floop_strip_mine = 740,
  OPT_flto = 741,
  OPT_flto_compression_level_ = 742,
  OPT_flto_partition_1to1 = 743,
  OPT_flto_partition_balanced = 744,
  OPT_flto_partition_max = 745,
  OPT_flto_partition_none = 746,
  OPT_flto_report = 747,
  OPT_flto_report_wpa = 748,
  OPT_flto_ = 749,
  OPT_fltrans = 750,
  OPT_fltrans_output_list_ = 751,
  OPT_fmain_ = 752,
  OPT_fmake_deps = 753,
  OPT_fmake_deps_ = 754,
  OPT_fmake_mdeps = 755,
  OPT_fmake_mdeps_ = 756,
  OPT_fmath_errno = 757,
  OPT_fmax_array_constructor_ = 758,
  OPT_fmax_errors_ = 759,
  OPT_fmax_identifier_length_ = 760,
  OPT_fmax_stack_var_size_ = 761,
  OPT_fmax_subrecord_length_ = 762,
  OPT_fmem_report = 763,
  OPT_fmem_report_wpa = 764,
  OPT_fmerge_all_constants = 765,
  OPT_fmerge_constants = 766,
  OPT_fmerge_debug_strings = 767,
  OPT_fmessage_length_ = 768,
  OPT_fmodule_private = 769,
  OPT_fmodulo_sched = 770,
  OPT_fmodulo_sched_allow_regmoves = 771,
  OPT_fmove_loop_invariants = 772,
  OPT_fms_extensions = 773,





  OPT_fnext_runtime = 779,
  OPT_fnil_receivers = 780,

  OPT_fnon_call_exceptions = 782,
  OPT_fnonansi_builtins = 783,

  OPT_fnothrow_opt = 785,
  OPT_fobjc_abi_version_ = 786,
  OPT_fobjc_call_cxx_cdtors = 787,
  OPT_fobjc_direct_dispatch = 788,
  OPT_fobjc_exceptions = 789,
  OPT_fobjc_gc = 790,
  OPT_fobjc_nilcheck = 791,
  OPT_fobjc_sjlj_exceptions = 792,
  OPT_fobjc_std_objc1 = 793,
  OPT_fomit_frame_pointer = 794,
  OPT_fonly_ = 795,
  OPT_fopenmp = 796,
  OPT_fopenmp_simd = 797,
  OPT_foperator_names = 798,
  OPT_fopt_info = 799,
  OPT_fopt_info_ = 800,

  OPT_foptimize_sibling_calls = 802,
  OPT_foptimize_static_class_initialization = 803,
  OPT_foptimize_strlen = 804,

  OPT_fout = 806,
  OPT_foutput_class_dir_ = 807,
  OPT_fpack_derived = 808,
  OPT_fpack_struct = 809,
  OPT_fpack_struct_ = 810,
  OPT_fpartial_inlining = 811,
  OPT_fpcc_struct_return = 812,
  OPT_fpch_deps = 813,
  OPT_fpch_preprocess = 814,
  OPT_fpeel_loops = 815,
  OPT_fpeephole = 816,
  OPT_fpeephole2 = 817,
  OPT_fpermissive = 818,
  OPT_fpic = 819,
  OPT_fpie = 820,
  OPT_fplan9_extensions = 821,
  OPT_fplugin_arg_ = 822,
  OPT_fplugin_ = 823,
  OPT_fpost_ipa_mem_report = 824,
  OPT_fpre_ipa_mem_report = 825,
  OPT_fpredictive_commoning = 826,
  OPT_fprefetch_loop_arrays = 827,
  OPT_fpreprocessed = 828,
  OPT_fpretty_templates = 829,
  OPT_fprofile = 830,
  OPT_fprofile_arcs = 831,
  OPT_fprofile_correction = 832,
  OPT_fprofile_dir_ = 833,
  OPT_fprofile_generate = 834,
  OPT_fprofile_generate_ = 835,
  OPT_fprofile_reorder_functions = 836,
  OPT_fprofile_report = 837,
  OPT_fprofile_use = 838,
  OPT_fprofile_use_ = 839,
  OPT_fprofile_values = 840,
  OPT_fproperty = 841,
  OPT_fprotect_parens = 842,
  OPT_frandom_seed = 843,
  OPT_frandom_seed_ = 844,
  OPT_frange_check = 845,
  OPT_freal_4_real_10 = 846,
  OPT_freal_4_real_16 = 847,
  OPT_freal_4_real_8 = 848,
  OPT_freal_8_real_10 = 849,
  OPT_freal_8_real_16 = 850,
  OPT_freal_8_real_4 = 851,
  OPT_frealloc_lhs = 852,
  OPT_freciprocal_math = 853,
  OPT_frecord_gcc_switches = 854,
  OPT_frecord_marker_4 = 855,
  OPT_frecord_marker_8 = 856,
  OPT_frecursive = 857,
  OPT_freduced_reflection = 858,
  OPT_free = 859,
  OPT_freg_struct_return = 860,

  OPT_frelease = 862,
  OPT_frename_registers = 863,
  OPT_freorder_blocks = 864,
  OPT_freorder_blocks_and_partition = 865,
  OPT_freorder_functions = 866,
  OPT_frepack_arrays = 867,
  OPT_freplace_objc_classes = 868,
  OPT_frepo = 869,
  OPT_frequire_return_statement = 870,
  OPT_frerun_cse_after_loop = 871,

  OPT_freschedule_modulo_scheduled_loops = 873,
  OPT_fresolution_ = 874,
  OPT_frounding_math = 875,
  OPT_frtti = 876,
  OPT_fsanitize_ = 877,
  OPT_fsaw_java_file = 878,
  OPT_fsched_critical_path_heuristic = 879,
  OPT_fsched_dep_count_heuristic = 880,
  OPT_fsched_group_heuristic = 881,
  OPT_fsched_interblock = 882,
  OPT_fsched_last_insn_heuristic = 883,
  OPT_fsched_pressure = 884,
  OPT_fsched_rank_heuristic = 885,
  OPT_fsched_spec = 886,
  OPT_fsched_spec_insn_heuristic = 887,
  OPT_fsched_spec_load = 888,
  OPT_fsched_spec_load_dangerous = 889,
  OPT_fsched_stalled_insns = 890,
  OPT_fsched_stalled_insns_dep = 891,
  OPT_fsched_stalled_insns_dep_ = 892,
  OPT_fsched_stalled_insns_ = 893,
  OPT_fsched_verbose_ = 894,
  OPT_fsched2_use_superblocks = 895,

  OPT_fschedule_insns = 897,
  OPT_fschedule_insns2 = 898,
  OPT_fsecond_underscore = 899,
  OPT_fsection_anchors = 900,

  OPT_fsel_sched_pipelining = 902,
  OPT_fsel_sched_pipelining_outer_loops = 903,
  OPT_fsel_sched_reschedule_pipelined = 904,
  OPT_fselective_scheduling = 905,
  OPT_fselective_scheduling2 = 906,
  OPT_fshort_double = 907,
  OPT_fshort_enums = 908,
  OPT_fshort_wchar = 909,
  OPT_fshow_column = 910,
  OPT_fshrink_wrap = 911,
  OPT_fsign_zero = 912,
  OPT_fsignaling_nans = 913,
  OPT_fsigned_bitfields = 914,
  OPT_fsigned_char = 915,
  OPT_fsigned_zeros = 916,
  OPT_fsimd_cost_model_ = 917,
  OPT_fsingle_precision_constant = 918,
  OPT_fsource_filename_ = 919,
  OPT_fsource_ = 920,
  OPT_fsplit_ivs_in_unroller = 921,
  OPT_fsplit_stack = 922,
  OPT_fsplit_wide_types = 923,

  OPT_fstack_arrays = 925,

  OPT_fstack_check_ = 927,
  OPT_fstack_limit = 928,
  OPT_fstack_limit_register_ = 929,
  OPT_fstack_limit_symbol_ = 930,
  OPT_fstack_protector = 931,
  OPT_fstack_protector_all = 932,
  OPT_fstack_protector_strong = 933,
  OPT_fstack_reuse_ = 934,
  OPT_fstack_usage = 935,
  OPT_fstats = 936,
  OPT_fstore_check = 937,

  OPT_fstrict_aliasing = 939,
  OPT_fstrict_enums = 940,
  OPT_fstrict_overflow = 941,

  OPT_fstrict_volatile_bitfields = 943,
  OPT_fsync_libcalls = 944,
  OPT_fsyntax_only = 945,
  OPT_ftabstop_ = 946,

  OPT_ftarget_ = 948,
  OPT_ftemplate_backtrace_limit_ = 949,

  OPT_ftemplate_depth_ = 951,
  OPT_ftest_coverage = 952,

  OPT_fthread_jumps = 954,
  OPT_fthreadsafe_statics = 955,
  OPT_ftime_report = 956,
  OPT_ftls_model_ = 957,
  OPT_ftoplevel_reorder = 958,
  OPT_ftracer = 959,
  OPT_ftrack_macro_expansion = 960,
  OPT_ftrack_macro_expansion_ = 961,
  OPT_ftrapping_math = 962,
  OPT_ftrapv = 963,
  OPT_ftree_bit_ccp = 964,
  OPT_ftree_builtin_call_dce = 965,
  OPT_ftree_ccp = 966,
  OPT_ftree_ch = 967,
  OPT_ftree_coalesce_inlined_vars = 968,
  OPT_ftree_coalesce_vars = 969,
  OPT_ftree_copy_prop = 970,
  OPT_ftree_copyrename = 971,
  OPT_ftree_cselim = 972,
  OPT_ftree_dce = 973,
  OPT_ftree_dominator_opts = 974,
  OPT_ftree_dse = 975,
  OPT_ftree_forwprop = 976,
  OPT_ftree_fre = 977,
  OPT_ftree_loop_distribute_patterns = 978,
  OPT_ftree_loop_distribution = 979,
  OPT_ftree_loop_if_convert = 980,
  OPT_ftree_loop_if_convert_stores = 981,
  OPT_ftree_loop_im = 982,
  OPT_ftree_loop_ivcanon = 983,

  OPT_ftree_loop_optimize = 985,
  OPT_ftree_loop_vectorize = 986,
  OPT_ftree_lrs = 987,
  OPT_ftree_parallelize_loops_ = 988,
  OPT_ftree_partial_pre = 989,
  OPT_ftree_phiprop = 990,
  OPT_ftree_pre = 991,
  OPT_ftree_pta = 992,
  OPT_ftree_reassoc = 993,

  OPT_ftree_scev_cprop = 995,
  OPT_ftree_sink = 996,
  OPT_ftree_slp_vectorize = 997,
  OPT_ftree_slsr = 998,
  OPT_ftree_sra = 999,


  OPT_ftree_switch_conversion = 1002,
  OPT_ftree_tail_merge = 1003,
  OPT_ftree_ter = 1004,

  OPT_ftree_vectorize = 1006,

  OPT_ftree_vrp = 1008,
  OPT_funderscoring = 1009,
  OPT_funit_at_a_time = 1010,
  OPT_funittest = 1011,
  OPT_funroll_all_loops = 1012,
  OPT_funroll_loops = 1013,
  OPT_funsafe_loop_optimizations = 1014,
  OPT_funsafe_math_optimizations = 1015,
  OPT_funsigned_bitfields = 1016,
  OPT_funsigned_char = 1017,
  OPT_funswitch_loops = 1018,
  OPT_funwind_tables = 1019,
  OPT_fuse_atomic_builtins = 1020,
  OPT_fuse_boehm_gc = 1021,
  OPT_fuse_cxa_atexit = 1022,
  OPT_fuse_cxa_get_exception_ptr = 1023,
  OPT_fuse_divide_subroutine = 1024,
  OPT_fuse_ld_bfd = 1025,
  OPT_fuse_ld_gold = 1026,
  OPT_fuse_linker_plugin = 1027,
  OPT_fvar_tracking = 1028,
  OPT_fvar_tracking_assignments = 1029,
  OPT_fvar_tracking_assignments_toggle = 1030,
  OPT_fvar_tracking_uninit = 1031,
  OPT_fvariable_expansion_in_unroller = 1032,

  OPT_fvect_cost_model_ = 1034,
  OPT_fverbose_asm = 1035,

  OPT_fversion_ = 1037,
  OPT_fvisibility_inlines_hidden = 1038,
  OPT_fvisibility_ms_compat = 1039,
  OPT_fvisibility_ = 1040,
  OPT_fvpt = 1041,


  OPT_fvtable_verify_ = 1044,
  OPT_fvtv_counts = 1045,
  OPT_fvtv_debug = 1046,
  OPT_fweak = 1047,
  OPT_fweb = 1048,

  OPT_fwhole_program = 1050,
  OPT_fwide_exec_charset_ = 1051,
  OPT_fworking_directory = 1052,
  OPT_fwpa = 1053,
  OPT_fwpa_ = 1054,
  OPT_fwrapv = 1055,


  OPT_fzero_initialized_in_bss = 1058,
  OPT_fzero_link = 1059,
  OPT_g = 1060,
  OPT_gant = 1061,
  OPT_gcoff = 1062,
  OPT_gdwarf = 1063,
  OPT_gdwarf_ = 1064,
  OPT_gen_decls = 1065,
  OPT_ggdb = 1066,
  OPT_ggnu_pubnames = 1067,
  OPT_gnat = 1068,
  OPT_gnatO = 1069,
  OPT_gno_pubnames = 1070,
  OPT_gno_record_gcc_switches = 1071,
  OPT_gno_split_dwarf = 1072,
  OPT_gno_strict_dwarf = 1073,
  OPT_gpubnames = 1074,
  OPT_grecord_gcc_switches = 1075,
  OPT_gsplit_dwarf = 1076,
  OPT_gstabs = 1077,
  OPT_gstabs_ = 1078,
  OPT_gstrict_dwarf = 1079,
  OPT_gtoggle = 1080,
  OPT_gvms = 1081,
  OPT_gxcoff = 1082,
  OPT_gxcoff_ = 1083,
  OPT_h = 1084,
  OPT_idirafter = 1085,
  OPT_imacros = 1086,
  OPT_imultiarch = 1087,
  OPT_imultilib = 1088,
  OPT_include = 1089,
  OPT_iplugindir_ = 1090,
  OPT_iprefix = 1091,
  OPT_iquote = 1092,
  OPT_isysroot = 1093,
  OPT_isystem = 1094,
  OPT_iwithprefix = 1095,
  OPT_iwithprefixbefore = 1096,
  OPT_k8 = 1097,
  OPT_l = 1098,
  OPT_lang_asm = 1099,
  OPT_m128bit_long_double = 1100,
  OPT_m16 = 1101,
  OPT_m32 = 1102,
  OPT_m3dnow = 1103,
  OPT_m3dnowa = 1104,
  OPT_m64 = 1105,
  OPT_m80387 = 1106,
  OPT_m8bit_idiv = 1107,
  OPT_m96bit_long_double = 1108,
  OPT_mabi_ = 1109,
  OPT_mabm = 1110,
  OPT_maccumulate_outgoing_args = 1111,
  OPT_maddress_mode_ = 1112,
  OPT_madx = 1113,
  OPT_maes = 1114,
  OPT_malign_double = 1115,
  OPT_malign_functions_ = 1116,
  OPT_malign_jumps_ = 1117,
  OPT_malign_loops_ = 1118,
  OPT_malign_stringops = 1119,
  OPT_mandroid = 1120,
  OPT_march_ = 1121,
  OPT_masm_ = 1122,
  OPT_mavx = 1123,
  OPT_mavx2 = 1124,
  OPT_mavx256_split_unaligned_load = 1125,
  OPT_mavx256_split_unaligned_store = 1126,
  OPT_mavx512cd = 1127,
  OPT_mavx512er = 1128,
  OPT_mavx512f = 1129,
  OPT_mavx512pf = 1130,
  OPT_mbionic = 1131,
  OPT_mbmi = 1132,
  OPT_mbmi2 = 1133,
  OPT_mbranch_cost_ = 1134,
  OPT_mcld = 1135,
  OPT_mcmodel_ = 1136,

  OPT_mcrc32 = 1138,
  OPT_mcx16 = 1139,
  OPT_mdispatch_scheduler = 1140,
  OPT_mdump_tune_features = 1141,
  OPT_mf16c = 1142,
  OPT_mfancy_math_387 = 1143,
  OPT_mfentry = 1144,
  OPT_mfma = 1145,
  OPT_mfma4 = 1146,
  OPT_mforce_drap = 1147,
  OPT_mfp_ret_in_387 = 1148,
  OPT_mfpmath_ = 1149,
  OPT_mfsgsbase = 1150,

  OPT_mfxsr = 1152,
  OPT_mglibc = 1153,
  OPT_mhard_float = 1154,
  OPT_mhle = 1155,
  OPT_mieee_fp = 1156,
  OPT_mincoming_stack_boundary_ = 1157,
  OPT_minline_all_stringops = 1158,
  OPT_minline_stringops_dynamically = 1159,

  OPT_mlarge_data_threshold_ = 1161,
  OPT_mlong_double_128 = 1162,
  OPT_mlong_double_64 = 1163,
  OPT_mlong_double_80 = 1164,
  OPT_mlwp = 1165,
  OPT_mlzcnt = 1166,
  OPT_mmemcpy_strategy_ = 1167,
  OPT_mmemset_strategy_ = 1168,
  OPT_mmmx = 1169,
  OPT_mmovbe = 1170,
  OPT_mms_bitfields = 1171,
  OPT_mno_align_stringops = 1172,
  OPT_mno_default = 1173,
  OPT_mno_fancy_math_387 = 1174,
  OPT_mno_push_args = 1175,
  OPT_mno_red_zone = 1176,
  OPT_mno_sse4 = 1177,
  OPT_momit_leaf_frame_pointer = 1178,
  OPT_mpc32 = 1179,
  OPT_mpc64 = 1180,
  OPT_mpc80 = 1181,
  OPT_mpclmul = 1182,
  OPT_mpopcnt = 1183,
  OPT_mprefer_avx128 = 1184,
  OPT_mpreferred_stack_boundary_ = 1185,
  OPT_mprefetchwt1 = 1186,
  OPT_mprfchw = 1187,
  OPT_mpush_args = 1188,
  OPT_mrdrnd = 1189,
  OPT_mrdseed = 1190,
  OPT_mrecip = 1191,
  OPT_mrecip_ = 1192,
  OPT_mred_zone = 1193,
  OPT_mregparm_ = 1194,
  OPT_mrtd = 1195,
  OPT_mrtm = 1196,
  OPT_msahf = 1197,
  OPT_msha = 1198,
  OPT_msoft_float = 1199,
  OPT_msse = 1200,
  OPT_msse2 = 1201,
  OPT_msse2avx = 1202,
  OPT_msse3 = 1203,
  OPT_msse4 = 1204,
  OPT_msse4_1 = 1205,
  OPT_msse4_2 = 1206,
  OPT_msse4a = 1207,

  OPT_msseregparm = 1209,
  OPT_mssse3 = 1210,
  OPT_mstack_arg_probe = 1211,
  OPT_mstack_protector_guard_ = 1212,
  OPT_mstackrealign = 1213,
  OPT_mstringop_strategy_ = 1214,
  OPT_mtbm = 1215,
  OPT_mtls_dialect_ = 1216,
  OPT_mtls_direct_seg_refs = 1217,
  OPT_mtune_ctrl_ = 1218,
  OPT_mtune_ = 1219,
  OPT_muclibc = 1220,
  OPT_mveclibabi_ = 1221,
  OPT_mvect8_ret_in_mem = 1222,
  OPT_mvzeroupper = 1223,
  OPT_mx32 = 1224,
  OPT_mxop = 1225,
  OPT_mxsave = 1226,
  OPT_mxsaveopt = 1227,
  OPT_n = 1228,
  OPT_no_canonical_prefixes = 1229,
  OPT_no_integrated_cpp = 1230,
  OPT_nocpp = 1231,
  OPT_nodefaultlibs = 1232,
  OPT_nophoboslib = 1233,
  OPT_nostartfiles = 1234,
  OPT_nostdinc = 1235,
  OPT_nostdinc__ = 1236,
  OPT_nostdlib = 1237,
  OPT_o = 1238,
  OPT_p = 1239,
  OPT_pass_exit_codes = 1240,

  OPT_pedantic_errors = 1242,
  OPT_pg = 1243,
  OPT_pie = 1244,
  OPT_pipe = 1245,
  OPT_posix = 1246,
  OPT_print_file_name_ = 1247,
  OPT_print_libgcc_file_name = 1248,
  OPT_print_multi_directory = 1249,
  OPT_print_multi_lib = 1250,
  OPT_print_multi_os_directory = 1251,
  OPT_print_multiarch = 1252,
  OPT_print_objc_runtime_info = 1253,
  OPT_print_prog_name_ = 1254,
  OPT_print_search_dirs = 1255,
  OPT_print_sysroot = 1256,
  OPT_print_sysroot_headers_suffix = 1257,
  OPT_profile = 1258,
  OPT_pthread = 1259,
  OPT_quiet = 1260,
  OPT_r = 1261,
  OPT_rdynamic = 1262,
  OPT_remap = 1263,
  OPT_s = 1264,
  OPT_s_bc_abi = 1265,
  OPT_save_temps = 1266,
  OPT_save_temps_ = 1267,
  OPT_shared = 1268,
  OPT_shared_libgcc = 1269,

  OPT_specs_ = 1271,
  OPT_static = 1272,
  OPT_static_libasan = 1273,
  OPT_static_libgcc = 1274,
  OPT_static_libgcj = 1275,
  OPT_static_libgfortran = 1276,
  OPT_static_libgo = 1277,
  OPT_static_liblsan = 1278,
  OPT_static_libphobos = 1279,
  OPT_static_libstdc__ = 1280,
  OPT_static_libtsan = 1281,
  OPT_static_libubsan = 1282,


  OPT_std_c__11 = 1285,

  OPT_std_c__1y = 1287,
  OPT_std_c__98 = 1288,
  OPT_std_c11 = 1289,


  OPT_std_c90 = 1292,
  OPT_std_c99 = 1293,

  OPT_std_f2003 = 1295,
  OPT_std_f2008 = 1296,
  OPT_std_f2008ts = 1297,
  OPT_std_f95 = 1298,
  OPT_std_gnu = 1299,


  OPT_std_gnu__11 = 1302,

  OPT_std_gnu__1y = 1304,
  OPT_std_gnu__98 = 1305,
  OPT_std_gnu11 = 1306,


  OPT_std_gnu90 = 1309,
  OPT_std_gnu99 = 1310,


  OPT_std_iso9899_199409 = 1313,



  OPT_std_legacy = 1317,
  OPT_symbolic = 1318,
  OPT_t = 1319,
  OPT_time = 1320,
  OPT_time_ = 1321,
  OPT_tno_android_cc = 1322,
  OPT_tno_android_ld = 1323,
  OPT_traditional = 1324,
  OPT_traditional_cpp = 1325,
  OPT_trigraphs = 1326,
  OPT_u = 1327,
  OPT_undef = 1328,
  OPT_v = 1329,
  OPT_version = 1330,
  OPT_w = 1331,
  OPT_wrapper = 1332,
  OPT_x = 1333,
  OPT_z = 1334,
  N_OPTS,
  OPT_SPECIAL_unknown,
  OPT_SPECIAL_ignore,
  OPT_SPECIAL_program_name,
  OPT_SPECIAL_input_file
};
// # 25 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/flags.h" 2




extern const char *const debug_type_names[];

extern void strip_off_ending (char *, int);
extern int base_of_path (const char *path, const char **base_out);


extern bool fast_math_flags_set_p (const struct gcc_options *);
extern bool fast_math_flags_struct_set_p (struct cl_optimization *);






extern bool final_insns_dump_p;





struct target_flag_state {




  int x_align_loops_log;
  int x_align_loops_max_skip;
  int x_align_jumps_log;
  int x_align_jumps_max_skip;
  int x_align_labels_log;
  int x_align_labels_max_skip;
  int x_align_functions_log;


  enum excess_precision x_flag_excess_precision;
};

extern struct target_flag_state default_target_flag_state;
// # 33 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/symtab.h" 1
// # 21 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/symtab.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/obstack.h" 1
// # 114 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/obstack.h"
extern "C" {
// # 157 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/obstack.h"
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};

struct obstack
{
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  long int temp;
  int alignment_mask;



  struct _obstack_chunk *(*chunkfun) (void *, long);
  void (*freefun) (void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned use_extra_arg:1;
  unsigned maybe_empty_object:1;



  unsigned alloc_failed:1;


};



extern void _obstack_newchunk (struct obstack *, int);
extern void _obstack_free (struct obstack *, void *);
extern int _obstack_begin (struct obstack *, int, int,
       void *(*) (long), void (*) (void *));
extern int _obstack_begin_1 (struct obstack *, int, int,
        void *(*) (void *, long),
        void (*) (void *, void *), void *);
extern int _obstack_memory_used (struct obstack *);




void obstack_init (struct obstack *obstack);

void * obstack_alloc (struct obstack *obstack, int size);

void * obstack_copy (struct obstack *obstack, void *address, int size);
void * obstack_copy0 (struct obstack *obstack, void *address, int size);

void obstack_free (struct obstack *obstack, void *block);

void obstack_blank (struct obstack *obstack, int size);

void obstack_grow (struct obstack *obstack, void *data, int size);
void obstack_grow0 (struct obstack *obstack, void *data, int size);

void obstack_1grow (struct obstack *obstack, int data_char);
void obstack_ptr_grow (struct obstack *obstack, void *data);
void obstack_int_grow (struct obstack *obstack, int data);

void * obstack_finish (struct obstack *obstack);

int obstack_object_size (struct obstack *obstack);

int obstack_room (struct obstack *obstack);
void obstack_make_room (struct obstack *obstack, int size);
void obstack_1grow_fast (struct obstack *obstack, int data_char);
void obstack_ptr_grow_fast (struct obstack *obstack, void *data);
void obstack_int_grow_fast (struct obstack *obstack, int data);
void obstack_blank_fast (struct obstack *obstack, int size);

void * obstack_base (struct obstack *obstack);
void * obstack_next_free (struct obstack *obstack);
int obstack_alignment_mask (struct obstack *obstack);
int obstack_chunk_size (struct obstack *obstack);
int obstack_memory_used (struct obstack *obstack);




extern void (*obstack_alloc_failed_handler) (void);


extern int obstack_exit_failure;
// # 542 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/obstack.h"
}
// # 22 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/symtab.h" 2







typedef struct ht_identifier ht_identifier;
typedef struct ht_identifier *ht_identifier_ptr;
struct ht_identifier {
  const unsigned char *str;
  unsigned int len;
  unsigned int hash_value;
};




typedef struct ht cpp_hash_table;
typedef struct ht_identifier *hashnode;

enum ht_lookup_option {HT_NO_INSERT = 0, HT_ALLOC};


struct ht
{

};


extern cpp_hash_table *ht_create (unsigned int order);


extern void ht_destroy (cpp_hash_table *);

extern hashnode ht_lookup (cpp_hash_table *, const unsigned char *,
      size_t, enum ht_lookup_option);
extern hashnode ht_lookup_with_hash (cpp_hash_table *, const unsigned char *,
                                     size_t, unsigned int,
                                     enum ht_lookup_option);






typedef int (*ht_cb) (struct cpp_reader *, hashnode, const void *);
extern void ht_forall (cpp_hash_table *, ht_cb, const void *);



extern void ht_purge (cpp_hash_table *, ht_cb, const void *);


extern void ht_load (cpp_hash_table *ht, hashnode *entries,
       unsigned int nslots, unsigned int nelements, bool own);


extern void ht_dump_statistics (cpp_hash_table *);
// # 34 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
// # 42 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
struct function;
struct real_value;
struct fixed_value;
struct ptr_info_def;
struct range_info_def;
struct die_struct;
struct pointer_set_t;
// # 136 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
enum tree_code {
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 1
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def" 1
// # 41 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
ERROR_MARK,
IDENTIFIER_NODE,
TREE_LIST,
TREE_VEC,
// # 78 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
BLOCK,
// # 122 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
OFFSET_TYPE,
// # 135 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
ENUMERAL_TYPE,



BOOLEAN_TYPE,
// # 149 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
INTEGER_TYPE,



REAL_TYPE,
// # 162 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
POINTER_TYPE,



REFERENCE_TYPE,


NULLPTR_TYPE,




FIXED_POINT_TYPE,
// # 183 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
COMPLEX_TYPE,




VECTOR_TYPE,
// # 204 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
ARRAY_TYPE,
// # 214 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
RECORD_TYPE,





UNION_TYPE,





QUAL_UNION_TYPE,






VOID_TYPE,







FUNCTION_TYPE,






METHOD_TYPE,





LANG_TYPE,
// # 267 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
INTEGER_CST,


REAL_CST,


FIXED_CST,



COMPLEX_CST,


VECTOR_CST,


STRING_CST,
// # 343 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
FUNCTION_DECL,
LABEL_DECL,




FIELD_DECL,
VAR_DECL,
CONST_DECL,
PARM_DECL,
TYPE_DECL,
RESULT_DECL,



DEBUG_EXPR_DECL,



NAMESPACE_DECL,
// # 373 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
IMPORTED_DECL,
// # 383 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
NAMELIST_DECL,



TRANSLATION_UNIT_DECL,
// # 400 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
COMPONENT_REF,
// # 410 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
BIT_FIELD_REF,






ARRAY_REF,




ARRAY_RANGE_REF,



REALPART_EXPR,
IMAGPART_EXPR,
// # 439 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
VIEW_CONVERT_EXPR,


INDIRECT_REF,
// # 451 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
OBJ_TYPE_REF,
// # 470 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
CONSTRUCTOR,
// # 480 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
COMPOUND_EXPR,


MODIFY_EXPR,




INIT_EXPR,







TARGET_EXPR,
// # 510 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
COND_EXPR,
// # 522 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
VEC_COND_EXPR,
// # 536 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
VEC_PERM_EXPR,
// # 559 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
BIND_EXPR,







CALL_EXPR,






WITH_CLEANUP_EXPR,
// # 591 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
CLEANUP_POINT_EXPR,
// # 643 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
PLACEHOLDER_EXPR,


PLUS_EXPR,
MINUS_EXPR,
MULT_EXPR,



POINTER_PLUS_EXPR,



MULT_HIGHPART_EXPR,


TRUNC_DIV_EXPR,


CEIL_DIV_EXPR,


FLOOR_DIV_EXPR,


ROUND_DIV_EXPR,


TRUNC_MOD_EXPR,
CEIL_MOD_EXPR,
FLOOR_MOD_EXPR,
ROUND_MOD_EXPR,


RDIV_EXPR,



EXACT_DIV_EXPR,


FIX_TRUNC_EXPR,


FLOAT_EXPR,


NEGATE_EXPR,




MIN_EXPR,
MAX_EXPR,





ABS_EXPR,
// # 717 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
LSHIFT_EXPR,
RSHIFT_EXPR,
LROTATE_EXPR,
RROTATE_EXPR,


BIT_IOR_EXPR,
BIT_XOR_EXPR,
BIT_AND_EXPR,
BIT_NOT_EXPR,
// # 737 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
TRUTH_ANDIF_EXPR,
TRUTH_ORIF_EXPR,
TRUTH_AND_EXPR,
TRUTH_OR_EXPR,
TRUTH_XOR_EXPR,
TRUTH_NOT_EXPR,
// # 753 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
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


LTGT_EXPR,

RANGE_EXPR,



PAREN_EXPR,




CONVERT_EXPR,



ADDR_SPACE_CONVERT_EXPR,




FIXED_CONVERT_EXPR,


NOP_EXPR,


NON_LVALUE_EXPR,






COMPOUND_LITERAL_EXPR,




SAVE_EXPR,



ADDR_EXPR,



FDESC_EXPR,



COMPLEX_EXPR,


CONJ_EXPR,




PREDECREMENT_EXPR,
PREINCREMENT_EXPR,
POSTDECREMENT_EXPR,
POSTINCREMENT_EXPR,


VA_ARG_EXPR,






TRY_CATCH_EXPR,




TRY_FINALLY_EXPR,





DECL_EXPR,




LABEL_EXPR,



GOTO_EXPR,






RETURN_EXPR,



EXIT_EXPR,




LOOP_EXPR,
// # 893 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
SWITCH_EXPR,
// # 905 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
CASE_LABEL_EXPR,






ASM_EXPR,




SSA_NAME,



CATCH_EXPR,




EH_FILTER_EXPR,



SCEV_KNOWN,



SCEV_NOT_KNOWN,



POLYNOMIAL_CHREC,



STATEMENT_LIST,
// # 961 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
ASSERT_EXPR,



TREE_BINFO,






WITH_SIZE_EXPR,
// # 983 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
REALIGN_LOAD_EXPR,
// # 999 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
TARGET_MEM_REF,
// # 1009 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
MEM_REF,







OMP_PARALLEL,





OMP_TASK,
// # 1044 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
OMP_FOR,



OMP_SIMD,



CILK_SIMD,



OMP_DISTRIBUTE,




OMP_TEAMS,




OMP_TARGET_DATA,




OMP_TARGET,




OMP_SECTIONS,




OMP_SINGLE,



OMP_SECTION,



OMP_MASTER,



OMP_TASKGROUP,



OMP_ORDERED,




OMP_CRITICAL,



OMP_TARGET_UPDATE,
// # 1117 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
OMP_ATOMIC,




OMP_ATOMIC_READ,
// # 1132 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
OMP_ATOMIC_CAPTURE_OLD,
OMP_ATOMIC_CAPTURE_NEW,


OMP_CLAUSE,



TRANSACTION_EXPR,
// # 1151 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
REDUC_MAX_EXPR,
REDUC_MIN_EXPR,
REDUC_PLUS_EXPR,
// # 1164 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
DOT_PROD_EXPR,
// # 1173 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
WIDEN_SUM_EXPR,






WIDEN_MULT_EXPR,
// # 1189 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
WIDEN_MULT_PLUS_EXPR,


WIDEN_MULT_MINUS_EXPR,
// # 1205 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
WIDEN_LSHIFT_EXPR,





FMA_EXPR,




VEC_LSHIFT_EXPR,
VEC_RSHIFT_EXPR,






VEC_WIDEN_MULT_HI_EXPR,
VEC_WIDEN_MULT_LO_EXPR,


VEC_WIDEN_MULT_EVEN_EXPR,
VEC_WIDEN_MULT_ODD_EXPR,





VEC_UNPACK_HI_EXPR,
VEC_UNPACK_LO_EXPR,





VEC_UNPACK_FLOAT_HI_EXPR,
VEC_UNPACK_FLOAT_LO_EXPR,





VEC_PACK_TRUNC_EXPR,
VEC_PACK_SAT_EXPR,





VEC_PACK_FIX_TRUNC_EXPR,
// # 1265 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.def"
VEC_WIDEN_LSHIFT_HI_EXPR,
VEC_WIDEN_LSHIFT_LO_EXPR,






PREDICT_EXPR,


OPTIMIZATION_NODE,


TARGET_OPTION_NODE,




ANNOTATE_EXPR,



CILK_SPAWN_STMT,


CILK_SYNC_STMT,
// # 2 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
LAST_AND_UNUSED_TREE_CODE,
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/c-family/c-common.def" 1
// # 39 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/c-family/c-common.def"
C_MAYBE_CONST_EXPR,






EXCESS_PRECISION_EXPR,





USERDEF_LITERAL,



SIZEOF_EXPR,






ARRAY_NOTATION_REF,
// # 4 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ada/gcc-interface/ada-tree.def" 1
// # 29 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ada/gcc-interface/ada-tree.def"
UNCONSTRAINED_ARRAY_TYPE,





UNCONSTRAINED_ARRAY_REF,




NULL_EXPR,



PLUS_NOMOD_EXPR,



MINUS_NOMOD_EXPR,




ATTR_ADDR_EXPR,
// # 62 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/ada/gcc-interface/ada-tree.def"
STMT_STMT,





LOOP_STMT,





EXIT_STMT,
// # 5 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def" 1
// # 41 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
OFFSET_REF,




PTRMEM_CST,





NEW_EXPR,
VEC_NEW_EXPR,




DELETE_EXPR,
VEC_DELETE_EXPR,




SCOPE_REF,




MEMBER_REF,



TYPE_EXPR,






AGGR_INIT_EXPR,




VEC_INIT_EXPR,



THROW_EXPR,



EMPTY_CLASS_EXPR,
// # 107 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
BASELINK,
// # 124 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TEMPLATE_DECL,
// # 159 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TEMPLATE_PARM_INDEX,
// # 168 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TEMPLATE_TEMPLATE_PARM,
// # 177 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TEMPLATE_TYPE_PARM,





TYPENAME_TYPE,



TYPEOF_TYPE,





BOUND_TEMPLATE_TEMPLATE_PARM,





UNBOUND_CLASS_TEMPLATE,





USING_DECL,


USING_STMT,




DEFAULT_ARG,




DEFERRED_NOEXCEPT,






TEMPLATE_ID_EXPR,



OVERLOAD,
// # 241 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
PSEUDO_DTOR_EXPR,



MODOP_EXPR,
CAST_EXPR,
REINTERPRET_CAST_EXPR,
CONST_CAST_EXPR,
STATIC_CAST_EXPR,
DYNAMIC_CAST_EXPR,
IMPLICIT_CONV_EXPR,
DOTSTAR_EXPR,
TYPEID_EXPR,
NOEXCEPT_EXPR,
// # 265 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
NON_DEPENDENT_EXPR,



CTOR_INITIALIZER,

TRY_BLOCK,

EH_SPEC_BLOCK,





HANDLER,




MUST_NOT_THROW_EXPR,




CLEANUP_STMT,





IF_STMT,



FOR_STMT,




RANGE_FOR_STMT,



WHILE_STMT,



DO_STMT,


BREAK_STMT,


CONTINUE_STMT,




SWITCH_STMT,



EXPR_STMT,

TAG_DEFN,


OFFSETOF_EXPR,


ARROW_EXPR,



ALIGNOF_EXPR,



AT_ENCODE_EXPR,




STMT_EXPR,



UNARY_PLUS_EXPR,







STATIC_ASSERT,
// # 379 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TYPE_ARGUMENT_PACK,
// # 388 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
NONTYPE_ARGUMENT_PACK,
// # 411 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TYPE_PACK_EXPANSION,






EXPR_PACK_EXPANSION,
// # 430 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
ARGUMENT_PACK_SELECT,




TRAIT_EXPR,
// # 446 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
LAMBDA_EXPR,
// # 455 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
DECLTYPE_TYPE,



UNDERLYING_TYPE,



BASES,
// # 473 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cp/cp-tree.def"
TEMPLATE_INFO,
// # 6 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/d/d-tree.def" 1
// # 22 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/d/d-tree.def"
IASM_EXPR,





UNSIGNED_RSHIFT_EXPR,


FLOAT_MOD_EXPR,
// # 7 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/java/java-tree.def" 1
// # 23 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/java/java-tree.def"
URSHIFT_EXPR,



COMPARE_EXPR,


COMPARE_L_EXPR,

COMPARE_G_EXPR,
// # 8 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/objc/objc-tree.def" 1
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/objc/objc-tree.def"
CLASS_INTERFACE_TYPE,
CLASS_IMPLEMENTATION_TYPE,

CATEGORY_INTERFACE_TYPE,
CATEGORY_IMPLEMENTATION_TYPE,

PROTOCOL_INTERFACE_TYPE,


KEYWORD_DECL,
INSTANCE_METHOD_DECL,
CLASS_METHOD_DECL,
PROPERTY_DECL,


MESSAGE_SEND_EXPR,
CLASS_REFERENCE_EXPR,
// # 70 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/objc/objc-tree.def"
PROPERTY_REF,
// # 8 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/all-tree.def" 2
// # 138 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
MAX_TREE_CODES
};
// # 154 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
enum built_in_class {
  NOT_BUILT_IN = 0,
  BUILT_IN_FRONTEND,
  BUILT_IN_MD,
  BUILT_IN_NORMAL
};
// # 168 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
enum built_in_function {
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 1
// # 217 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def"
BUILT_IN_NONE,


BUILT_IN_ACOS,
BUILT_IN_ACOSF,
BUILT_IN_ACOSH,
BUILT_IN_ACOSHF,
BUILT_IN_ACOSHL,
BUILT_IN_ACOSL,
BUILT_IN_ASIN,
BUILT_IN_ASINF,
BUILT_IN_ASINH,
BUILT_IN_ASINHF,
BUILT_IN_ASINHL,
BUILT_IN_ASINL,
BUILT_IN_ATAN,
BUILT_IN_ATAN2,
BUILT_IN_ATAN2F,
BUILT_IN_ATAN2L,
BUILT_IN_ATANF,
BUILT_IN_ATANH,
BUILT_IN_ATANHF,
BUILT_IN_ATANHL,
BUILT_IN_ATANL,
BUILT_IN_CBRT,
BUILT_IN_CBRTF,
BUILT_IN_CBRTL,
BUILT_IN_CEIL,
BUILT_IN_CEILF,
BUILT_IN_CEILL,
BUILT_IN_COPYSIGN,
BUILT_IN_COPYSIGNF,
BUILT_IN_COPYSIGNL,
BUILT_IN_COS,
BUILT_IN_COSF,
BUILT_IN_COSH,
BUILT_IN_COSHF,
BUILT_IN_COSHL,
BUILT_IN_COSL,
BUILT_IN_DREM,
BUILT_IN_DREMF,
BUILT_IN_DREML,
BUILT_IN_ERF,
BUILT_IN_ERFC,
BUILT_IN_ERFCF,
BUILT_IN_ERFCL,
BUILT_IN_ERFF,
BUILT_IN_ERFL,
BUILT_IN_EXP,
BUILT_IN_EXP10,
BUILT_IN_EXP10F,
BUILT_IN_EXP10L,
BUILT_IN_EXP2,
BUILT_IN_EXP2F,
BUILT_IN_EXP2L,
BUILT_IN_EXPF,
BUILT_IN_EXPL,
BUILT_IN_EXPM1,
BUILT_IN_EXPM1F,
BUILT_IN_EXPM1L,
BUILT_IN_FABS,
BUILT_IN_FABSF,
BUILT_IN_FABSL,
BUILT_IN_FABSD32,
BUILT_IN_FABSD64,
BUILT_IN_FABSD128,
BUILT_IN_FDIM,
BUILT_IN_FDIMF,
BUILT_IN_FDIML,
BUILT_IN_FLOOR,
BUILT_IN_FLOORF,
BUILT_IN_FLOORL,
BUILT_IN_FMA,
BUILT_IN_FMAF,
BUILT_IN_FMAL,
BUILT_IN_FMAX,
BUILT_IN_FMAXF,
BUILT_IN_FMAXL,
BUILT_IN_FMIN,
BUILT_IN_FMINF,
BUILT_IN_FMINL,
BUILT_IN_FMOD,
BUILT_IN_FMODF,
BUILT_IN_FMODL,
BUILT_IN_FREXP,
BUILT_IN_FREXPF,
BUILT_IN_FREXPL,
BUILT_IN_GAMMA,
BUILT_IN_GAMMAF,
BUILT_IN_GAMMAL,
BUILT_IN_GAMMA_R,
BUILT_IN_GAMMAF_R,
BUILT_IN_GAMMAL_R,
BUILT_IN_HUGE_VAL,
BUILT_IN_HUGE_VALF,
BUILT_IN_HUGE_VALL,
BUILT_IN_HYPOT,
BUILT_IN_HYPOTF,
BUILT_IN_HYPOTL,
BUILT_IN_ICEIL,
BUILT_IN_ICEILF,
BUILT_IN_ICEILL,
BUILT_IN_IFLOOR,
BUILT_IN_IFLOORF,
BUILT_IN_IFLOORL,
BUILT_IN_ILOGB,
BUILT_IN_ILOGBF,
BUILT_IN_ILOGBL,
BUILT_IN_INF,
BUILT_IN_INFF,
BUILT_IN_INFL,
BUILT_IN_INFD32,
BUILT_IN_INFD64,
BUILT_IN_INFD128,
BUILT_IN_IRINT,
BUILT_IN_IRINTF,
BUILT_IN_IRINTL,
BUILT_IN_IROUND,
BUILT_IN_IROUNDF,
BUILT_IN_IROUNDL,
BUILT_IN_J0,
BUILT_IN_J0F,
BUILT_IN_J0L,
BUILT_IN_J1,
BUILT_IN_J1F,
BUILT_IN_J1L,
BUILT_IN_JN,
BUILT_IN_JNF,
BUILT_IN_JNL,
BUILT_IN_LCEIL,
BUILT_IN_LCEILF,
BUILT_IN_LCEILL,
BUILT_IN_LDEXP,
BUILT_IN_LDEXPF,
BUILT_IN_LDEXPL,
BUILT_IN_LFLOOR,
BUILT_IN_LFLOORF,
BUILT_IN_LFLOORL,
BUILT_IN_LGAMMA,
BUILT_IN_LGAMMAF,
BUILT_IN_LGAMMAL,
BUILT_IN_LGAMMA_R,
BUILT_IN_LGAMMAF_R,
BUILT_IN_LGAMMAL_R,
BUILT_IN_LLCEIL,
BUILT_IN_LLCEILF,
BUILT_IN_LLCEILL,
BUILT_IN_LLFLOOR,
BUILT_IN_LLFLOORF,
BUILT_IN_LLFLOORL,
BUILT_IN_LLRINT,
BUILT_IN_LLRINTF,
BUILT_IN_LLRINTL,
BUILT_IN_LLROUND,
BUILT_IN_LLROUNDF,
BUILT_IN_LLROUNDL,
BUILT_IN_LOG,
BUILT_IN_LOG10,
BUILT_IN_LOG10F,
BUILT_IN_LOG10L,
BUILT_IN_LOG1P,
BUILT_IN_LOG1PF,
BUILT_IN_LOG1PL,
BUILT_IN_LOG2,
BUILT_IN_LOG2F,
BUILT_IN_LOG2L,
BUILT_IN_LOGB,
BUILT_IN_LOGBF,
BUILT_IN_LOGBL,
BUILT_IN_LOGF,
BUILT_IN_LOGL,
BUILT_IN_LRINT,
BUILT_IN_LRINTF,
BUILT_IN_LRINTL,
BUILT_IN_LROUND,
BUILT_IN_LROUNDF,
BUILT_IN_LROUNDL,
BUILT_IN_MODF,
BUILT_IN_MODFF,
BUILT_IN_MODFL,
BUILT_IN_NAN,
BUILT_IN_NANF,
BUILT_IN_NANL,
BUILT_IN_NAND32,
BUILT_IN_NAND64,
BUILT_IN_NAND128,
BUILT_IN_NANS,
BUILT_IN_NANSF,
BUILT_IN_NANSL,
BUILT_IN_NEARBYINT,
BUILT_IN_NEARBYINTF,
BUILT_IN_NEARBYINTL,
BUILT_IN_NEXTAFTER,
BUILT_IN_NEXTAFTERF,
BUILT_IN_NEXTAFTERL,
BUILT_IN_NEXTTOWARD,
BUILT_IN_NEXTTOWARDF,
BUILT_IN_NEXTTOWARDL,
BUILT_IN_POW,
BUILT_IN_POW10,
BUILT_IN_POW10F,
BUILT_IN_POW10L,
BUILT_IN_POWF,
BUILT_IN_POWI,
BUILT_IN_POWIF,
BUILT_IN_POWIL,
BUILT_IN_POWL,
BUILT_IN_REMAINDER,
BUILT_IN_REMAINDERF,
BUILT_IN_REMAINDERL,
BUILT_IN_REMQUO,
BUILT_IN_REMQUOF,
BUILT_IN_REMQUOL,
BUILT_IN_RINT,
BUILT_IN_RINTF,
BUILT_IN_RINTL,
BUILT_IN_ROUND,
BUILT_IN_ROUNDF,
BUILT_IN_ROUNDL,
BUILT_IN_SCALB,
BUILT_IN_SCALBF,
BUILT_IN_SCALBL,
BUILT_IN_SCALBLN,
BUILT_IN_SCALBLNF,
BUILT_IN_SCALBLNL,
BUILT_IN_SCALBN,
BUILT_IN_SCALBNF,
BUILT_IN_SCALBNL,
BUILT_IN_SIGNBIT,
BUILT_IN_SIGNBITF,
BUILT_IN_SIGNBITL,
BUILT_IN_SIGNBITD32,
BUILT_IN_SIGNBITD64,
BUILT_IN_SIGNBITD128,
BUILT_IN_SIGNIFICAND,
BUILT_IN_SIGNIFICANDF,
BUILT_IN_SIGNIFICANDL,
BUILT_IN_SIN,
BUILT_IN_SINCOS,
BUILT_IN_SINCOSF,
BUILT_IN_SINCOSL,
BUILT_IN_SINF,
BUILT_IN_SINH,
BUILT_IN_SINHF,
BUILT_IN_SINHL,
BUILT_IN_SINL,
BUILT_IN_SQRT,
BUILT_IN_SQRTF,
BUILT_IN_SQRTL,
BUILT_IN_TAN,
BUILT_IN_TANF,
BUILT_IN_TANH,
BUILT_IN_TANHF,
BUILT_IN_TANHL,
BUILT_IN_TANL,
BUILT_IN_TGAMMA,
BUILT_IN_TGAMMAF,
BUILT_IN_TGAMMAL,
BUILT_IN_TRUNC,
BUILT_IN_TRUNCF,
BUILT_IN_TRUNCL,
BUILT_IN_Y0,
BUILT_IN_Y0F,
BUILT_IN_Y0L,
BUILT_IN_Y1,
BUILT_IN_Y1F,
BUILT_IN_Y1L,
BUILT_IN_YN,
BUILT_IN_YNF,
BUILT_IN_YNL,


BUILT_IN_CABS,
BUILT_IN_CABSF,
BUILT_IN_CABSL,
BUILT_IN_CACOS,
BUILT_IN_CACOSF,
BUILT_IN_CACOSH,
BUILT_IN_CACOSHF,
BUILT_IN_CACOSHL,
BUILT_IN_CACOSL,
BUILT_IN_CARG,
BUILT_IN_CARGF,
BUILT_IN_CARGL,
BUILT_IN_CASIN,
BUILT_IN_CASINF,
BUILT_IN_CASINH,
BUILT_IN_CASINHF,
BUILT_IN_CASINHL,
BUILT_IN_CASINL,
BUILT_IN_CATAN,
BUILT_IN_CATANF,
BUILT_IN_CATANH,
BUILT_IN_CATANHF,
BUILT_IN_CATANHL,
BUILT_IN_CATANL,
BUILT_IN_CCOS,
BUILT_IN_CCOSF,
BUILT_IN_CCOSH,
BUILT_IN_CCOSHF,
BUILT_IN_CCOSHL,
BUILT_IN_CCOSL,
BUILT_IN_CEXP,
BUILT_IN_CEXPF,
BUILT_IN_CEXPL,
BUILT_IN_CEXPI,
BUILT_IN_CEXPIF,
BUILT_IN_CEXPIL,
BUILT_IN_CIMAG,
BUILT_IN_CIMAGF,
BUILT_IN_CIMAGL,
BUILT_IN_CLOG,
BUILT_IN_CLOGF,
BUILT_IN_CLOGL,
BUILT_IN_CLOG10,
BUILT_IN_CLOG10F,
BUILT_IN_CLOG10L,
BUILT_IN_CONJ,
BUILT_IN_CONJF,
BUILT_IN_CONJL,
BUILT_IN_CPOW,
BUILT_IN_CPOWF,
BUILT_IN_CPOWL,
BUILT_IN_CPROJ,
BUILT_IN_CPROJF,
BUILT_IN_CPROJL,
BUILT_IN_CREAL,
BUILT_IN_CREALF,
BUILT_IN_CREALL,
BUILT_IN_CSIN,
BUILT_IN_CSINF,
BUILT_IN_CSINH,
BUILT_IN_CSINHF,
BUILT_IN_CSINHL,
BUILT_IN_CSINL,
BUILT_IN_CSQRT,
BUILT_IN_CSQRTF,
BUILT_IN_CSQRTL,
BUILT_IN_CTAN,
BUILT_IN_CTANF,
BUILT_IN_CTANH,
BUILT_IN_CTANHF,
BUILT_IN_CTANHL,
BUILT_IN_CTANL,




BUILT_IN_BCMP,
BUILT_IN_BCOPY,
BUILT_IN_BZERO,
BUILT_IN_INDEX,
BUILT_IN_MEMCHR,
BUILT_IN_MEMCMP,
BUILT_IN_MEMCPY,
BUILT_IN_MEMMOVE,
BUILT_IN_MEMPCPY,
BUILT_IN_MEMSET,
BUILT_IN_RINDEX,
BUILT_IN_STPCPY,
BUILT_IN_STPNCPY,
BUILT_IN_STRCASECMP,
BUILT_IN_STRCAT,
BUILT_IN_STRCHR,
BUILT_IN_STRCMP,
BUILT_IN_STRCPY,
BUILT_IN_STRCSPN,
BUILT_IN_STRDUP,
BUILT_IN_STRNDUP,
BUILT_IN_STRLEN,
BUILT_IN_STRNCASECMP,
BUILT_IN_STRNCAT,
BUILT_IN_STRNCMP,
BUILT_IN_STRNCPY,
BUILT_IN_STRPBRK,
BUILT_IN_STRRCHR,
BUILT_IN_STRSPN,
BUILT_IN_STRSTR,


BUILT_IN_FPRINTF,
BUILT_IN_FPRINTF_UNLOCKED,
BUILT_IN_PUTC,
BUILT_IN_PUTC_UNLOCKED,
BUILT_IN_FPUTC,
BUILT_IN_FPUTC_UNLOCKED,
BUILT_IN_FPUTS,
BUILT_IN_FPUTS_UNLOCKED,
BUILT_IN_FSCANF,
BUILT_IN_FWRITE,
BUILT_IN_FWRITE_UNLOCKED,
BUILT_IN_PRINTF,
BUILT_IN_PRINTF_UNLOCKED,
BUILT_IN_PUTCHAR,
BUILT_IN_PUTCHAR_UNLOCKED,
BUILT_IN_PUTS,
BUILT_IN_PUTS_UNLOCKED,
BUILT_IN_SCANF,
BUILT_IN_SNPRINTF,
BUILT_IN_SPRINTF,
BUILT_IN_SSCANF,
BUILT_IN_VFPRINTF,
BUILT_IN_VFSCANF,
BUILT_IN_VPRINTF,
BUILT_IN_VSCANF,
BUILT_IN_VSNPRINTF,
BUILT_IN_VSPRINTF,
BUILT_IN_VSSCANF,


BUILT_IN_ISALNUM,
BUILT_IN_ISALPHA,
BUILT_IN_ISASCII,
BUILT_IN_ISBLANK,
BUILT_IN_ISCNTRL,
BUILT_IN_ISDIGIT,
BUILT_IN_ISGRAPH,
BUILT_IN_ISLOWER,
BUILT_IN_ISPRINT,
BUILT_IN_ISPUNCT,
BUILT_IN_ISSPACE,
BUILT_IN_ISUPPER,
BUILT_IN_ISXDIGIT,
BUILT_IN_TOASCII,
BUILT_IN_TOLOWER,
BUILT_IN_TOUPPER,


BUILT_IN_ISWALNUM,
BUILT_IN_ISWALPHA,
BUILT_IN_ISWBLANK,
BUILT_IN_ISWCNTRL,
BUILT_IN_ISWDIGIT,
BUILT_IN_ISWGRAPH,
BUILT_IN_ISWLOWER,
BUILT_IN_ISWPRINT,
BUILT_IN_ISWPUNCT,
BUILT_IN_ISWSPACE,
BUILT_IN_ISWUPPER,
BUILT_IN_ISWXDIGIT,
BUILT_IN_TOWLOWER,
BUILT_IN_TOWUPPER,


BUILT_IN_ABORT,
BUILT_IN_ABS,
BUILT_IN_AGGREGATE_INCOMING_ADDRESS,
BUILT_IN_ALLOCA,
BUILT_IN_APPLY,
BUILT_IN_APPLY_ARGS,
BUILT_IN_BSWAP16,
BUILT_IN_BSWAP32,
BUILT_IN_BSWAP64,
BUILT_IN_CLEAR_CACHE,

BUILT_IN_CALLOC,
BUILT_IN_CLASSIFY_TYPE,
BUILT_IN_CLZ,
BUILT_IN_CLZIMAX,
BUILT_IN_CLZL,
BUILT_IN_CLZLL,
BUILT_IN_CONSTANT_P,
BUILT_IN_CTZ,
BUILT_IN_CTZIMAX,
BUILT_IN_CTZL,
BUILT_IN_CTZLL,
BUILT_IN_CLRSB,
BUILT_IN_CLRSBIMAX,
BUILT_IN_CLRSBL,
BUILT_IN_CLRSBLL,
BUILT_IN_DCGETTEXT,
BUILT_IN_DGETTEXT,
BUILT_IN_DWARF_CFA,
BUILT_IN_DWARF_SP_COLUMN,
BUILT_IN_EH_RETURN,
BUILT_IN_EH_RETURN_DATA_REGNO,
BUILT_IN_EXECL,
BUILT_IN_EXECLP,
BUILT_IN_EXECLE,
BUILT_IN_EXECV,
BUILT_IN_EXECVP,
BUILT_IN_EXECVE,
BUILT_IN_EXIT,
BUILT_IN_EXPECT,
BUILT_IN_ASSUME_ALIGNED,
BUILT_IN_EXTEND_POINTER,
BUILT_IN_EXTRACT_RETURN_ADDR,
BUILT_IN_FFS,
BUILT_IN_FFSIMAX,
BUILT_IN_FFSL,
BUILT_IN_FFSLL,
BUILT_IN_FORK,
BUILT_IN_FRAME_ADDRESS,

BUILT_IN_FREE,
BUILT_IN_FROB_RETURN_ADDR,
BUILT_IN_GETTEXT,
BUILT_IN_IMAXABS,
BUILT_IN_INIT_DWARF_REG_SIZES,
BUILT_IN_FINITE,
BUILT_IN_FINITEF,
BUILT_IN_FINITEL,
BUILT_IN_FINITED32,
BUILT_IN_FINITED64,
BUILT_IN_FINITED128,
BUILT_IN_FPCLASSIFY,
BUILT_IN_ISFINITE,
BUILT_IN_ISINF_SIGN,
BUILT_IN_ISINF,
BUILT_IN_ISINFF,
BUILT_IN_ISINFL,
BUILT_IN_ISINFD32,
BUILT_IN_ISINFD64,
BUILT_IN_ISINFD128,
BUILT_IN_ISNAN,
BUILT_IN_ISNANF,
BUILT_IN_ISNANL,
BUILT_IN_ISNAND32,
BUILT_IN_ISNAND64,
BUILT_IN_ISNAND128,
BUILT_IN_ISNORMAL,
BUILT_IN_ISGREATER,
BUILT_IN_ISGREATEREQUAL,
BUILT_IN_ISLESS,
BUILT_IN_ISLESSEQUAL,
BUILT_IN_ISLESSGREATER,
BUILT_IN_ISUNORDERED,
BUILT_IN_LABS,
BUILT_IN_LLABS,
BUILT_IN_LONGJMP,

BUILT_IN_MALLOC,
BUILT_IN_NEXT_ARG,
BUILT_IN_PARITY,
BUILT_IN_PARITYIMAX,
BUILT_IN_PARITYL,
BUILT_IN_PARITYLL,
BUILT_IN_POPCOUNT,
BUILT_IN_POPCOUNTIMAX,
BUILT_IN_POPCOUNTL,
BUILT_IN_POPCOUNTLL,
BUILT_IN_POSIX_MEMALIGN,
BUILT_IN_PREFETCH,
BUILT_IN_REALLOC,
BUILT_IN_RETURN,
BUILT_IN_RETURN_ADDRESS,
BUILT_IN_SAVEREGS,
BUILT_IN_SETJMP,
BUILT_IN_STRFMON,
BUILT_IN_STRFTIME,
BUILT_IN_TRAP,
BUILT_IN_UNREACHABLE,
BUILT_IN_UNWIND_INIT,
BUILT_IN_UPDATE_SETJMP_BUF,
BUILT_IN_VA_COPY,
BUILT_IN_VA_END,
BUILT_IN_VA_START,
BUILT_IN_VA_ARG_PACK,
BUILT_IN_VA_ARG_PACK_LEN,
BUILT_IN__EXIT,
BUILT_IN__EXIT2,


BUILT_IN_INIT_TRAMPOLINE,
BUILT_IN_INIT_HEAP_TRAMPOLINE,
BUILT_IN_ADJUST_TRAMPOLINE,
BUILT_IN_NONLOCAL_GOTO,


BUILT_IN_SETJMP_SETUP,
BUILT_IN_SETJMP_RECEIVER,


BUILT_IN_STACK_SAVE,
BUILT_IN_STACK_RESTORE,
BUILT_IN_ALLOCA_WITH_ALIGN,


BUILT_IN_OBJECT_SIZE,
BUILT_IN_MEMCPY_CHK,
BUILT_IN_MEMMOVE_CHK,
BUILT_IN_MEMPCPY_CHK,
BUILT_IN_MEMSET_CHK,
BUILT_IN_STPCPY_CHK,
BUILT_IN_STPNCPY_CHK,
BUILT_IN_STRCAT_CHK,
BUILT_IN_STRCPY_CHK,
BUILT_IN_STRNCAT_CHK,
BUILT_IN_STRNCPY_CHK,
BUILT_IN_SNPRINTF_CHK,
BUILT_IN_SPRINTF_CHK,
BUILT_IN_VSNPRINTF_CHK,
BUILT_IN_VSPRINTF_CHK,
BUILT_IN_FPRINTF_CHK,
BUILT_IN_PRINTF_CHK,
BUILT_IN_VFPRINTF_CHK,
BUILT_IN_VPRINTF_CHK,


BUILT_IN_PROFILE_FUNC_ENTER,

BUILT_IN_PROFILE_FUNC_EXIT,



BUILT_IN_THREAD_POINTER,




BUILT_IN_SET_THREAD_POINTER,





BUILT_IN_EMUTLS_GET_ADDRESS,




BUILT_IN_EMUTLS_REGISTER_COMMON,






BUILT_IN_UNWIND_RESUME,
BUILT_IN_CXA_END_CLEANUP,
BUILT_IN_EH_POINTER,
BUILT_IN_EH_FILTER,
BUILT_IN_EH_COPY_VALUES,


BUILT_IN_FILE,
BUILT_IN_FUNCTION,
BUILT_IN_LINE,


// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/sync-builtins.def" 1
// # 31 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/sync-builtins.def"
BUILT_IN_SYNC_FETCH_AND_ADD_N,

BUILT_IN_SYNC_FETCH_AND_ADD_1,

BUILT_IN_SYNC_FETCH_AND_ADD_2,

BUILT_IN_SYNC_FETCH_AND_ADD_4,

BUILT_IN_SYNC_FETCH_AND_ADD_8,

BUILT_IN_SYNC_FETCH_AND_ADD_16,


BUILT_IN_SYNC_FETCH_AND_SUB_N,

BUILT_IN_SYNC_FETCH_AND_SUB_1,

BUILT_IN_SYNC_FETCH_AND_SUB_2,

BUILT_IN_SYNC_FETCH_AND_SUB_4,

BUILT_IN_SYNC_FETCH_AND_SUB_8,

BUILT_IN_SYNC_FETCH_AND_SUB_16,


BUILT_IN_SYNC_FETCH_AND_OR_N,

BUILT_IN_SYNC_FETCH_AND_OR_1,

BUILT_IN_SYNC_FETCH_AND_OR_2,

BUILT_IN_SYNC_FETCH_AND_OR_4,

BUILT_IN_SYNC_FETCH_AND_OR_8,

BUILT_IN_SYNC_FETCH_AND_OR_16,


BUILT_IN_SYNC_FETCH_AND_AND_N,

BUILT_IN_SYNC_FETCH_AND_AND_1,

BUILT_IN_SYNC_FETCH_AND_AND_2,

BUILT_IN_SYNC_FETCH_AND_AND_4,

BUILT_IN_SYNC_FETCH_AND_AND_8,

BUILT_IN_SYNC_FETCH_AND_AND_16,


BUILT_IN_SYNC_FETCH_AND_XOR_N,

BUILT_IN_SYNC_FETCH_AND_XOR_1,

BUILT_IN_SYNC_FETCH_AND_XOR_2,

BUILT_IN_SYNC_FETCH_AND_XOR_4,

BUILT_IN_SYNC_FETCH_AND_XOR_8,

BUILT_IN_SYNC_FETCH_AND_XOR_16,


BUILT_IN_SYNC_FETCH_AND_NAND_N,

BUILT_IN_SYNC_FETCH_AND_NAND_1,

BUILT_IN_SYNC_FETCH_AND_NAND_2,

BUILT_IN_SYNC_FETCH_AND_NAND_4,

BUILT_IN_SYNC_FETCH_AND_NAND_8,

BUILT_IN_SYNC_FETCH_AND_NAND_16,


BUILT_IN_SYNC_ADD_AND_FETCH_N,

BUILT_IN_SYNC_ADD_AND_FETCH_1,

BUILT_IN_SYNC_ADD_AND_FETCH_2,

BUILT_IN_SYNC_ADD_AND_FETCH_4,

BUILT_IN_SYNC_ADD_AND_FETCH_8,

BUILT_IN_SYNC_ADD_AND_FETCH_16,


BUILT_IN_SYNC_SUB_AND_FETCH_N,

BUILT_IN_SYNC_SUB_AND_FETCH_1,

BUILT_IN_SYNC_SUB_AND_FETCH_2,

BUILT_IN_SYNC_SUB_AND_FETCH_4,

BUILT_IN_SYNC_SUB_AND_FETCH_8,

BUILT_IN_SYNC_SUB_AND_FETCH_16,


BUILT_IN_SYNC_OR_AND_FETCH_N,

BUILT_IN_SYNC_OR_AND_FETCH_1,

BUILT_IN_SYNC_OR_AND_FETCH_2,

BUILT_IN_SYNC_OR_AND_FETCH_4,

BUILT_IN_SYNC_OR_AND_FETCH_8,

BUILT_IN_SYNC_OR_AND_FETCH_16,


BUILT_IN_SYNC_AND_AND_FETCH_N,

BUILT_IN_SYNC_AND_AND_FETCH_1,

BUILT_IN_SYNC_AND_AND_FETCH_2,

BUILT_IN_SYNC_AND_AND_FETCH_4,

BUILT_IN_SYNC_AND_AND_FETCH_8,

BUILT_IN_SYNC_AND_AND_FETCH_16,


BUILT_IN_SYNC_XOR_AND_FETCH_N,

BUILT_IN_SYNC_XOR_AND_FETCH_1,

BUILT_IN_SYNC_XOR_AND_FETCH_2,

BUILT_IN_SYNC_XOR_AND_FETCH_4,

BUILT_IN_SYNC_XOR_AND_FETCH_8,

BUILT_IN_SYNC_XOR_AND_FETCH_16,


BUILT_IN_SYNC_NAND_AND_FETCH_N,

BUILT_IN_SYNC_NAND_AND_FETCH_1,

BUILT_IN_SYNC_NAND_AND_FETCH_2,

BUILT_IN_SYNC_NAND_AND_FETCH_4,

BUILT_IN_SYNC_NAND_AND_FETCH_8,

BUILT_IN_SYNC_NAND_AND_FETCH_16,


BUILT_IN_SYNC_BOOL_COMPARE_AND_SWAP_N,


BUILT_IN_SYNC_BOOL_COMPARE_AND_SWAP_1,


BUILT_IN_SYNC_BOOL_COMPARE_AND_SWAP_2,


BUILT_IN_SYNC_BOOL_COMPARE_AND_SWAP_4,


BUILT_IN_SYNC_BOOL_COMPARE_AND_SWAP_8,


BUILT_IN_SYNC_BOOL_COMPARE_AND_SWAP_16,



BUILT_IN_SYNC_VAL_COMPARE_AND_SWAP_N,


BUILT_IN_SYNC_VAL_COMPARE_AND_SWAP_1,


BUILT_IN_SYNC_VAL_COMPARE_AND_SWAP_2,


BUILT_IN_SYNC_VAL_COMPARE_AND_SWAP_4,


BUILT_IN_SYNC_VAL_COMPARE_AND_SWAP_8,


BUILT_IN_SYNC_VAL_COMPARE_AND_SWAP_16,



BUILT_IN_SYNC_LOCK_TEST_AND_SET_N,


BUILT_IN_SYNC_LOCK_TEST_AND_SET_1,


BUILT_IN_SYNC_LOCK_TEST_AND_SET_2,


BUILT_IN_SYNC_LOCK_TEST_AND_SET_4,


BUILT_IN_SYNC_LOCK_TEST_AND_SET_8,


BUILT_IN_SYNC_LOCK_TEST_AND_SET_16,



BUILT_IN_SYNC_LOCK_RELEASE_N,

BUILT_IN_SYNC_LOCK_RELEASE_1,

BUILT_IN_SYNC_LOCK_RELEASE_2,

BUILT_IN_SYNC_LOCK_RELEASE_4,

BUILT_IN_SYNC_LOCK_RELEASE_8,

BUILT_IN_SYNC_LOCK_RELEASE_16,


BUILT_IN_SYNC_SYNCHRONIZE,




BUILT_IN_ATOMIC_TEST_AND_SET,


BUILT_IN_ATOMIC_CLEAR,


BUILT_IN_ATOMIC_EXCHANGE,


BUILT_IN_ATOMIC_EXCHANGE_N,


BUILT_IN_ATOMIC_EXCHANGE_1,


BUILT_IN_ATOMIC_EXCHANGE_2,


BUILT_IN_ATOMIC_EXCHANGE_4,


BUILT_IN_ATOMIC_EXCHANGE_8,


BUILT_IN_ATOMIC_EXCHANGE_16,



BUILT_IN_ATOMIC_LOAD,



BUILT_IN_ATOMIC_LOAD_N,


BUILT_IN_ATOMIC_LOAD_1,


BUILT_IN_ATOMIC_LOAD_2,


BUILT_IN_ATOMIC_LOAD_4,


BUILT_IN_ATOMIC_LOAD_8,


BUILT_IN_ATOMIC_LOAD_16,



BUILT_IN_ATOMIC_COMPARE_EXCHANGE,



BUILT_IN_ATOMIC_COMPARE_EXCHANGE_N,


BUILT_IN_ATOMIC_COMPARE_EXCHANGE_1,



BUILT_IN_ATOMIC_COMPARE_EXCHANGE_2,



BUILT_IN_ATOMIC_COMPARE_EXCHANGE_4,



BUILT_IN_ATOMIC_COMPARE_EXCHANGE_8,



BUILT_IN_ATOMIC_COMPARE_EXCHANGE_16,




BUILT_IN_ATOMIC_STORE,


BUILT_IN_ATOMIC_STORE_N,


BUILT_IN_ATOMIC_STORE_1,


BUILT_IN_ATOMIC_STORE_2,


BUILT_IN_ATOMIC_STORE_4,


BUILT_IN_ATOMIC_STORE_8,


BUILT_IN_ATOMIC_STORE_16,



BUILT_IN_ATOMIC_ADD_FETCH_N,


BUILT_IN_ATOMIC_ADD_FETCH_1,


BUILT_IN_ATOMIC_ADD_FETCH_2,


BUILT_IN_ATOMIC_ADD_FETCH_4,


BUILT_IN_ATOMIC_ADD_FETCH_8,


BUILT_IN_ATOMIC_ADD_FETCH_16,



BUILT_IN_ATOMIC_SUB_FETCH_N,


BUILT_IN_ATOMIC_SUB_FETCH_1,


BUILT_IN_ATOMIC_SUB_FETCH_2,


BUILT_IN_ATOMIC_SUB_FETCH_4,


BUILT_IN_ATOMIC_SUB_FETCH_8,


BUILT_IN_ATOMIC_SUB_FETCH_16,



BUILT_IN_ATOMIC_AND_FETCH_N,


BUILT_IN_ATOMIC_AND_FETCH_1,


BUILT_IN_ATOMIC_AND_FETCH_2,


BUILT_IN_ATOMIC_AND_FETCH_4,


BUILT_IN_ATOMIC_AND_FETCH_8,


BUILT_IN_ATOMIC_AND_FETCH_16,



BUILT_IN_ATOMIC_NAND_FETCH_N,


BUILT_IN_ATOMIC_NAND_FETCH_1,


BUILT_IN_ATOMIC_NAND_FETCH_2,


BUILT_IN_ATOMIC_NAND_FETCH_4,


BUILT_IN_ATOMIC_NAND_FETCH_8,


BUILT_IN_ATOMIC_NAND_FETCH_16,



BUILT_IN_ATOMIC_XOR_FETCH_N,


BUILT_IN_ATOMIC_XOR_FETCH_1,


BUILT_IN_ATOMIC_XOR_FETCH_2,


BUILT_IN_ATOMIC_XOR_FETCH_4,


BUILT_IN_ATOMIC_XOR_FETCH_8,


BUILT_IN_ATOMIC_XOR_FETCH_16,



BUILT_IN_ATOMIC_OR_FETCH_N,


BUILT_IN_ATOMIC_OR_FETCH_1,


BUILT_IN_ATOMIC_OR_FETCH_2,


BUILT_IN_ATOMIC_OR_FETCH_4,


BUILT_IN_ATOMIC_OR_FETCH_8,


BUILT_IN_ATOMIC_OR_FETCH_16,



BUILT_IN_ATOMIC_FETCH_ADD_N,


BUILT_IN_ATOMIC_FETCH_ADD_1,


BUILT_IN_ATOMIC_FETCH_ADD_2,


BUILT_IN_ATOMIC_FETCH_ADD_4,


BUILT_IN_ATOMIC_FETCH_ADD_8,


BUILT_IN_ATOMIC_FETCH_ADD_16,



BUILT_IN_ATOMIC_FETCH_SUB_N,


BUILT_IN_ATOMIC_FETCH_SUB_1,


BUILT_IN_ATOMIC_FETCH_SUB_2,


BUILT_IN_ATOMIC_FETCH_SUB_4,


BUILT_IN_ATOMIC_FETCH_SUB_8,


BUILT_IN_ATOMIC_FETCH_SUB_16,



BUILT_IN_ATOMIC_FETCH_AND_N,


BUILT_IN_ATOMIC_FETCH_AND_1,


BUILT_IN_ATOMIC_FETCH_AND_2,


BUILT_IN_ATOMIC_FETCH_AND_4,


BUILT_IN_ATOMIC_FETCH_AND_8,


BUILT_IN_ATOMIC_FETCH_AND_16,



BUILT_IN_ATOMIC_FETCH_NAND_N,


BUILT_IN_ATOMIC_FETCH_NAND_1,


BUILT_IN_ATOMIC_FETCH_NAND_2,


BUILT_IN_ATOMIC_FETCH_NAND_4,


BUILT_IN_ATOMIC_FETCH_NAND_8,


BUILT_IN_ATOMIC_FETCH_NAND_16,



BUILT_IN_ATOMIC_FETCH_XOR_N,


BUILT_IN_ATOMIC_FETCH_XOR_1,


BUILT_IN_ATOMIC_FETCH_XOR_2,


BUILT_IN_ATOMIC_FETCH_XOR_4,


BUILT_IN_ATOMIC_FETCH_XOR_8,


BUILT_IN_ATOMIC_FETCH_XOR_16,




BUILT_IN_ATOMIC_FETCH_OR_N,


BUILT_IN_ATOMIC_FETCH_OR_1,


BUILT_IN_ATOMIC_FETCH_OR_2,


BUILT_IN_ATOMIC_FETCH_OR_4,


BUILT_IN_ATOMIC_FETCH_OR_8,


BUILT_IN_ATOMIC_FETCH_OR_16,



BUILT_IN_ATOMIC_ALWAYS_LOCK_FREE,



BUILT_IN_ATOMIC_IS_LOCK_FREE,




BUILT_IN_ATOMIC_THREAD_FENCE,



BUILT_IN_ATOMIC_SIGNAL_FENCE,






BUILT_IN_ATOMIC_FERAISEEXCEPT,
// # 858 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 2


// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/omp-builtins.def" 1
// # 27 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/omp-builtins.def"
BUILT_IN_OMP_GET_THREAD_NUM,

BUILT_IN_OMP_GET_NUM_THREADS,

BUILT_IN_OMP_GET_TEAM_NUM,

BUILT_IN_OMP_GET_NUM_TEAMS,


BUILT_IN_GOMP_ATOMIC_START,

BUILT_IN_GOMP_ATOMIC_END,

BUILT_IN_GOMP_BARRIER,

BUILT_IN_GOMP_BARRIER_CANCEL,

BUILT_IN_GOMP_TASKWAIT,

BUILT_IN_GOMP_TASKYIELD,

BUILT_IN_GOMP_TASKGROUP_START,

BUILT_IN_GOMP_TASKGROUP_END,

BUILT_IN_GOMP_CANCEL,

BUILT_IN_GOMP_CANCELLATION_POINT,

BUILT_IN_GOMP_CRITICAL_START,

BUILT_IN_GOMP_CRITICAL_END,

BUILT_IN_GOMP_CRITICAL_NAME_START,


BUILT_IN_GOMP_CRITICAL_NAME_END,





BUILT_IN_GOMP_LOOP_STATIC_START,



BUILT_IN_GOMP_LOOP_DYNAMIC_START,



BUILT_IN_GOMP_LOOP_GUIDED_START,



BUILT_IN_GOMP_LOOP_RUNTIME_START,



BUILT_IN_GOMP_LOOP_ORDERED_STATIC_START,



BUILT_IN_GOMP_LOOP_ORDERED_DYNAMIC_START,



BUILT_IN_GOMP_LOOP_ORDERED_GUIDED_START,



BUILT_IN_GOMP_LOOP_ORDERED_RUNTIME_START,



BUILT_IN_GOMP_LOOP_STATIC_NEXT,

BUILT_IN_GOMP_LOOP_DYNAMIC_NEXT,

BUILT_IN_GOMP_LOOP_GUIDED_NEXT,

BUILT_IN_GOMP_LOOP_RUNTIME_NEXT,

BUILT_IN_GOMP_LOOP_ORDERED_STATIC_NEXT,


BUILT_IN_GOMP_LOOP_ORDERED_DYNAMIC_NEXT,


BUILT_IN_GOMP_LOOP_ORDERED_GUIDED_NEXT,


BUILT_IN_GOMP_LOOP_ORDERED_RUNTIME_NEXT,


BUILT_IN_GOMP_LOOP_ULL_STATIC_START,



BUILT_IN_GOMP_LOOP_ULL_DYNAMIC_START,



BUILT_IN_GOMP_LOOP_ULL_GUIDED_START,



BUILT_IN_GOMP_LOOP_ULL_RUNTIME_START,



BUILT_IN_GOMP_LOOP_ULL_ORDERED_STATIC_START,



BUILT_IN_GOMP_LOOP_ULL_ORDERED_DYNAMIC_START,



BUILT_IN_GOMP_LOOP_ULL_ORDERED_GUIDED_START,



BUILT_IN_GOMP_LOOP_ULL_ORDERED_RUNTIME_START,



BUILT_IN_GOMP_LOOP_ULL_STATIC_NEXT,

BUILT_IN_GOMP_LOOP_ULL_DYNAMIC_NEXT,

BUILT_IN_GOMP_LOOP_ULL_GUIDED_NEXT,

BUILT_IN_GOMP_LOOP_ULL_RUNTIME_NEXT,

BUILT_IN_GOMP_LOOP_ULL_ORDERED_STATIC_NEXT,


BUILT_IN_GOMP_LOOP_ULL_ORDERED_DYNAMIC_NEXT,


BUILT_IN_GOMP_LOOP_ULL_ORDERED_GUIDED_NEXT,


BUILT_IN_GOMP_LOOP_ULL_ORDERED_RUNTIME_NEXT,





BUILT_IN_GOMP_PARALLEL_LOOP_STATIC,



BUILT_IN_GOMP_PARALLEL_LOOP_DYNAMIC,



BUILT_IN_GOMP_PARALLEL_LOOP_GUIDED,



BUILT_IN_GOMP_PARALLEL_LOOP_RUNTIME,



BUILT_IN_GOMP_LOOP_END,

BUILT_IN_GOMP_LOOP_END_CANCEL,

BUILT_IN_GOMP_LOOP_END_NOWAIT,

BUILT_IN_GOMP_ORDERED_START,

BUILT_IN_GOMP_ORDERED_END,

BUILT_IN_GOMP_PARALLEL,

BUILT_IN_GOMP_TASK,


BUILT_IN_GOMP_SECTIONS_START,

BUILT_IN_GOMP_SECTIONS_NEXT,

BUILT_IN_GOMP_PARALLEL_SECTIONS,


BUILT_IN_GOMP_SECTIONS_END,

BUILT_IN_GOMP_SECTIONS_END_CANCEL,


BUILT_IN_GOMP_SECTIONS_END_NOWAIT,


BUILT_IN_GOMP_SINGLE_START,

BUILT_IN_GOMP_SINGLE_COPY_START,

BUILT_IN_GOMP_SINGLE_COPY_END,

BUILT_IN_GOMP_TARGET,


BUILT_IN_GOMP_TARGET_DATA,

BUILT_IN_GOMP_TARGET_END_DATA,

BUILT_IN_GOMP_TARGET_UPDATE,

BUILT_IN_GOMP_TEAMS,
// # 861 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 2


// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cilk-builtins.def" 1
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cilk-builtins.def"
BUILT_IN_CILK_ENTER_FRAME,
BUILT_IN_CILK_ENTER_FRAME_FAST,

BUILT_IN_CILK_DETACH,
BUILT_IN_CILK_RETHROW,
BUILT_IN_CILK_SYNCHED,
BUILT_IN_CILK_SYNC,
BUILT_IN_CILK_LEAVE_FRAME,
BUILT_IN_CILK_POP_FRAME,
BUILT_IN_CILK_SAVE_FP,
// # 864 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 2


// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gtm-builtins.def" 1
BUILT_IN_TM_START,


BUILT_IN_TM_COMMIT,

BUILT_IN_TM_COMMIT_EH,

BUILT_IN_TM_ABORT,

BUILT_IN_TM_IRREVOCABLE,


BUILT_IN_TM_MEMCPY,

BUILT_IN_TM_MEMMOVE,

BUILT_IN_TM_MEMSET,


BUILT_IN_TM_GETTMCLONE_IRR,

BUILT_IN_TM_GETTMCLONE_SAFE,



BUILT_IN_TM_MALLOC,

BUILT_IN_TM_CALLOC,

BUILT_IN_TM_FREE,



BUILT_IN_TM_LOG_1,

BUILT_IN_TM_LOG_2,

BUILT_IN_TM_LOG_4,

BUILT_IN_TM_LOG_8,

BUILT_IN_TM_LOG_FLOAT,

BUILT_IN_TM_LOG_DOUBLE,

BUILT_IN_TM_LOG_LDOUBLE,

BUILT_IN_TM_LOG,



BUILT_IN_TM_LOG_M64,
BUILT_IN_TM_LOG_M128,
BUILT_IN_TM_LOG_M256,
// # 63 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gtm-builtins.def"
BUILT_IN_TM_STORE_1,

BUILT_IN_TM_STORE_WAR_1,

BUILT_IN_TM_STORE_WAW_1,


BUILT_IN_TM_STORE_2,

BUILT_IN_TM_STORE_WAR_2,

BUILT_IN_TM_STORE_WAW_2,


BUILT_IN_TM_STORE_4,

BUILT_IN_TM_STORE_WAR_4,

BUILT_IN_TM_STORE_WAW_4,


BUILT_IN_TM_STORE_8,

BUILT_IN_TM_STORE_WAR_8,

BUILT_IN_TM_STORE_WAW_8,


BUILT_IN_TM_STORE_FLOAT,

BUILT_IN_TM_STORE_WAR_FLOAT,

BUILT_IN_TM_STORE_WAW_FLOAT,


BUILT_IN_TM_STORE_DOUBLE,

BUILT_IN_TM_STORE_WAR_DOUBLE,

BUILT_IN_TM_STORE_WAW_DOUBLE,



BUILT_IN_TM_STORE_M64,
BUILT_IN_TM_STORE_WAR_M64,
BUILT_IN_TM_STORE_WAW_M64,
BUILT_IN_TM_STORE_M128,
BUILT_IN_TM_STORE_WAR_M128,
BUILT_IN_TM_STORE_WAW_M128,
BUILT_IN_TM_STORE_M256,
BUILT_IN_TM_STORE_WAR_M256,
BUILT_IN_TM_STORE_WAW_M256,

BUILT_IN_TM_STORE_LDOUBLE,

BUILT_IN_TM_STORE_WAR_LDOUBLE,

BUILT_IN_TM_STORE_WAW_LDOUBLE,
// # 129 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/gtm-builtins.def"
BUILT_IN_TM_LOAD_1,

BUILT_IN_TM_LOAD_RAR_1,

BUILT_IN_TM_LOAD_RAW_1,

BUILT_IN_TM_LOAD_RFW_1,


BUILT_IN_TM_LOAD_2,

BUILT_IN_TM_LOAD_RAR_2,

BUILT_IN_TM_LOAD_RAW_2,

BUILT_IN_TM_LOAD_RFW_2,


BUILT_IN_TM_LOAD_4,

BUILT_IN_TM_LOAD_RAR_4,

BUILT_IN_TM_LOAD_RAW_4,

BUILT_IN_TM_LOAD_RFW_4,


BUILT_IN_TM_LOAD_8,

BUILT_IN_TM_LOAD_RAR_8,

BUILT_IN_TM_LOAD_RAW_8,

BUILT_IN_TM_LOAD_RFW_8,


BUILT_IN_TM_LOAD_FLOAT,

BUILT_IN_TM_LOAD_RAR_FLOAT,

BUILT_IN_TM_LOAD_RAW_FLOAT,

BUILT_IN_TM_LOAD_RFW_FLOAT,


BUILT_IN_TM_LOAD_DOUBLE,

BUILT_IN_TM_LOAD_RAR_DOUBLE,

BUILT_IN_TM_LOAD_RAW_DOUBLE,

BUILT_IN_TM_LOAD_RFW_DOUBLE,



BUILT_IN_TM_LOAD_M64,
BUILT_IN_TM_LOAD_RAR_M64,
BUILT_IN_TM_LOAD_RAW_M64,
BUILT_IN_TM_LOAD_RFW_M64,
BUILT_IN_TM_LOAD_M128,
BUILT_IN_TM_LOAD_RAR_M128,
BUILT_IN_TM_LOAD_RAW_M128,
BUILT_IN_TM_LOAD_RFW_M128,
BUILT_IN_TM_LOAD_M256,
BUILT_IN_TM_LOAD_RAR_M256,
BUILT_IN_TM_LOAD_RAW_M256,
BUILT_IN_TM_LOAD_RFW_M256,

BUILT_IN_TM_LOAD_LDOUBLE,

BUILT_IN_TM_LOAD_RAR_LDOUBLE,

BUILT_IN_TM_LOAD_RAW_LDOUBLE,

BUILT_IN_TM_LOAD_RFW_LDOUBLE,
// # 867 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 2


// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/sanitizer.def" 1
// # 30 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/sanitizer.def"
BUILT_IN_ASAN_INIT,



BUILT_IN_ASAN_REPORT_LOAD1,

BUILT_IN_ASAN_REPORT_LOAD2,

BUILT_IN_ASAN_REPORT_LOAD4,

BUILT_IN_ASAN_REPORT_LOAD8,

BUILT_IN_ASAN_REPORT_LOAD16,

BUILT_IN_ASAN_REPORT_LOAD_N,


BUILT_IN_ASAN_REPORT_STORE1,

BUILT_IN_ASAN_REPORT_STORE2,

BUILT_IN_ASAN_REPORT_STORE4,

BUILT_IN_ASAN_REPORT_STORE8,

BUILT_IN_ASAN_REPORT_STORE16,

BUILT_IN_ASAN_REPORT_STORE_N,


BUILT_IN_ASAN_LOAD1,

BUILT_IN_ASAN_LOAD2,

BUILT_IN_ASAN_LOAD4,

BUILT_IN_ASAN_LOAD8,

BUILT_IN_ASAN_LOAD16,

BUILT_IN_ASAN_LOADN,

BUILT_IN_ASAN_STORE1,

BUILT_IN_ASAN_STORE2,

BUILT_IN_ASAN_STORE4,

BUILT_IN_ASAN_STORE8,

BUILT_IN_ASAN_STORE16,

BUILT_IN_ASAN_STOREN,

BUILT_IN_ASAN_REGISTER_GLOBALS,


BUILT_IN_ASAN_UNREGISTER_GLOBALS,


BUILT_IN_ASAN_HANDLE_NO_RETURN,


BUILT_IN_ASAN_BEFORE_DYNAMIC_INIT,


BUILT_IN_ASAN_AFTER_DYNAMIC_INIT,




BUILT_IN_TSAN_INIT,

BUILT_IN_TSAN_FUNC_ENTRY,

BUILT_IN_TSAN_FUNC_EXIT,

BUILT_IN_TSAN_VPTR_UPDATE,

BUILT_IN_TSAN_READ1,

BUILT_IN_TSAN_READ2,

BUILT_IN_TSAN_READ4,

BUILT_IN_TSAN_READ8,

BUILT_IN_TSAN_READ16,

BUILT_IN_TSAN_WRITE1,

BUILT_IN_TSAN_WRITE2,

BUILT_IN_TSAN_WRITE4,

BUILT_IN_TSAN_WRITE8,

BUILT_IN_TSAN_WRITE16,


BUILT_IN_TSAN_ATOMIC8_LOAD,


BUILT_IN_TSAN_ATOMIC16_LOAD,


BUILT_IN_TSAN_ATOMIC32_LOAD,


BUILT_IN_TSAN_ATOMIC64_LOAD,


BUILT_IN_TSAN_ATOMIC128_LOAD,



BUILT_IN_TSAN_ATOMIC8_STORE,


BUILT_IN_TSAN_ATOMIC16_STORE,


BUILT_IN_TSAN_ATOMIC32_STORE,


BUILT_IN_TSAN_ATOMIC64_STORE,


BUILT_IN_TSAN_ATOMIC128_STORE,



BUILT_IN_TSAN_ATOMIC8_EXCHANGE,


BUILT_IN_TSAN_ATOMIC16_EXCHANGE,


BUILT_IN_TSAN_ATOMIC32_EXCHANGE,


BUILT_IN_TSAN_ATOMIC64_EXCHANGE,


BUILT_IN_TSAN_ATOMIC128_EXCHANGE,



BUILT_IN_TSAN_ATOMIC8_FETCH_ADD,


BUILT_IN_TSAN_ATOMIC16_FETCH_ADD,


BUILT_IN_TSAN_ATOMIC32_FETCH_ADD,


BUILT_IN_TSAN_ATOMIC64_FETCH_ADD,


BUILT_IN_TSAN_ATOMIC128_FETCH_ADD,



BUILT_IN_TSAN_ATOMIC8_FETCH_SUB,


BUILT_IN_TSAN_ATOMIC16_FETCH_SUB,


BUILT_IN_TSAN_ATOMIC32_FETCH_SUB,


BUILT_IN_TSAN_ATOMIC64_FETCH_SUB,


BUILT_IN_TSAN_ATOMIC128_FETCH_SUB,



BUILT_IN_TSAN_ATOMIC8_FETCH_AND,


BUILT_IN_TSAN_ATOMIC16_FETCH_AND,


BUILT_IN_TSAN_ATOMIC32_FETCH_AND,


BUILT_IN_TSAN_ATOMIC64_FETCH_AND,


BUILT_IN_TSAN_ATOMIC128_FETCH_AND,



BUILT_IN_TSAN_ATOMIC8_FETCH_OR,


BUILT_IN_TSAN_ATOMIC16_FETCH_OR,


BUILT_IN_TSAN_ATOMIC32_FETCH_OR,


BUILT_IN_TSAN_ATOMIC64_FETCH_OR,


BUILT_IN_TSAN_ATOMIC128_FETCH_OR,



BUILT_IN_TSAN_ATOMIC8_FETCH_XOR,


BUILT_IN_TSAN_ATOMIC16_FETCH_XOR,


BUILT_IN_TSAN_ATOMIC32_FETCH_XOR,


BUILT_IN_TSAN_ATOMIC64_FETCH_XOR,


BUILT_IN_TSAN_ATOMIC128_FETCH_XOR,



BUILT_IN_TSAN_ATOMIC8_FETCH_NAND,


BUILT_IN_TSAN_ATOMIC16_FETCH_NAND,


BUILT_IN_TSAN_ATOMIC32_FETCH_NAND,


BUILT_IN_TSAN_ATOMIC64_FETCH_NAND,


BUILT_IN_TSAN_ATOMIC128_FETCH_NAND,



BUILT_IN_TSAN_ATOMIC8_COMPARE_EXCHANGE_STRONG,



BUILT_IN_TSAN_ATOMIC16_COMPARE_EXCHANGE_STRONG,



BUILT_IN_TSAN_ATOMIC32_COMPARE_EXCHANGE_STRONG,



BUILT_IN_TSAN_ATOMIC64_COMPARE_EXCHANGE_STRONG,



BUILT_IN_TSAN_ATOMIC128_COMPARE_EXCHANGE_STRONG,




BUILT_IN_TSAN_ATOMIC8_COMPARE_EXCHANGE_WEAK,



BUILT_IN_TSAN_ATOMIC16_COMPARE_EXCHANGE_WEAK,



BUILT_IN_TSAN_ATOMIC32_COMPARE_EXCHANGE_WEAK,



BUILT_IN_TSAN_ATOMIC64_COMPARE_EXCHANGE_WEAK,



BUILT_IN_TSAN_ATOMIC128_COMPARE_EXCHANGE_WEAK,




BUILT_IN_TSAN_ATOMIC_THREAD_FENCE,


BUILT_IN_TSAN_ATOMIC_SIGNAL_FENCE,




BUILT_IN_UBSAN_HANDLE_DIVREM_OVERFLOW,



BUILT_IN_UBSAN_HANDLE_SHIFT_OUT_OF_BOUNDS,



BUILT_IN_UBSAN_HANDLE_BUILTIN_UNREACHABLE,



BUILT_IN_UBSAN_HANDLE_MISSING_RETURN,



BUILT_IN_UBSAN_HANDLE_VLA_BOUND_NOT_POSITIVE,



BUILT_IN_UBSAN_HANDLE_TYPE_MISMATCH,



BUILT_IN_UBSAN_HANDLE_ADD_OVERFLOW,



BUILT_IN_UBSAN_HANDLE_SUB_OVERFLOW,



BUILT_IN_UBSAN_HANDLE_MUL_OVERFLOW,



BUILT_IN_UBSAN_HANDLE_NEGATE_OVERFLOW,



BUILT_IN_UBSAN_HANDLE_LOAD_INVALID_VALUE,
// # 870 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 2


// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cilkplus.def" 1
// # 27 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/cilkplus.def"
BUILT_IN_CILKPLUS_SEC_REDUCE_ADD,

BUILT_IN_CILKPLUS_SEC_REDUCE_MUL,

BUILT_IN_CILKPLUS_SEC_REDUCE_ALL_ZERO,

BUILT_IN_CILKPLUS_SEC_REDUCE_ANY_ZERO,

BUILT_IN_CILKPLUS_SEC_REDUCE_MAX,

BUILT_IN_CILKPLUS_SEC_REDUCE_MIN,

BUILT_IN_CILKPLUS_SEC_REDUCE_MIN_IND,

BUILT_IN_CILKPLUS_SEC_REDUCE_MAX_IND,

BUILT_IN_CILKPLUS_SEC_REDUCE_ANY_NONZERO,

BUILT_IN_CILKPLUS_SEC_REDUCE_ALL_NONZERO,

BUILT_IN_CILKPLUS_SEC_REDUCE,

BUILT_IN_CILKPLUS_SEC_REDUCE_MUTATING,


BUILT_IN_CILKPLUS_SEC_IMPLICIT_INDEX,
// # 872 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/builtins.def" 2
// # 170 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2



  BUILT_IN_COMPLEX_MUL_MIN,
  BUILT_IN_COMPLEX_MUL_MAX
    = BUILT_IN_COMPLEX_MUL_MIN
      + MAX_MODE_COMPLEX_FLOAT
      - MIN_MODE_COMPLEX_FLOAT,

  BUILT_IN_COMPLEX_DIV_MIN,
  BUILT_IN_COMPLEX_DIV_MAX
    = BUILT_IN_COMPLEX_DIV_MIN
      + MAX_MODE_COMPLEX_FLOAT
      - MIN_MODE_COMPLEX_FLOAT,


  END_BUILTINS
};




enum tree_code_class {
  tcc_exceptional,
  tcc_constant,

  tcc_type,
  tcc_declaration,
  tcc_reference,
  tcc_comparison,
  tcc_unary,
  tcc_binary,
  tcc_statement,

  tcc_vl_exp,

  tcc_expression
};



enum omp_clause_code {


  OMP_CLAUSE_ERROR = 0,


  OMP_CLAUSE_PRIVATE,


  OMP_CLAUSE_SHARED,


  OMP_CLAUSE_FIRSTPRIVATE,


  OMP_CLAUSE_LASTPRIVATE,
// # 235 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
  OMP_CLAUSE_REDUCTION,


  OMP_CLAUSE_COPYIN,


  OMP_CLAUSE_COPYPRIVATE,


  OMP_CLAUSE_LINEAR,


  OMP_CLAUSE_ALIGNED,


  OMP_CLAUSE_DEPEND,


  OMP_CLAUSE_UNIFORM,


  OMP_CLAUSE_FROM,


  OMP_CLAUSE_TO,


  OMP_CLAUSE_MAP,


  OMP_CLAUSE__LOOPTEMP_,


  OMP_CLAUSE_IF,


  OMP_CLAUSE_NUM_THREADS,


  OMP_CLAUSE_SCHEDULE,


  OMP_CLAUSE_NOWAIT,


  OMP_CLAUSE_ORDERED,


  OMP_CLAUSE_DEFAULT,


  OMP_CLAUSE_COLLAPSE,


  OMP_CLAUSE_UNTIED,


  OMP_CLAUSE_FINAL,


  OMP_CLAUSE_MERGEABLE,


  OMP_CLAUSE_DEVICE,


  OMP_CLAUSE_DIST_SCHEDULE,


  OMP_CLAUSE_INBRANCH,


  OMP_CLAUSE_NOTINBRANCH,


  OMP_CLAUSE_NUM_TEAMS,


  OMP_CLAUSE_THREAD_LIMIT,


  OMP_CLAUSE_PROC_BIND,


  OMP_CLAUSE_SAFELEN,


  OMP_CLAUSE_SIMDLEN,


  OMP_CLAUSE_FOR,


  OMP_CLAUSE_PARALLEL,


  OMP_CLAUSE_SECTIONS,


  OMP_CLAUSE_TASKGROUP,


  OMP_CLAUSE__SIMDUID_
};



enum tree_node_structure_enum {
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/treestruct.def" 1
// # 33 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/treestruct.def"
TS_BASE,
TS_TYPED,
TS_COMMON,
TS_INT_CST,
TS_REAL_CST,
TS_FIXED_CST,
TS_VECTOR,
TS_STRING,
TS_COMPLEX,
TS_IDENTIFIER,
TS_DECL_MINIMAL,
TS_DECL_COMMON,
TS_DECL_WRTL,
TS_DECL_NON_COMMON,
TS_DECL_WITH_VIS,
TS_FIELD_DECL,
TS_VAR_DECL,
TS_PARM_DECL,
TS_LABEL_DECL,
TS_RESULT_DECL,
TS_CONST_DECL,
TS_TYPE_DECL,
TS_FUNCTION_DECL,
TS_TRANSLATION_UNIT_DECL,
TS_TYPE_COMMON,
TS_TYPE_WITH_LANG_SPECIFIC,
TS_TYPE_NON_COMMON,
TS_LIST,
TS_VEC,
TS_EXP,
TS_SSA_NAME,
TS_BLOCK,
TS_BINFO,
TS_STATEMENT_LIST,
TS_CONSTRUCTOR,
TS_OMP_CLAUSE,
TS_OPTIMIZATION,
TS_TARGET_OPTION,
// # 344 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h" 2
  LAST_TS_ENUM
};


enum omp_clause_schedule_kind {
  OMP_CLAUSE_SCHEDULE_STATIC,
  OMP_CLAUSE_SCHEDULE_DYNAMIC,
  OMP_CLAUSE_SCHEDULE_GUIDED,
  OMP_CLAUSE_SCHEDULE_AUTO,
  OMP_CLAUSE_SCHEDULE_RUNTIME,
  OMP_CLAUSE_SCHEDULE_LAST
};

enum omp_clause_default_kind {
  OMP_CLAUSE_DEFAULT_UNSPECIFIED,
  OMP_CLAUSE_DEFAULT_SHARED,
  OMP_CLAUSE_DEFAULT_NONE,
  OMP_CLAUSE_DEFAULT_PRIVATE,
  OMP_CLAUSE_DEFAULT_FIRSTPRIVATE,
  OMP_CLAUSE_DEFAULT_LAST
};




enum cv_qualifier {
  TYPE_UNQUALIFIED = 0x0,
  TYPE_QUAL_CONST = 0x1,
  TYPE_QUAL_VOLATILE = 0x2,
  TYPE_QUAL_RESTRICT = 0x4,
  TYPE_QUAL_ATOMIC = 0x8
};
// # 389 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
enum tree_index {
  TI_ERROR_MARK,
  TI_INTQI_TYPE,
  TI_INTHI_TYPE,
  TI_INTSI_TYPE,
  TI_INTDI_TYPE,
  TI_INTTI_TYPE,

  TI_UINTQI_TYPE,
  TI_UINTHI_TYPE,
  TI_UINTSI_TYPE,
  TI_UINTDI_TYPE,
  TI_UINTTI_TYPE,

  TI_ATOMICQI_TYPE,
  TI_ATOMICHI_TYPE,
  TI_ATOMICSI_TYPE,
  TI_ATOMICDI_TYPE,
  TI_ATOMICTI_TYPE,

  TI_UINT16_TYPE,
  TI_UINT32_TYPE,
  TI_UINT64_TYPE,

  TI_INTEGER_ZERO,
  TI_INTEGER_ONE,
  TI_INTEGER_THREE,
  TI_INTEGER_MINUS_ONE,
  TI_NULL_POINTER,

  TI_SIZE_ZERO,
  TI_SIZE_ONE,

  TI_BITSIZE_ZERO,
  TI_BITSIZE_ONE,
  TI_BITSIZE_UNIT,

  TI_PUBLIC,
  TI_PROTECTED,
  TI_PRIVATE,

  TI_BOOLEAN_FALSE,
  TI_BOOLEAN_TRUE,

  TI_COMPLEX_INTEGER_TYPE,
  TI_COMPLEX_FLOAT_TYPE,
  TI_COMPLEX_DOUBLE_TYPE,
  TI_COMPLEX_LONG_DOUBLE_TYPE,

  TI_FLOAT_TYPE,
  TI_DOUBLE_TYPE,
  TI_LONG_DOUBLE_TYPE,

  TI_FLOAT_PTR_TYPE,
  TI_DOUBLE_PTR_TYPE,
  TI_LONG_DOUBLE_PTR_TYPE,
  TI_INTEGER_PTR_TYPE,

  TI_VOID_TYPE,
  TI_PTR_TYPE,
  TI_CONST_PTR_TYPE,
  TI_SIZE_TYPE,
  TI_PID_TYPE,
  TI_PTRDIFF_TYPE,
  TI_VA_LIST_TYPE,
  TI_VA_LIST_GPR_COUNTER_FIELD,
  TI_VA_LIST_FPR_COUNTER_FIELD,
  TI_BOOLEAN_TYPE,
  TI_FILEPTR_TYPE,
  TI_POINTER_SIZED_TYPE,

  TI_DFLOAT32_TYPE,
  TI_DFLOAT64_TYPE,
  TI_DFLOAT128_TYPE,
  TI_DFLOAT32_PTR_TYPE,
  TI_DFLOAT64_PTR_TYPE,
  TI_DFLOAT128_PTR_TYPE,

  TI_VOID_LIST_NODE,

  TI_MAIN_IDENTIFIER,

  TI_SAT_SFRACT_TYPE,
  TI_SAT_FRACT_TYPE,
  TI_SAT_LFRACT_TYPE,
  TI_SAT_LLFRACT_TYPE,
  TI_SAT_USFRACT_TYPE,
  TI_SAT_UFRACT_TYPE,
  TI_SAT_ULFRACT_TYPE,
  TI_SAT_ULLFRACT_TYPE,
  TI_SFRACT_TYPE,
  TI_FRACT_TYPE,
  TI_LFRACT_TYPE,
  TI_LLFRACT_TYPE,
  TI_USFRACT_TYPE,
  TI_UFRACT_TYPE,
  TI_ULFRACT_TYPE,
  TI_ULLFRACT_TYPE,
  TI_SAT_SACCUM_TYPE,
  TI_SAT_ACCUM_TYPE,
  TI_SAT_LACCUM_TYPE,
  TI_SAT_LLACCUM_TYPE,
  TI_SAT_USACCUM_TYPE,
  TI_SAT_UACCUM_TYPE,
  TI_SAT_ULACCUM_TYPE,
  TI_SAT_ULLACCUM_TYPE,
  TI_SACCUM_TYPE,
  TI_ACCUM_TYPE,
  TI_LACCUM_TYPE,
  TI_LLACCUM_TYPE,
  TI_USACCUM_TYPE,
  TI_UACCUM_TYPE,
  TI_ULACCUM_TYPE,
  TI_ULLACCUM_TYPE,
  TI_QQ_TYPE,
  TI_HQ_TYPE,
  TI_SQ_TYPE,
  TI_DQ_TYPE,
  TI_TQ_TYPE,
  TI_UQQ_TYPE,
  TI_UHQ_TYPE,
  TI_USQ_TYPE,
  TI_UDQ_TYPE,
  TI_UTQ_TYPE,
  TI_SAT_QQ_TYPE,
  TI_SAT_HQ_TYPE,
  TI_SAT_SQ_TYPE,
  TI_SAT_DQ_TYPE,
  TI_SAT_TQ_TYPE,
  TI_SAT_UQQ_TYPE,
  TI_SAT_UHQ_TYPE,
  TI_SAT_USQ_TYPE,
  TI_SAT_UDQ_TYPE,
  TI_SAT_UTQ_TYPE,
  TI_HA_TYPE,
  TI_SA_TYPE,
  TI_DA_TYPE,
  TI_TA_TYPE,
  TI_UHA_TYPE,
  TI_USA_TYPE,
  TI_UDA_TYPE,
  TI_UTA_TYPE,
  TI_SAT_HA_TYPE,
  TI_SAT_SA_TYPE,
  TI_SAT_DA_TYPE,
  TI_SAT_TA_TYPE,
  TI_SAT_UHA_TYPE,
  TI_SAT_USA_TYPE,
  TI_SAT_UDA_TYPE,
  TI_SAT_UTA_TYPE,

  TI_OPTIMIZATION_DEFAULT,
  TI_OPTIMIZATION_CURRENT,
  TI_TARGET_OPTION_DEFAULT,
  TI_TARGET_OPTION_CURRENT,
  TI_CURRENT_TARGET_PRAGMA,
  TI_CURRENT_OPTIMIZE_PRAGMA,

  TI_MAX
};





enum integer_type_kind {
  itk_char,
  itk_signed_char,
  itk_unsigned_char,
  itk_short,
  itk_unsigned_short,
  itk_int,
  itk_unsigned_int,
  itk_long,
  itk_unsigned_long,
  itk_long_long,
  itk_unsigned_long_long,
  itk_int128,
  itk_unsigned_int128,
  itk_none
};
// # 591 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
enum ptrmemfunc_vbit_where_t {
  ptrmemfunc_vbit_in_pfn,
  ptrmemfunc_vbit_in_delta
};



enum attribute_flags {



  ATTR_FLAG_DECL_NEXT = 1,



  ATTR_FLAG_FUNCTION_NEXT = 2,



  ATTR_FLAG_ARRAY_NEXT = 4,


  ATTR_FLAG_TYPE_IN_PLACE = 8,



  ATTR_FLAG_BUILT_IN = 16,

  ATTR_FLAG_CXX11 = 32
};


enum size_type_kind {
  stk_sizetype,
  stk_ssizetype,
  stk_bitsizetype,
  stk_sbitsizetype,
  stk_type_kind_last
};

enum operand_equal_flag {
  OEP_ONLY_CONST = 1,
  OEP_PURE_SAME = 2,
  OEP_CONSTANT_ADDRESS_OF = 4
};



enum tree_node_kind {
  d_kind,
  t_kind,
  b_kind,
  s_kind,
  r_kind,
  e_kind,
  c_kind,
  id_kind,
  vec_kind,
  binfo_kind,
  ssa_name_kind,
  constr_kind,
  x_kind,
  lang_decl,
  lang_type,
  omp_clause_kind,
  all_kinds
};

enum annot_expr_kind {
  annot_expr_ivdep_kind
};
// # 670 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
struct alias_pair {
  tree decl;
  tree target;
};


typedef unsigned short priority_type;


typedef tree (*walk_tree_fn) (tree *, int *, void *);


typedef tree (*walk_tree_lh) (tree *, int *, tree (*) (tree *, int *, void *),
         void *, struct pointer_set_t*);

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
  union {
    struct {
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
// # 1039 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
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

enum omp_clause_depend_kind
{
  OMP_CLAUSE_DEPEND_IN,
  OMP_CLAUSE_DEPEND_OUT,
  OMP_CLAUSE_DEPEND_INOUT,
  OMP_CLAUSE_DEPEND_LAST
};

enum omp_clause_map_kind
{
  OMP_CLAUSE_MAP_ALLOC,
  OMP_CLAUSE_MAP_TO,
  OMP_CLAUSE_MAP_FROM,
  OMP_CLAUSE_MAP_TOFROM,



  OMP_CLAUSE_MAP_POINTER,




  OMP_CLAUSE_MAP_TO_PSET,
  OMP_CLAUSE_MAP_LAST
};

enum omp_clause_proc_bind_kind
{

  OMP_CLAUSE_PROC_BIND_FALSE = 0,
  OMP_CLAUSE_PROC_BIND_TRUE = 1,
  OMP_CLAUSE_PROC_BIND_MASTER = 2,
  OMP_CLAUSE_PROC_BIND_CLOSE = 3,
  OMP_CLAUSE_PROC_BIND_SPREAD = 4,
  OMP_CLAUSE_PROC_BIND_LAST
};

struct tree_exp {
  struct tree_typed typed;
  location_t locus;
  tree

    operands[1];
};



struct ssa_use_operand_t {
  struct ssa_use_operand_t* prev;
  struct ssa_use_operand_t* next;





  union { gimple stmt; tree ssa_name; } loc;
  tree * use;
};

struct tree_ssa_name {
  struct tree_typed typed;


  tree var;


  gimple def_stmt;


  union ssa_name_info_type {

    struct ptr_info_def *ptr_info;

    struct range_info_def *range_info;
  }
                                                   info;


  struct ssa_use_operand_t imm_uses;
};

struct phi_arg_d {


  struct ssa_use_operand_t imm_use;
  tree def;
  location_t locus;
};

struct tree_omp_clause {
  struct tree_common common;
  location_t locus;
  enum omp_clause_code code;
  union omp_clause_subcode {
    enum omp_clause_default_kind default_kind;
    enum omp_clause_schedule_kind schedule_kind;
    enum omp_clause_depend_kind depend_kind;
    enum omp_clause_map_kind map_kind;
    enum omp_clause_proc_bind_kind proc_bind_kind;
    enum tree_code reduction_code;
  } subcode;



  gimple_seq gimple_reduction_init;
  gimple_seq gimple_reduction_merge;

  tree
    ops[1];
};

struct tree_block {
  struct tree_base base;
  tree chain;

  unsigned abstract_flag : 1;
  unsigned block_num : 31;

  location_t locus;

  tree vars;
  vec_tree *nonlocalized_vars;

  tree subblocks;
  tree supercontext;
  tree abstract_origin;
  tree fragment_origin;
  tree fragment_chain;
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




struct tree_optimization_option {
  struct tree_common common;


  struct cl_optimization opts;



  void * optabs;



  struct target_optabs * base_optabs;
};



struct target_globals;



struct tree_target_option {
  struct tree_common common;


  struct target_globals *globals;


  struct cl_target_option opts;
};




union
                                                         tree_node {
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
  struct tree_ssa_name ssa_name;
  struct tree_block block;
  struct tree_binfo binfo;
  struct tree_statement_list stmt_list;
  struct tree_constructor constructor;
  struct tree_omp_clause omp_clause;
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
// # 1673 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-core.h"
  tree (*handler) (tree *node, tree name, tree args,
     int flags, bool *no_add_attrs);

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

struct const_call_expr_arg_iterator {
  const_tree t;
  int n;
  int i;
};




struct builtin_info_type {
  tree decl[(int)END_BUILTINS];
  bool implicit_p[(int)END_BUILTINS];
};






extern unsigned char tree_contains_struct[MAX_TREE_CODES][64];


extern const enum tree_code_class tree_code_type[];



extern const char *const tree_code_class_strings[];


extern const unsigned char tree_code_length[];

class vec_alias_pair {};

extern vec_alias_pair *alias_pairs;


extern const char *const built_in_class_names[(BUILT_IN_NORMAL + 1)];


extern const char * built_in_names[(int) END_BUILTINS];


extern unsigned const char omp_clause_num_ops[];
extern const char * const omp_clause_code_name[];


extern vec_tree *all_translation_units;


extern tree global_trees[TI_MAX];



extern tree integer_types[itk_none];


extern tree sizetype_tab[(int) stk_type_kind_last];


extern int tree_node_counts[];
extern int tree_node_sizes[];




extern bool in_gimple_form;


extern builtin_info_type builtin_info;


extern unsigned int maximum_field_alignment;



extern int pedantic_lvalues;


extern tree current_function_decl;


extern const char * current_function_func_begin_label;
// # 24 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h" 2





// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/fold-const.h" 1
// # 25 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/fold-const.h"
extern int folding_initializer;


extern int native_encode_expr (const_tree, unsigned char *, int);
extern tree native_interpret_expr (tree, const unsigned char *, int);







extern tree fold (tree);


extern tree fold_unary_loc (location_t, enum tree_code, tree, tree);


extern tree fold_unary_ignore_overflow_loc (location_t, enum tree_code, tree, tree);


extern tree fold_binary_loc (location_t, enum tree_code, tree, tree, tree);


extern tree fold_ternary_loc (location_t, enum tree_code, tree, tree, tree, tree);




extern tree fold_build1_stat_loc (location_t, enum tree_code, tree,
      tree );




extern tree fold_build2_stat_loc (location_t, enum tree_code, tree, tree,
      tree );




extern tree fold_build3_stat_loc (location_t, enum tree_code, tree, tree, tree,
      tree );
extern tree fold_build1_initializer_loc (location_t, enum tree_code, tree, tree);
extern tree fold_build2_initializer_loc (location_t, enum tree_code, tree, tree, tree);


extern tree fold_build_call_array_loc (location_t, tree, tree, int, tree *);


extern tree fold_build_call_array_initializer_loc (location_t, tree, tree, int, tree *);
extern bool fold_convertible_p (const_tree, const_tree);


extern tree fold_convert_loc (location_t, tree, tree);
extern tree fold_single_bit_test (location_t, enum tree_code, tree, tree, tree);
extern tree fold_ignored_result (tree);
extern tree fold_abs_const (tree, tree);
extern tree fold_indirect_ref_1 (location_t, tree, tree);
extern void fold_defer_overflow_warnings (void);
extern void fold_undefer_overflow_warnings (bool, const_gimple, int);
extern void fold_undefer_and_ignore_overflow_warnings (void);
extern bool fold_deferring_overflow_warnings_p (void);
extern tree fold_fma (location_t, tree, tree, tree, tree);
extern int operand_equal_p (const_tree, const_tree, unsigned int);
extern int multiple_of_p (tree, const_tree, const_tree);


extern tree omit_one_operand_loc (location_t, tree, tree, tree);


extern tree omit_two_operands_loc (location_t, tree, tree, tree, tree);


extern tree invert_truthvalue_loc (location_t, tree);
extern tree fold_unary_to_constant (enum tree_code, tree, tree);
extern tree fold_binary_to_constant (enum tree_code, tree, tree, tree);
extern tree fold_read_from_constant_string (tree);
extern tree int_const_binop (enum tree_code, const_tree, const_tree);


extern tree build_fold_addr_expr_loc (location_t, tree);


extern tree build_fold_addr_expr_with_type_loc (location_t, tree, tree);
extern tree fold_build_cleanup_point_expr (tree type, tree expr);
extern tree fold_strip_sign_ops (tree);


extern tree build_fold_indirect_ref_loc (location_t, tree);


extern tree fold_indirect_ref_loc (location_t, tree);
extern tree build_simple_mem_ref_loc (location_t, tree);


extern double_int mem_ref_offset (const_tree);
extern tree build_invariant_address (tree, tree, long);
extern tree constant_boolean_node (bool, tree);
extern tree div_if_zero_remainder (enum tree_code, const_tree, const_tree);

extern bool tree_swap_operands_p (const_tree, const_tree, bool);
extern enum tree_code swap_tree_comparison (enum tree_code);

extern bool ptr_difference_const (tree, tree, long *);
extern enum tree_code invert_tree_comparison (enum tree_code, bool);

extern bool tree_unary_nonzero_warnv_p (enum tree_code, tree, tree, bool *);
extern bool tree_binary_nonzero_warnv_p (enum tree_code, tree, tree, tree op1,
                                         bool *);
extern bool tree_single_nonzero_warnv_p (tree, bool *);
extern bool tree_unary_nonnegative_warnv_p (enum tree_code, tree, tree, bool *);
extern bool tree_binary_nonnegative_warnv_p (enum tree_code, tree, tree, tree,
                                             bool *);
extern bool tree_single_nonnegative_warnv_p (tree t, bool *strict_overflow_p);
extern bool tree_call_nonnegative_warnv_p (tree, tree, tree, tree, bool *);

extern bool fold_real_zero_addition_p (const_tree, const_tree, int);
extern tree combine_comparisons (location_t, enum tree_code, enum tree_code,
     enum tree_code, tree, tree, tree);
extern void debug_fold_checksum (const_tree);
extern bool may_negate_without_overflow_p (const_tree);

extern tree round_up_loc (location_t, tree, int);

extern tree round_down_loc (location_t, tree, int);
extern tree size_int_kind (long, enum size_type_kind);


extern tree size_binop_loc (location_t, enum tree_code, tree, tree);


extern tree size_diffop_loc (location_t, tree, tree);



extern tree non_lvalue_loc (location_t, tree);

extern bool tree_expr_nonnegative_p (tree);
extern bool tree_expr_nonnegative_warnv_p (tree, bool *);
extern tree make_range (tree, int *, tree *, tree *, bool *);
extern tree make_range_step (location_t, enum tree_code, tree, tree, tree,
        tree *, tree *, int *, bool *);
extern tree build_range_check (location_t, tree, tree, int, tree, tree);
extern bool merge_ranges (int *, tree *, tree *, int, tree, tree, int,
     tree, tree);
// # 30 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h" 2
// # 388 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
// # 1 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree-check.h" 1
// # 389 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h" 2
// # 1038 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern void protected_set_expr_location (tree, location_t);
// # 2128 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree decl_value_expr_lookup (tree);
extern void decl_value_expr_insert (tree, tree);
// # 2404 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree decl_debug_expr_lookup (tree);
extern void decl_debug_expr_insert (tree, tree);
// # 2416 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern priority_type decl_init_priority_lookup (tree);
extern priority_type decl_fini_priority_lookup (tree);
extern void decl_init_priority_insert (tree, priority_type);
extern void decl_fini_priority_insert (tree, priority_type);
// # 2592 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern vec_tree **decl_debug_args_lookup (tree);
extern vec_tree **decl_debug_args_insert (tree);
// # 2705 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree build_optimization_node (struct gcc_options *opts);
// # 2714 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree build_target_option_node (struct gcc_options *opts);

extern void prepare_target_option_nodes_for_pch (void);
// # 3141 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
static inline int
tree_operand_length (const_tree node)
{
  if ((tree_code_type[(int) (((enum tree_code) (node)->base.code))] == tcc_vl_exp))
    return ((int)((((node)->exp.operands[0])->int_cst.int_cst).low));
  else
    return tree_code_length[(int) (((enum tree_code) (node)->base.code))];
}
// # 3405 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree decl_assembler_name (tree);




extern size_t tree_size (const_tree);




extern size_t tree_code_size (enum tree_code);


extern int allocate_decl_uid (void);





extern tree make_node_stat (enum tree_code );




extern tree copy_node_stat (tree );




extern tree copy_list (tree);



extern tree build_case_label (tree, tree, tree);


extern tree make_tree_binfo_stat (unsigned );




extern tree make_tree_vec_stat (int );




extern tree grow_tree_vec_stat (tree v, int );




extern tree build_nt (enum tree_code, ...);
extern tree build_nt_call_vec (tree, vec_tree *);

extern tree build0_stat (enum tree_code, tree );

extern tree build1_stat (enum tree_code, tree, tree );

extern tree build2_stat (enum tree_code, tree, tree, tree );

extern tree build3_stat (enum tree_code, tree, tree, tree, tree );

extern tree build4_stat (enum tree_code, tree, tree, tree, tree,
    tree );

extern tree build5_stat (enum tree_code, tree, tree, tree, tree, tree,
    tree );




static inline tree
build1_stat_loc (location_t loc, enum tree_code code, tree type,
   tree arg1 )
{
  tree t = build1_stat (code, type, arg1 );
  if (((t) && ((tree_code_type[(int) (((enum tree_code) (t)->base.code))]) >= tcc_reference && (tree_code_type[(int) (((enum tree_code) (t)->base.code))]) <= tcc_expression)))
    ((t))->exp.locus = (loc);
  return t;
}


static inline tree
build2_stat_loc (location_t loc, enum tree_code code, tree type, tree arg0,
   tree arg1 )
{
  tree t = build2_stat (code, type, arg0, arg1 );
  if (((t) && ((tree_code_type[(int) (((enum tree_code) (t)->base.code))]) >= tcc_reference && (tree_code_type[(int) (((enum tree_code) (t)->base.code))]) <= tcc_expression)))
    ((t))->exp.locus = (loc);
  return t;
}


static inline tree
build3_stat_loc (location_t loc, enum tree_code code, tree type, tree arg0,
   tree arg1, tree arg2 )
{
  tree t = build3_stat (code, type, arg0, arg1, arg2 );
  if (((t) && ((tree_code_type[(int) (((enum tree_code) (t)->base.code))]) >= tcc_reference && (tree_code_type[(int) (((enum tree_code) (t)->base.code))]) <= tcc_expression)))
    ((t))->exp.locus = (loc);
  return t;
}



static inline tree
build4_stat_loc (location_t loc, enum tree_code code, tree type, tree arg0,
   tree arg1, tree arg2, tree arg3 )
{
  tree t = build4_stat (code, type, arg0, arg1, arg2, arg3 );
  if (((t) && ((tree_code_type[(int) (((enum tree_code) (t)->base.code))]) >= tcc_reference && (tree_code_type[(int) (((enum tree_code) (t)->base.code))]) <= tcc_expression)))
    ((t))->exp.locus = (loc);
  return t;
}



static inline tree
build5_stat_loc (location_t loc, enum tree_code code, tree type, tree arg0,
   tree arg1, tree arg2, tree arg3, tree arg4 )
{
  tree t = build5_stat (code, type, arg0, arg1, arg2, arg3,
   arg4 );
  if (((t) && ((tree_code_type[(int) (((enum tree_code) (t)->base.code))]) >= tcc_reference && (tree_code_type[(int) (((enum tree_code) (t)->base.code))]) <= tcc_expression)))
    ((t))->exp.locus = (loc);
  return t;
}



extern tree build_var_debug_value_stat (tree, tree );





static inline double_int
tree_to_double_int (const_tree cst)
{
  return ((cst)->int_cst.int_cst);
}

extern tree double_int_to_tree (tree, double_int);
extern bool double_int_fits_to_tree_p (const_tree, double_int);
extern tree force_fit_type_double (tree, double_int, int, bool);



static inline tree
build_int_cstu (tree type, unsigned long cst)
{
  return double_int_to_tree (type, double_int::from_uhwi (cst));
}

extern tree build_int_cst (tree, long);
extern tree build_int_cst_type (tree, long);
extern tree build_int_cst_wide (tree, unsigned long, long);
extern tree make_vector_stat (unsigned );

extern tree build_vector_stat (tree, tree * );

extern tree build_vector_from_ctor (tree, vec_constructor_elt *);
extern tree build_vector_from_val (tree, tree);
extern tree build_constructor (tree, vec_constructor_elt *);
extern tree build_constructor_single (tree, tree, tree);
extern tree build_constructor_from_list (tree, tree);
extern tree build_constructor_va (tree, int, ...);
extern tree build_real_from_int_cst (tree, const_tree);
extern tree build_complex (tree, tree, tree);
extern tree build_one_cst (tree);
extern tree build_minus_one_cst (tree);
extern tree build_all_ones_cst (tree);
extern tree build_zero_cst (tree);
extern tree build_string (int, const char *);
extern tree build_tree_list_stat (tree, tree );

extern tree build_tree_list_vec_stat (const vec_tree *);

extern tree build_decl_stat (location_t, enum tree_code,
        tree, tree );
extern tree build_fn_decl (const char *, tree);

extern tree build_translation_unit_decl (tree);
extern tree build_block (tree, tree, tree, tree);
extern tree build_empty_stmt (location_t);
extern tree build_omp_clause (location_t, enum omp_clause_code);

extern tree build_vl_exp_stat (enum tree_code, int );


extern tree build_call_nary (tree, tree, int, ...);
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
extern tree build_call_valist (tree, tree, int, va_list);


extern tree build_call_array_loc (location_t, tree, tree, int, const tree *);
extern tree build_call_vec (tree, tree, vec_tree *);



extern tree signed_or_unsigned_type_for (int, tree);
extern tree signed_type_for (tree);
extern tree unsigned_type_for (tree);
extern tree truth_type_for (tree);
extern tree build_pointer_type_for_mode (tree, enum machine_mode, bool);
extern tree build_pointer_type (tree);
extern tree build_reference_type_for_mode (tree, enum machine_mode, bool);
extern tree build_reference_type (tree);
extern tree build_vector_type_for_mode (tree, enum machine_mode);
extern tree build_vector_type (tree innertype, int nunits);
extern tree build_opaque_vector_type (tree innertype, int nunits);
extern tree build_index_type (tree);
extern tree build_array_type (tree, tree);
extern tree build_nonshared_array_type (tree, tree);
extern tree build_array_type_nelts (tree, unsigned long);
extern tree build_function_type (tree, tree);
extern tree build_function_type_list (tree, ...);
extern tree build_varargs_function_type_list (tree, ...);
extern tree build_function_type_array (tree, int, tree *);
extern tree build_varargs_function_type_array (tree, int, tree *);





extern tree build_method_type_directly (tree, tree, tree);
extern tree build_method_type (tree, tree);
extern tree build_offset_type (tree, tree);
extern tree build_complex_type (tree);
extern tree array_type_nelts (const_tree);

extern tree value_member (tree, tree);
extern tree purpose_member (const_tree, tree);
extern bool vec_member (const_tree, vec_tree *);
extern tree chain_index (int, tree);

extern int attribute_list_equal (const_tree, const_tree);
extern int attribute_list_contained (const_tree, const_tree);
extern int tree_int_cst_equal (const_tree, const_tree);
extern int tree_int_cst_lt (const_tree, const_tree);
extern int tree_int_cst_compare (const_tree, const_tree);
extern bool tree_fits_shwi_p (const_tree)

  __attribute__ ((__pure__))

  ;
extern bool tree_fits_uhwi_p (const_tree)

  __attribute__ ((__pure__))

  ;
extern long tree_to_shwi (const_tree);
extern unsigned long tree_to_uhwi (const_tree);

extern void fancy_abort (const char *, int, const char *) __attribute__ ((__noreturn__));

extern inline __attribute__ ((__gnu_inline__)) long
tree_to_shwi (const_tree t)
{
  ((void)(!(tree_fits_shwi_p (t)) ? fancy_abort ("/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h", 3661, __FUNCTION__), 0 : 0));
  return (((t)->int_cst.int_cst).low);
}

extern inline __attribute__ ((__gnu_inline__)) unsigned long
tree_to_uhwi (const_tree t)
{
  ((void)(!(tree_fits_uhwi_p (t)) ? fancy_abort ("/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h", 3668, __FUNCTION__), 0 : 0));
  return (((t)->int_cst.int_cst).low);
}

extern int tree_int_cst_sgn (const_tree);
extern int tree_int_cst_sign_bit (const_tree);
extern unsigned int tree_int_cst_min_precision (tree, bool);
extern tree strip_array_types (tree);
extern tree excess_precision_type (tree);
extern bool valid_constant_size_p (const_tree);






extern tree make_tree (tree, rtx);







extern tree build_type_attribute_variant (tree, tree);
extern tree build_decl_attribute_variant (tree, tree);
extern tree build_type_attribute_qual_variant (tree, tree, int);




extern int comp_type_attributes (const_tree, const_tree);


extern tree merge_decl_attributes (tree, tree);
extern tree merge_type_attributes (tree, tree);


extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern tree private_lookup_attribute (const char *, size_t, tree);
// # 3717 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
static inline tree
lookup_attribute (const char *attr_name, tree list)
{
  ((void)(0 && (attr_name[0] != '_')));
  if (list == (tree) __null)
    return (tree) __null;
  else
    return private_lookup_attribute (attr_name, strlen (attr_name), list);
}



extern bool private_is_attribute_p (const char *, size_t, const_tree);






static inline bool
is_attribute_p (const char *attr_name, const_tree ident)
{
  ((void)(0 && (attr_name[0] != '_')));



  return private_is_attribute_p (attr_name, strlen (attr_name), ident);
}





extern tree remove_attribute (const char *, tree);



extern tree merge_attributes (tree, tree);
// # 3772 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern bool check_qualified_type (const_tree, const_tree, int);





extern tree get_qualified_type (tree, int);




extern tree build_qualified_type (tree, int);



extern tree build_aligned_type (tree, unsigned int);
// # 3801 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree build_distinct_type_copy (tree);
extern tree build_variant_type_copy (tree);






extern tree type_hash_canon (unsigned int, tree);

extern tree convert (tree, tree);
extern unsigned int expr_align (const_tree);
extern tree size_in_bytes (const_tree);
extern long int_size_in_bytes (const_tree);
extern long max_int_size_in_bytes (const_tree);
extern tree bit_position (const_tree);
extern long int_bit_position (const_tree);
extern tree byte_position (const_tree);
extern long int_byte_position (const_tree);
// # 3841 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree chainon (tree, tree);



extern tree tree_cons_stat (tree, tree, tree );




extern tree tree_last (tree);



extern tree nreverse (tree);




extern int list_length (const_tree);



extern tree first_field (const_tree);




extern bool initializer_zerop (const_tree);




extern tree uniform_vector_p (const_tree);



extern vec_tree *ctor_to_vec (tree);



extern int integer_zerop (const_tree);



extern int integer_onep (const_tree);




extern int integer_all_onesp (const_tree);




extern int integer_minus_onep (const_tree);




extern int integer_pow2p (const_tree);




extern int integer_nonzerop (const_tree);

extern bool cst_and_fits_in_hwi (const_tree);
extern tree num_ending_zeros (const_tree);




extern int fixed_zerop (const_tree);




extern tree staticp (tree);





extern tree save_expr (tree);




extern tree skip_simple_arithmetic (tree);




extern tree skip_simple_constant_arithmetic (tree);



enum tree_node_structure_enum tree_node_structure (const_tree);




extern bool contains_placeholder_p (const_tree);
// # 3955 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern bool type_contains_placeholder_p (tree);
// # 3964 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern void find_placeholder_in_expr (tree, vec_tree *);
// # 3982 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree substitute_in_expr (tree, tree, tree);
// # 3993 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree substitute_placeholder_in_expr (tree, tree);
// # 4007 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern tree stabilize_reference (tree);






extern tree get_unwidened (tree, tree);






extern tree get_narrower (tree, int *);



static inline bool
handled_component_p (const_tree t)
{
  switch (((enum tree_code) (t)->base.code))
    {
    case COMPONENT_REF:
    case BIT_FIELD_REF:
    case ARRAY_REF:
    case ARRAY_RANGE_REF:
    case REALPART_EXPR:
    case IMAGPART_EXPR:
    case VIEW_CONVERT_EXPR:
      return true;

    default:
      return false;
    }
}




extern tree get_containing_scope (const_tree);



extern tree decl_function_context (const_tree);



extern tree decl_type_context (const_tree);


extern int real_zerop (const_tree);



static inline void
function_args_iter_init (function_args_iterator *i, const_tree fntype)
{
  i->next = ((fntype)->type_non_common.values);
}




static inline tree *
function_args_iter_cond_ptr (function_args_iterator *i)
{
  return (i->next) ? &((i->next)->list.value) : __null;
}




static inline tree
function_args_iter_cond (function_args_iterator *i)
{
  return (i->next) ? ((i->next)->list.value) : (tree) __null;
}


static inline void
function_args_iter_next (function_args_iterator *i)
{
  ((void)(!(i->next != (tree) __null) ? fancy_abort ("/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h", 4090, __FUNCTION__), 0 : 0));
  i->next = ((i->next)->common.chain);
}



static inline bool
inlined_function_outer_scope_p (const_tree block)
{
 return (((((((block)->block.locus)) & 0x7FFFFFFF) != (((block)->block.locus)))) ? get_location_from_adhoc_loc (line_table, ((block)->block.locus)) : (((block)->block.locus))) != ((source_location) 0);
}
// # 4119 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern unsigned crc32_string (unsigned, const char *);
extern unsigned crc32_byte (unsigned, char);
extern unsigned crc32_unsigned (unsigned, unsigned);
extern void clean_symbol_name (char *);
extern tree get_file_function_name (const char *);
extern tree get_callee_fndecl (const_tree);
extern int type_num_arguments (const_tree);
extern bool associative_tree_code (enum tree_code);
extern bool commutative_tree_code (enum tree_code);
extern bool commutative_ternary_tree_code (enum tree_code);
extern tree upper_bound_in_type (tree, tree);
extern tree lower_bound_in_type (tree, tree);
extern int operand_equal_for_phi_arg_p (const_tree, const_tree);
extern tree create_artificial_label (location_t);
extern const char *get_name (tree);
extern bool stdarg_p (const_tree);
extern bool prototype_p (tree);
extern bool is_typedef_decl (tree x);
extern bool typedef_variant_p (tree);
extern bool auto_var_in_fn_p (const_tree, const_tree);
extern tree build_low_bits_mask (tree, unsigned);
extern tree tree_strip_nop_conversions (tree);
extern tree tree_strip_sign_nop_conversions (tree);
extern const_tree strip_invariant_refs (const_tree);
extern tree lhd_gcc_personality (void);
extern void assign_assembler_name_if_neeeded (tree);
extern void warn_deprecated_use (tree, tree);
extern void cache_integer_cst (tree);





static inline int
struct_ptr_eq (const void *a, const void *b)
{
  const void * const * x = (const void * const *) a;
  const void * const * y = (const void * const *) b;
  return *x == *y;
}

typedef unsigned int hashval_t;
typedef long int __intptr_t;
typedef __intptr_t intptr_t;
static inline hashval_t
struct_ptr_hash (const void *a)
{
  const void * const * x = (const void * const *) a;
  return (intptr_t)*x >> 4;
}


static inline bool
truth_value_p (enum tree_code code)
{
  return (tree_code_type[(int) (code)] == tcc_comparison
   || code == TRUTH_AND_EXPR || code == TRUTH_ANDIF_EXPR
   || code == TRUTH_OR_EXPR || code == TRUTH_ORIF_EXPR
   || code == TRUTH_XOR_EXPR || code == TRUTH_NOT_EXPR);
}



static inline bool
ptrofftype_p (tree type)
{
  return ((((enum tree_code) (type)->base.code) == ENUMERAL_TYPE || ((enum tree_code) (type)->base.code) == BOOLEAN_TYPE || ((enum tree_code) (type)->base.code) == INTEGER_TYPE)
   && ((type)->type_common.precision) == ((sizetype_tab[(int) stk_sizetype])->type_common.precision)
   && ((type)->base.u.bits.unsigned_flag) == ((sizetype_tab[(int) stk_sizetype])->base.u.bits.unsigned_flag));
}



static inline tree
convert_to_ptrofftype_loc (location_t loc, tree off)
{
  return fold_convert_loc (loc, sizetype_tab[(int) stk_sizetype], off);
}



static inline tree
fold_build_pointer_plus_loc (location_t loc, tree ptr, tree off)
{
  return fold_build2_stat_loc (loc, POINTER_PLUS_EXPR, ((ptr)->typed.type), ptr, fold_convert_loc (loc, sizetype_tab[(int) stk_sizetype], off) )
                                                ;
}




static inline tree
fold_build_pointer_plus_hwi_loc (location_t loc, tree ptr, long off)
{
  return fold_build2_stat_loc (loc, POINTER_PLUS_EXPR, ((ptr)->typed.type), ptr, size_int_kind (off, stk_sizetype) )
                         ;
}



extern tree strip_float_extensions (tree);
extern int really_constant_p (const_tree);
extern bool decl_address_invariant_p (const_tree);
extern bool decl_address_ip_invariant_p (const_tree);
extern bool int_fits_type_p (const_tree, const_tree);

extern void get_type_static_bounds (const_tree, mpz_t, mpz_t);

extern bool variably_modified_type_p (tree, tree);
extern int tree_log2 (const_tree);
extern int tree_floor_log2 (const_tree);
extern unsigned int tree_ctz (const_tree);
extern int simple_cst_equal (const_tree, const_tree);
extern hashval_t iterative_hash_expr (const_tree, hashval_t);
extern hashval_t iterative_hash_host_wide_int (long, hashval_t);
extern hashval_t iterative_hash_hashval_t (hashval_t, hashval_t);
extern hashval_t iterative_hash_host_wide_int (long, hashval_t);
extern int compare_tree_int (const_tree, unsigned long);
extern int type_list_equal (const_tree, const_tree);
extern int chain_member (const_tree, const_tree);
extern void dump_tree_statistics (void);
extern void recompute_tree_invariant_for_addr_expr (tree);
extern bool needs_to_live_in_memory (const_tree);
extern tree reconstruct_complex_type (tree, tree);
extern int real_onep (const_tree);
extern int real_minus_onep (const_tree);
extern void init_ttree (void);
extern void build_common_tree_nodes (bool, bool);
extern void build_common_builtin_nodes (void);
extern tree build_nonstandard_integer_type (unsigned long, int);
extern tree build_range_type (tree, tree, tree);
extern tree build_nonshared_range_type (tree, tree, tree);
extern bool subrange_type_for_debug_p (const_tree, tree *, tree *);
extern long int_cst_value (const_tree);
extern long widest_int_cst_value (const_tree);
extern tree tree_block (tree);
extern void tree_set_block (tree, tree);
extern location_t *block_nonartificial_location (tree);
extern location_t tree_nonartificial_location (tree);
extern tree block_ultimate_origin (const_tree);
extern tree get_binfo_at_offset (tree, long, tree);
extern bool virtual_method_call_p (tree);
extern tree obj_type_ref_class (tree ref);
extern bool types_same_for_odr (tree type1, tree type2);
extern bool contains_bitfld_component_ref_p (const_tree);
extern bool type_in_anonymous_namespace_p (tree);
extern bool block_may_fallthru (const_tree);
extern void using_eh_for_cleanups (void);
extern bool using_eh_for_cleanups_p (void);
extern const char *get_tree_code_name (enum tree_code);
extern void set_call_expr_flags (tree, int);
extern tree walk_tree_1 (tree*, walk_tree_fn, void*, struct pointer_set_t*,
    walk_tree_lh);
extern tree walk_tree_without_duplicates_1 (tree*, walk_tree_fn, void*,
         walk_tree_lh);





extern tree get_base_address (tree t);
extern tree drop_tree_overflow (tree);
extern int tree_map_base_eq (const void *, const void *);
extern unsigned int tree_map_base_hash (const void *);
extern int tree_map_base_marked_p (const void *);


extern unsigned int tree_map_hash (const void *);



extern unsigned int tree_decl_map_hash (const void *);
// # 4304 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
static inline void
init_call_expr_arg_iterator (tree exp, call_expr_arg_iterator *iter)
{
  iter->t = exp;
  iter->n = (((int)((((exp)->exp.operands[0])->int_cst.int_cst).low)) - 3);
  iter->i = 0;
}

static inline void
init_const_call_expr_arg_iterator (const_tree exp, const_call_expr_arg_iterator *iter)
{
  iter->t = exp;
  iter->n = (((int)((((exp)->exp.operands[0])->int_cst.int_cst).low)) - 3);
  iter->i = 0;
}



static inline tree
next_call_expr_arg (call_expr_arg_iterator *iter)
{
  tree result;
  if (iter->i >= iter->n)
    return (tree) __null;
  result = (((iter->t))->exp.operands[(iter->i) + 3]);
  iter->i++;
  return result;
}

static inline const_tree
next_const_call_expr_arg (const_call_expr_arg_iterator *iter)
{
  const_tree result;
  if (iter->i >= iter->n)
    return (tree) __null;
  result = (((iter->t))->exp.operands[(iter->i) + 3]);
  iter->i++;
  return result;
}





static inline tree
first_call_expr_arg (tree exp, call_expr_arg_iterator *iter)
{
  init_call_expr_arg_iterator (exp, iter);
  return next_call_expr_arg (iter);
}

static inline const_tree
first_const_call_expr_arg (const_tree exp, const_call_expr_arg_iterator *iter)
{
  init_const_call_expr_arg_iterator (exp, iter);
  return next_const_call_expr_arg (iter);
}



static inline bool
more_call_expr_args_p (const call_expr_arg_iterator *iter)
{
  return (iter->i < iter->n);
}
// # 4381 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
static inline bool
is_lang_specific (tree t)
{
  return ((enum tree_code) (t)->base.code) == LANG_TYPE || ((enum tree_code) (t)->base.code) >= ((int) LAST_AND_UNUSED_TREE_CODE);
}






static inline tree
builtin_decl_explicit (enum built_in_function fncode)
{
  ((void)(0 && ((((unsigned long) ((int)fncode) - (unsigned long) (((int)BUILT_IN_NONE) + 1) <= (unsigned long) (((int) END_BUILTINS) - 1) - (unsigned long) (((int)BUILT_IN_NONE) + 1))))));

  return builtin_info.decl[(size_t)fncode];
}


static inline tree
builtin_decl_implicit (enum built_in_function fncode)
{
  size_t uns_fncode = (size_t)fncode;
  ((void)(0 && ((((unsigned long) ((int)fncode) - (unsigned long) (((int)BUILT_IN_NONE) + 1) <= (unsigned long) (((int) END_BUILTINS) - 1) - (unsigned long) (((int)BUILT_IN_NONE) + 1))))));

  if (!builtin_info.implicit_p[uns_fncode])
    return (tree) __null;

  return builtin_info.decl[uns_fncode];
}




static inline void
set_builtin_decl (enum built_in_function fncode, tree decl, bool implicit_p)
{
  size_t ufncode = (size_t)fncode;

  ((void)(0 && ((((unsigned long) ((int)fncode) - (unsigned long) (((int)BUILT_IN_NONE) + 1) <= (unsigned long) (((int) END_BUILTINS) - 1) - (unsigned long) (((int)BUILT_IN_NONE) + 1))) && (decl != (tree) __null || !implicit_p))))
                                               ;

  builtin_info.decl[ufncode] = decl;
  builtin_info.implicit_p[ufncode] = implicit_p;
}



static inline void
set_builtin_decl_implicit_p (enum built_in_function fncode, bool implicit_p)
{
  size_t uns_fncode = (size_t)fncode;

  ((void)(0 && ((((unsigned long) ((int)fncode) - (unsigned long) (((int)BUILT_IN_NONE) + 1) <= (unsigned long) (((int) END_BUILTINS) - 1) - (unsigned long) (((int)BUILT_IN_NONE) + 1))) && builtin_info.decl[uns_fncode] != (tree) __null)))
                                                       ;

  builtin_info.implicit_p[uns_fncode] = implicit_p;
}




static inline bool
builtin_decl_explicit_p (enum built_in_function fncode)
{
  ((void)(0 && ((((unsigned long) ((int)fncode) - (unsigned long) (((int)BUILT_IN_NONE) + 1) <= (unsigned long) (((int) END_BUILTINS) - 1) - (unsigned long) (((int)BUILT_IN_NONE) + 1))))));
  return (builtin_info.decl[(size_t)fncode] != (tree) __null);
}



static inline bool
builtin_decl_implicit_p (enum built_in_function fncode)
{
  size_t uns_fncode = (size_t)fncode;

  ((void)(0 && ((((unsigned long) ((int)fncode) - (unsigned long) (((int)BUILT_IN_NONE) + 1) <= (unsigned long) (((int) END_BUILTINS) - 1) - (unsigned long) (((int)BUILT_IN_NONE) + 1))))));
  return (builtin_info.decl[uns_fncode] != (tree) __null
   && builtin_info.implicit_p[uns_fncode]);
}




static inline bool
is_global_var (const_tree t)
{
  return (((t)->base.static_flag) || ((t)->decl_common.decl_flag_1));
}





static inline bool
may_be_aliased (const_tree var)
{
  return (((enum tree_code) (var)->base.code) != CONST_DECL
   && (((var)->base.public_flag)
       || ((var)->decl_common.decl_flag_1)
       || ((var)->base.addressable_flag))
   && !((((var)->base.static_flag) || ((var)->base.public_flag) || ((var)->decl_common.decl_flag_1))
        && ((((var)->base.readonly_flag)
      && !((((var)->typed.type))->type_common.needs_constructing_flag))
     || (((enum tree_code) (var)->base.code) == VAR_DECL
         && ((var)->base.nothrow_flag)))));
}


static inline struct cl_optimization *
opts_for_fn (const_tree fndecl)
{
  tree fn_opts = ((fndecl)->function_decl.function_specific_optimization);
  if (fn_opts == (tree) __null)
    fn_opts = global_trees[TI_OPTIMIZATION_DEFAULT];
  return (&(fn_opts)->optimization.opts);
}
// # 4531 "/usr/lib/gcc/x86_64-linux-gnu/4.9/plugin/include/tree.h"
extern void set_decl_rtl (tree, rtx);
extern bool complete_ctor_at_level_p (const_tree, long, const_tree);



extern tree array_ref_up_bound (tree);

extern tree build_personality_function (const char *);




extern tree get_inner_reference (tree, long *, long *,
     tree *, enum machine_mode *, int *, int *,
     bool);



extern tree array_ref_low_bound (tree);




extern bool force_folding_builtin_constant_p;

extern bool avoid_folding_inline_builtin (tree);
extern tree fold_call_expr (location_t, tree, bool);
extern tree fold_builtin_fputs (location_t, tree, tree, bool, bool, tree);
extern tree fold_builtin_strcpy (location_t, tree, tree, tree, tree);
extern tree fold_builtin_strncpy (location_t, tree, tree, tree, tree, tree);
extern tree fold_builtin_strcat (location_t, tree, tree, tree);
extern tree fold_builtin_memory_chk (location_t, tree, tree, tree, tree, tree, tree, bool,
         enum built_in_function);
extern tree fold_builtin_stxcpy_chk (location_t, tree, tree, tree, tree, tree, bool,
         enum built_in_function);
extern tree fold_builtin_stxncpy_chk (location_t, tree, tree, tree, tree, tree, bool,
          enum built_in_function);
extern tree fold_builtin_expect (location_t, tree, tree, tree);
extern bool fold_builtin_next_arg (tree, bool);
extern enum built_in_function builtin_mathfn_code (const_tree);
extern tree fold_builtin_call_array (location_t, tree, tree, int, tree *);
extern tree build_call_expr_loc_array (location_t, tree, int, tree *);
extern tree build_call_expr_loc_vec (location_t, tree, vec_tree *);
extern tree build_call_expr_loc (location_t, tree, int, ...);
extern tree build_call_expr (tree, int, ...);
extern tree mathfn_built_in (tree, enum built_in_function fn);
extern tree c_strlen (tree, int);
extern tree build_string_literal (int, const char *);
extern rtx builtin_memset_read_str (void *, long, enum machine_mode);
extern bool is_builtin_fn (tree);
extern bool get_object_alignment_1 (tree, unsigned int *,
        unsigned long *);
extern unsigned int get_object_alignment (tree);
extern bool get_pointer_alignment_1 (tree, unsigned int *,
         unsigned long *);
extern unsigned int get_pointer_alignment (tree);
extern tree fold_call_stmt (gimple, bool);
extern tree gimple_fold_builtin_snprintf_chk (gimple, tree, enum built_in_function);
extern void set_builtin_user_assembler_name (tree decl, const char *asmspec);
extern bool is_simple_builtin (tree);
extern bool is_inexpensive_builtin (tree);
// # 6 "plugincpp.cpp" 2
// # 1 "plugincpp.hpp" 1

union tree_node;
typedef union tree_node *tree;
class RecordContext;
extern "C" void cpp_callbackPLUGIN_FINISH_TYPE (tree t, void *i);
extern "C" void cpp_callbackPLUGIN_START_UNIT ();
using namespace std;

