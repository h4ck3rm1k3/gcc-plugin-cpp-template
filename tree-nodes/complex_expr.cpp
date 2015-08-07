
#include "complex_expr.hpp"
TC_COMPLEX_EXPR aCOMPLEX_EXPR;

void
TC_COMPLEX_EXPR::finish_type (tree t)
{
  cerr << "finish_type: COMPLEX_EXPR" << t << endl;
};

void
TC_COMPLEX_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: COMPLEX_EXPR" << t << endl;
};

void
TC_COMPLEX_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: COMPLEX_EXPR" << t << endl;
};
