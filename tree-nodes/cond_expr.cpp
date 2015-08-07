
#include "cond_expr.hpp"
TC_COND_EXPR aCOND_EXPR;

void
TC_COND_EXPR::finish_type (tree t)
{
  cerr << "finish_type: COND_EXPR" << t << endl;
};

void
TC_COND_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: COND_EXPR" << t << endl;
};

void
TC_COND_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: COND_EXPR" << t << endl;
};
