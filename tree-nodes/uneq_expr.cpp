
#include "uneq_expr.hpp"
TC_UNEQ_EXPR aUNEQ_EXPR;

void
TC_UNEQ_EXPR::finish_type (tree t)
{
  cerr << "finish_type: UNEQ_EXPR" << t << endl;
};

void
TC_UNEQ_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: UNEQ_EXPR" << t << endl;
};

void
TC_UNEQ_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: UNEQ_EXPR" << t << endl;
};
