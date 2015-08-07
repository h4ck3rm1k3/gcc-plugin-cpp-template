
#include "static_cast_expr.hpp"
TC_STATIC_CAST_EXPR aSTATIC_CAST_EXPR;

void
TC_STATIC_CAST_EXPR::finish_type (tree t)
{
  cerr << "finish_type: STATIC_CAST_EXPR" << t << endl;
};

void
TC_STATIC_CAST_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: STATIC_CAST_EXPR" << t << endl;
};

void
TC_STATIC_CAST_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: STATIC_CAST_EXPR" << t << endl;
};
