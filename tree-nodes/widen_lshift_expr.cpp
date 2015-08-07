
#include "widen_lshift_expr.hpp"
TC_WIDEN_LSHIFT_EXPR aWIDEN_LSHIFT_EXPR;

void
TC_WIDEN_LSHIFT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: WIDEN_LSHIFT_EXPR" << t << endl;
};

void
TC_WIDEN_LSHIFT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: WIDEN_LSHIFT_EXPR" << t << endl;
};

void
TC_WIDEN_LSHIFT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: WIDEN_LSHIFT_EXPR" << t << endl;
};
