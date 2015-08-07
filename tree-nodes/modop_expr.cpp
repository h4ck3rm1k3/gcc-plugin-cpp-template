
#include "modop_expr.hpp"
TC_MODOP_EXPR aMODOP_EXPR;

void
TC_MODOP_EXPR::finish_type (tree t)
{
  cerr << "finish_type: MODOP_EXPR" << t << endl;
};

void
TC_MODOP_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: MODOP_EXPR" << t << endl;
};

void
TC_MODOP_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: MODOP_EXPR" << t << endl;
};
