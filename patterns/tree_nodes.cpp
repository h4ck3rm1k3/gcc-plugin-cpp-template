// taken from gcc/gcc/tree.c
/* Language-independent node constructors for parse phase of GNU compiler.
   Copyright (C) 1987-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file contains the low level primitives for operating on tree nodes,
   including allocation, list operations, interning of identifiers,
   construction of data type nodes and statement nodes,
   and construction of type conversion nodes.  It also contains
   tables index by tree code that describe how to take apart
   nodes of that code.

   It is intended to be language-independent but can occasionally
   calls language-dependent routines.  */

#include <assert.h>
#include <fstream>
#include <iostream>
#include "iso_tree_node.hpp"
#include <stddef.h>

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

void gcc_unreachable(){}

/* Compute the number of bytes occupied by a tree with code CODE.
   This function cannot be used for nodes that have variable sizes,
   including TREE_VEC, INTEGER_CST, STRING_CST, and CALL_EXPR.  */
size_t
tree_code_size (enum tree_code code)
{
  switch (TREE_CODE_CLASS (code))
    {
    case tcc_declaration:  /* A decl node */
      {
	switch (code)
	  {
	  case FIELD_DECL:
	    return sizeof (struct tree_field_decl);
	  case PARM_DECL:
	    return sizeof (struct tree_parm_decl);
	  case VAR_DECL:
	    return sizeof (struct tree_var_decl);
	  case LABEL_DECL:
	    return sizeof (struct tree_label_decl);
	  case RESULT_DECL:
	    return sizeof (struct tree_result_decl);
	  case CONST_DECL:
	    return sizeof (struct tree_const_decl);
	  case TYPE_DECL:
	    return sizeof (struct tree_type_decl);
	  case FUNCTION_DECL:
	    return sizeof (struct tree_function_decl);
	  case DEBUG_EXPR_DECL:
	    return sizeof (struct tree_decl_with_rtl);
	  case TRANSLATION_UNIT_DECL:
	    return sizeof (struct tree_translation_unit_decl);
	  case NAMESPACE_DECL:
	  case IMPORTED_DECL:
	  case NAMELIST_DECL:
	    return sizeof (struct tree_decl_non_common);
	  default:
	    assert(0);
	    //return lang_hooks.tree_size (code);
	  }
      }

    case tcc_type:  /* a type node */
      return sizeof (struct tree_type_non_common);

    case tcc_reference:   /* a reference */
    case tcc_expression:  /* an expression */
    case tcc_statement:   /* an expression with side effects */
    case tcc_comparison:  /* a comparison expression */
    case tcc_unary:       /* a unary arithmetic expression */
    case tcc_binary:      /* a binary arithmetic expression */
      return (sizeof (struct tree_exp)
	      + (TREE_CODE_LENGTH (code) - 1) * sizeof (tree));

    case tcc_constant:  /* a constant */
      switch (code)
	{
	case VOID_CST:		return sizeof (struct tree_typed);
	  //case INTEGER_CST:	gcc_unreachable ();
	case REAL_CST:		return sizeof (struct tree_real_cst);
	case FIXED_CST:		return sizeof (struct tree_fixed_cst);
	case COMPLEX_CST:	return sizeof (struct tree_complex);
	case VECTOR_CST:	return sizeof (struct tree_vector);
	  //case STRING_CST:	gcc_unreachable ();
	default:
	  //return lang_hooks.tree_size (code);
	  assert(0);
	}

    case tcc_exceptional:  /* something random, like an identifier.  */
      switch (code)
	{
	  //TODO: case IDENTIFIER_NODE:	return lang_hooks.identifier_size;
	case TREE_LIST:		return sizeof (struct tree_list);

	case ERROR_MARK:
	case PLACEHOLDER_EXPR:	return sizeof (struct tree_common);

	case TREE_VEC:
	case OMP_CLAUSE:	gcc_unreachable ();

	case SSA_NAME:		return sizeof (struct tree_ssa_name);

	case STATEMENT_LIST:	return sizeof (struct tree_statement_list);
	case BLOCK:		return sizeof (struct tree_block);
	case CONSTRUCTOR:	return sizeof (struct tree_constructor);
	case OPTIMIZATION_NODE: return sizeof (struct tree_optimization_option);
	case TARGET_OPTION_NODE: return sizeof (struct tree_target_option);

	default:
	  //return lang_hooks.tree_size (code);
	  assert(0);
	}

    default:
      gcc_unreachable ();
    }
}

/* Compute the number of bytes occupied by NODE.  This routine only
   looks at TREE_CODE, except for those nodes that have variable sizes.  */
size_t
tree_size (const_tree node)
{
  const enum tree_code code = TREE_CODE (node);
  switch (code)
    {
    case INTEGER_CST:
      return (sizeof (struct tree_int_cst)
	      + (TREE_INT_CST_EXT_NUNITS (node) - 1) * sizeof (HOST_WIDE_INT));

    case TREE_BINFO:
      return (offsetof (struct tree_binfo, base_binfos)
	      + vec<tree, va_gc>
		  ::embedded_size (BINFO_N_BASE_BINFOS (node)));

    case TREE_VEC:
      return (sizeof (struct tree_vec)
	      + (TREE_VEC_LENGTH (node) - 1) * sizeof (tree));

    case VECTOR_CST:
      return (sizeof (struct tree_vector)
	      + (TYPE_VECTOR_SUBPARTS (TREE_TYPE (node)) - 1) * sizeof (tree));

    case STRING_CST:
      return TREE_STRING_LENGTH (node) + offsetof (struct tree_string, str) + 1;

    case OMP_CLAUSE:
      return (sizeof (struct tree_omp_clause)
	      + (omp_clause_num_ops[OMP_CLAUSE_CODE (node)] - 1)
	        * sizeof (tree));

    default:
      if (TREE_CODE_CLASS (code) == tcc_vl_exp)
	return (sizeof (struct tree_exp)
		+ (VL_EXP_OPERAND_LENGTH (node) - 1) * sizeof (tree));
      else
	return tree_code_size (code);
    }
}
unsigned const char omp_clause_num_ops[] { 0 };
