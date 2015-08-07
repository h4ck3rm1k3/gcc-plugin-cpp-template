
#include "negate_expr.hpp"
TC_NEGATE_EXPR aNEGATE_EXPR;

void
TC_NEGATE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: NEGATE_EXPR" << t << endl;
};

void
TC_NEGATE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: NEGATE_EXPR" << t << endl;
};

void
TC_NEGATE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: NEGATE_EXPR" << t << endl;
};
