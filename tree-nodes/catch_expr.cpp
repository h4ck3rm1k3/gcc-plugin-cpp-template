
#include "catch_expr.hpp"
TC_CATCH_EXPR aCATCH_EXPR;

void
TC_CATCH_EXPR::finish_type (tree t)
{
  cerr << "finish_type: CATCH_EXPR" << t << endl;
};

void
TC_CATCH_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: CATCH_EXPR" << t << endl;
};

void
TC_CATCH_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: CATCH_EXPR" << t << endl;
};
