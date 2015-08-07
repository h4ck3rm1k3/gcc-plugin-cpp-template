
#include "rdiv_expr.hpp"
TC_RDIV_EXPR aRDIV_EXPR;

void
TC_RDIV_EXPR::finish_type (tree t)
{
  cerr << "finish_type: RDIV_EXPR" << t << endl;
};

void
TC_RDIV_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: RDIV_EXPR" << t << endl;
};

void
TC_RDIV_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: RDIV_EXPR" << t << endl;
};
