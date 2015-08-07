
#include "postincrement_expr.hpp"
TC_POSTINCREMENT_EXPR aPOSTINCREMENT_EXPR;

void
TC_POSTINCREMENT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: POSTINCREMENT_EXPR" << t << endl;
};

void
TC_POSTINCREMENT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: POSTINCREMENT_EXPR" << t << endl;
};

void
TC_POSTINCREMENT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: POSTINCREMENT_EXPR" << t << endl;
};
