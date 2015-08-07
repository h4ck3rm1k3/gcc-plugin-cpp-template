
#include "rrotate_expr.hpp"
TC_RROTATE_EXPR aRROTATE_EXPR;

void
TC_RROTATE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: RROTATE_EXPR" << t << endl;
};

void
TC_RROTATE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: RROTATE_EXPR" << t << endl;
};

void
TC_RROTATE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: RROTATE_EXPR" << t << endl;
};
