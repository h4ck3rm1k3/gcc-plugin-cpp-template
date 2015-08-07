
#include "debug_expr_decl.hpp"
TC_DEBUG_EXPR_DECL aDEBUG_EXPR_DECL;

void
TC_DEBUG_EXPR_DECL::finish_type (tree t)
{
  cerr << "finish_type: DEBUG_EXPR_DECL" << t << endl;
};

void
TC_DEBUG_EXPR_DECL::finish_decl (tree t)
{
  cerr << "finish_decl: DEBUG_EXPR_DECL" << t << endl;
};

void
TC_DEBUG_EXPR_DECL::finish_unit (tree t)
{
  cerr << "finish_unit: DEBUG_EXPR_DECL" << t << endl;
};
