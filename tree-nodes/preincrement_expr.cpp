
#include "preincrement_expr.hpp"
TC_PREINCREMENT_EXPR aPREINCREMENT_EXPR;

void
TC_PREINCREMENT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: PREINCREMENT_EXPR" << t << endl;
};

void
TC_PREINCREMENT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: PREINCREMENT_EXPR" << t << endl;
};

void
TC_PREINCREMENT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: PREINCREMENT_EXPR" << t << endl;
};
