
#include "unlt_expr.hpp"
TC_UNLT_EXPR aUNLT_EXPR;

void
TC_UNLT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: UNLT_EXPR" << t << endl;
};

void
TC_UNLT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: UNLT_EXPR" << t << endl;
};

void
TC_UNLT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: UNLT_EXPR" << t << endl;
};
