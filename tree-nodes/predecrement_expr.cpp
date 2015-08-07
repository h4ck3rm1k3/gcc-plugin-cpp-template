
#include "predecrement_expr.hpp"
TC_PREDECREMENT_EXPR aPREDECREMENT_EXPR;

void
TC_PREDECREMENT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: PREDECREMENT_EXPR" << t << endl;
};

void
TC_PREDECREMENT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: PREDECREMENT_EXPR" << t << endl;
};

void
TC_PREDECREMENT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: PREDECREMENT_EXPR" << t << endl;
};
