
#include "nop_expr.hpp"
TC_NOP_EXPR aNOP_EXPR;

void
TC_NOP_EXPR::finish_type (tree t)
{
  cerr << "finish_type: NOP_EXPR" << t << endl;
};

void
TC_NOP_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: NOP_EXPR" << t << endl;
};

void
TC_NOP_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: NOP_EXPR" << t << endl;
};
