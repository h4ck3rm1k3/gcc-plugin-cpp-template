
#include "ne_expr.hpp"
TC_NE_EXPR aNE_EXPR;

void
TC_NE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: NE_EXPR" << t << endl;
};

void
TC_NE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: NE_EXPR" << t << endl;
};

void
TC_NE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: NE_EXPR" << t << endl;
};
