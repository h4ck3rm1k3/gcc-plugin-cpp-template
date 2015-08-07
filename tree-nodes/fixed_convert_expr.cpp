
#include "fixed_convert_expr.hpp"
TC_FIXED_CONVERT_EXPR aFIXED_CONVERT_EXPR;

void
TC_FIXED_CONVERT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: FIXED_CONVERT_EXPR" << t << endl;
};

void
TC_FIXED_CONVERT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: FIXED_CONVERT_EXPR" << t << endl;
};

void
TC_FIXED_CONVERT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: FIXED_CONVERT_EXPR" << t << endl;
};
