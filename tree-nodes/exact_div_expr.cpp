
#include "exact_div_expr.hpp"
TC_EXACT_DIV_EXPR aEXACT_DIV_EXPR;

void
TC_EXACT_DIV_EXPR::finish_type (tree t)
{
  cerr << "finish_type: EXACT_DIV_EXPR" << t << endl;
};

void
TC_EXACT_DIV_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: EXACT_DIV_EXPR" << t << endl;
};

void
TC_EXACT_DIV_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: EXACT_DIV_EXPR" << t << endl;
};
