
enum tree_code {
  IDENTIFIER_NODE,
  FIELD_DECL,
  LABEL_DECL,
  VOID_TYPE,
  RECORD_TYPE,
  MAX_TREE_CODES
};

struct typed2_t {
  enum tree_code code;
};

struct typed_t {
  struct typed2_t base ;
};

union tree_node {
  struct typed_t typed;
};

const char * IDENTIFIER_POINTER (union tree_node * t);
union tree_node * DECL_NAME (union  tree_node * t);
union tree_node * TYPE_FIELDS (union  tree_node * t);
union tree_node * TYPE_NAME (union tree_node * t);
union tree_node * TREE_CHAIN (union tree_node * t);
