
#include "widen_sum_expr.hpp"
TC_WIDEN_SUM_EXPR aWIDEN_SUM_EXPR;

void
TC_WIDEN_SUM_EXPR::finish_type (tree t)
{
  cerr << "finish_type: WIDEN_SUM_EXPR" << t << endl;
};

void
TC_WIDEN_SUM_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: WIDEN_SUM_EXPR" << t << endl;
};

void
TC_WIDEN_SUM_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: WIDEN_SUM_EXPR" << t << endl;
};
