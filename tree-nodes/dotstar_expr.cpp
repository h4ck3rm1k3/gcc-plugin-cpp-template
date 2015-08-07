
#include "dotstar_expr.hpp"
TC_DOTSTAR_EXPR aDOTSTAR_EXPR;

void
TC_DOTSTAR_EXPR::finish_type (tree t)
{
  cerr << "finish_type: DOTSTAR_EXPR" << t << endl;
};

void
TC_DOTSTAR_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: DOTSTAR_EXPR" << t << endl;
};

void
TC_DOTSTAR_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: DOTSTAR_EXPR" << t << endl;
};
