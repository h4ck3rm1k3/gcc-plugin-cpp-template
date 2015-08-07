
#include "lrotate_expr.hpp"
TC_LROTATE_EXPR aLROTATE_EXPR;

void
TC_LROTATE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: LROTATE_EXPR" << t << endl;
};

void
TC_LROTATE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: LROTATE_EXPR" << t << endl;
};

void
TC_LROTATE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: LROTATE_EXPR" << t << endl;
};
