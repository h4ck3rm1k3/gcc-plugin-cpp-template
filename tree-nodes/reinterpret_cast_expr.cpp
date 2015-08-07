
#include "reinterpret_cast_expr.hpp"
TC_REINTERPRET_CAST_EXPR aREINTERPRET_CAST_EXPR;

void
TC_REINTERPRET_CAST_EXPR::finish_type (tree t)
{
  cerr << "finish_type: REINTERPRET_CAST_EXPR" << t << endl;
};

void
TC_REINTERPRET_CAST_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: REINTERPRET_CAST_EXPR" << t << endl;
};

void
TC_REINTERPRET_CAST_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: REINTERPRET_CAST_EXPR" << t << endl;
};
