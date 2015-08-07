
#include "convert_expr.hpp"
TC_CONVERT_EXPR aCONVERT_EXPR;

void
TC_CONVERT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: CONVERT_EXPR" << t << endl;
};

void
TC_CONVERT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: CONVERT_EXPR" << t << endl;
};

void
TC_CONVERT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: CONVERT_EXPR" << t << endl;
};
