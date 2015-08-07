
#include "new_expr.hpp"
TC_NEW_EXPR aNEW_EXPR;

void
TC_NEW_EXPR::finish_type (tree t)
{
  cerr << "finish_type: NEW_EXPR" << t << endl;
};

void
TC_NEW_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: NEW_EXPR" << t << endl;
};

void
TC_NEW_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: NEW_EXPR" << t << endl;
};
