
#include "non_lvalue_expr.hpp"
TC_NON_LVALUE_EXPR aNON_LVALUE_EXPR;

void
TC_NON_LVALUE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: NON_LVALUE_EXPR" << t << endl;
};

void
TC_NON_LVALUE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: NON_LVALUE_EXPR" << t << endl;
};

void
TC_NON_LVALUE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: NON_LVALUE_EXPR" << t << endl;
};
