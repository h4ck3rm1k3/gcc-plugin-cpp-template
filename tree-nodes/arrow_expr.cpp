
#include "arrow_expr.hpp"
TC_ARROW_EXPR aARROW_EXPR;

void
TC_ARROW_EXPR::finish_type (tree t)
{
  cerr << "finish_type: ARROW_EXPR" << t << endl;
};

void
TC_ARROW_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: ARROW_EXPR" << t << endl;
};

void
TC_ARROW_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: ARROW_EXPR" << t << endl;
};
