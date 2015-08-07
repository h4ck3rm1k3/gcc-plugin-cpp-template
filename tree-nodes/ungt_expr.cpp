
#include "ungt_expr.hpp"
TC_UNGT_EXPR aUNGT_EXPR;

void
TC_UNGT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: UNGT_EXPR" << t << endl;
};

void
TC_UNGT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: UNGT_EXPR" << t << endl;
};

void
TC_UNGT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: UNGT_EXPR" << t << endl;
};
