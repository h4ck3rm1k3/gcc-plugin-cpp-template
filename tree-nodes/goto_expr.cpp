
#include "goto_expr.hpp"
TC_GOTO_EXPR aGOTO_EXPR;

void
TC_GOTO_EXPR::finish_type (tree t)
{
  cerr << "finish_type: GOTO_EXPR" << t << endl;
};

void
TC_GOTO_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: GOTO_EXPR" << t << endl;
};

void
TC_GOTO_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: GOTO_EXPR" << t << endl;
};
