
#include "abs_expr.hpp"
TC_ABS_EXPR aABS_EXPR;

void
TC_ABS_EXPR::finish_type (tree t)
{
  cerr << "finish_type: ABS_EXPR" << t << endl;
};

void
TC_ABS_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: ABS_EXPR" << t << endl;
};

void
TC_ABS_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: ABS_EXPR" << t << endl;
};
