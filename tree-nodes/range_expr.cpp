
#include "range_expr.hpp"
TC_RANGE_EXPR aRANGE_EXPR;

void
TC_RANGE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: RANGE_EXPR" << t << endl;
};

void
TC_RANGE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: RANGE_EXPR" << t << endl;
};

void
TC_RANGE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: RANGE_EXPR" << t << endl;
};
