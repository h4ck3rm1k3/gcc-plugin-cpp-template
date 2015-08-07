
#include "switch_expr.hpp"
TC_SWITCH_EXPR aSWITCH_EXPR;

void
TC_SWITCH_EXPR::finish_type (tree t)
{
  cerr << "finish_type: SWITCH_EXPR" << t << endl;
};

void
TC_SWITCH_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: SWITCH_EXPR" << t << endl;
};

void
TC_SWITCH_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: SWITCH_EXPR" << t << endl;
};
