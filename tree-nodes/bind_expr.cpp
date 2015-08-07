
#include "bind_expr.hpp"
TC_BIND_EXPR aBIND_EXPR;

void
TC_BIND_EXPR::finish_type (tree t)
{
  cerr << "finish_type: BIND_EXPR" << t << endl;
};

void
TC_BIND_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: BIND_EXPR" << t << endl;
};

void
TC_BIND_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: BIND_EXPR" << t << endl;
};
