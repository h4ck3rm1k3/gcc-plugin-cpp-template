
#include "save_expr.hpp"
TC_SAVE_EXPR aSAVE_EXPR;

void
TC_SAVE_EXPR::finish_type (tree t)
{
  cerr << "finish_type: SAVE_EXPR" << t << endl;
};

void
TC_SAVE_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: SAVE_EXPR" << t << endl;
};

void
TC_SAVE_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: SAVE_EXPR" << t << endl;
};
