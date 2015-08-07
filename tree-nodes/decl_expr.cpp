
#include "decl_expr.hpp"
TC_DECL_EXPR aDECL_EXPR;

void
TC_DECL_EXPR::finish_type (tree t)
{
  cerr << "finish_type: DECL_EXPR" << t << endl;
};

void
TC_DECL_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: DECL_EXPR" << t << endl;
};

void
TC_DECL_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: DECL_EXPR" << t << endl;
};
