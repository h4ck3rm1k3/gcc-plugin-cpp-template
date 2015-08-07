
#include "float_mod_expr.hpp"
TC_FLOAT_MOD_EXPR aFLOAT_MOD_EXPR;

void
TC_FLOAT_MOD_EXPR::finish_type (tree t)
{
  cerr << "finish_type: FLOAT_MOD_EXPR" << t << endl;
};

void
TC_FLOAT_MOD_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: FLOAT_MOD_EXPR" << t << endl;
};

void
TC_FLOAT_MOD_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: FLOAT_MOD_EXPR" << t << endl;
};
