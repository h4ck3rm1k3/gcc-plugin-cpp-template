
#include "ordered_expr.hpp"
TC_ORDERED_EXPR aORDERED_EXPR;

void
TC_ORDERED_EXPR::finish_type (tree t)
{
  cerr << "finish_type: ORDERED_EXPR" << t << endl;
};

void
TC_ORDERED_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: ORDERED_EXPR" << t << endl;
};

void
TC_ORDERED_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: ORDERED_EXPR" << t << endl;
};
