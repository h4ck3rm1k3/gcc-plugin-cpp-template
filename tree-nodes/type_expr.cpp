
#include "type_expr.hpp"
TC_TYPE_EXPR aTYPE_EXPR;

void
TC_TYPE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: TYPE_EXPR" << t << endl;
};

void
TC_TYPE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: TYPE_EXPR" << t << endl;
};

void
TC_TYPE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: TYPE_EXPR" << t << endl;
};
