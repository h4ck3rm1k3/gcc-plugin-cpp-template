#include <fstream>
#include <iostream>
#include "iso_tree_node.hpp"

#define DEFTREECODE(SYM, NAME, TYPE, LENGTH) TYPE,
#define END_OF_BASE_TREE_CODES tcc_exceptional,

const enum tree_code_class tree_code_type[] = {
#include "all-tree.def"
};

#undef DEFTREECODE
#undef END_OF_BASE_TREE_CODES

/* Table indexed by tree code giving number of expression
   operands beyond the fixed part of the node structure.
   Not used for types or decls.  */

#define DEFTREECODE(SYM, NAME, TYPE, LENGTH) LENGTH,
#define END_OF_BASE_TREE_CODES 0,

const unsigned char tree_code_length[] = {
#include "all-tree.def"
};

#undef DEFTREECODE
#undef END_OF_BASE_TREE_CODES

/* Names of tree components.
   Used for printing out the tree and error messages.  */
#define DEFTREECODE(SYM, NAME, TYPE, LEN) NAME,
#define END_OF_BASE_TREE_CODES "@dummy",

static const char *const tree_code_name[] = {
#include "all-tree.def"
};

#undef DEFTREECODE
#undef END_OF_BASE_TREE_CODES

/* Each tree code class has an associated string representation.
   These must correspond to the tree_code_class entries.  */

const char *const tree_code_class_strings[] =
{
  "exceptional",
  "constant",
  "type",
  "declaration",
  "reference",
  "comparison",
  "unary",
  "binary",
  "statement",
  "vl_exp",
  "expression"
};

/* Statistics-gathering stuff.  */

static int tree_code_counts[MAX_TREE_CODES];
int tree_node_counts[(int) all_kinds];
int tree_node_sizes[(int) all_kinds];

/* Keep in sync with tree.h:enum tree_node_kind.  */
static const char * const tree_node_kind_names[] = {
  "decls",
  "types",
  "blocks",
  "stmts",
  "refs",
  "exprs",
  "constants",
  "identifiers",
  "vecs",
  "binfos",
  "ssa names",
  "constructors",
  "random kinds",
  "lang_decl kinds",
  "lang_type kinds",
  "omp clauses",
};

/* Wrapper for tree_code_name to ensure that tree code is valid */
const char *
get_tree_code_name (enum tree_code code)
{
  const char *invalid = "<invalid tree code>";

  if (code >= MAX_TREE_CODES)
    return invalid;

  return tree_code_name[code];
}
