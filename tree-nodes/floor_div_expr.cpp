
#include "floor_div_expr.hpp"
TC_FLOOR_DIV_EXPR aFLOOR_DIV_EXPR;

void
TC_FLOOR_DIV_EXPR::finish_type (tree t)
{
  cerr << "finish_type: FLOOR_DIV_EXPR" << t << endl;
};

void
TC_FLOOR_DIV_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: FLOOR_DIV_EXPR" << t << endl;
};

void
TC_FLOOR_DIV_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: FLOOR_DIV_EXPR" << t << endl;
};
