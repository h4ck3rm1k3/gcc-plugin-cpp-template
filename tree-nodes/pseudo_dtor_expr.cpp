
#include "pseudo_dtor_expr.hpp"
TC_PSEUDO_DTOR_EXPR aPSEUDO_DTOR_EXPR;

void
TC_PSEUDO_DTOR_EXPR::finish_type (tree t)
{
  cerr << "finish_type: PSEUDO_DTOR_EXPR" << t << endl;
};

void
TC_PSEUDO_DTOR_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: PSEUDO_DTOR_EXPR" << t << endl;
};

void
TC_PSEUDO_DTOR_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: PSEUDO_DTOR_EXPR" << t << endl;
};
