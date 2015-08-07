
#include "minus_nomod_expr.hpp"
TC_MINUS_NOMOD_EXPR aMINUS_NOMOD_EXPR;

void
TC_MINUS_NOMOD_EXPR::finish_type (tree t)
{
  cerr << "finish_type: MINUS_NOMOD_EXPR" << t << endl;
};

void
TC_MINUS_NOMOD_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: MINUS_NOMOD_EXPR" << t << endl;
};

void
TC_MINUS_NOMOD_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: MINUS_NOMOD_EXPR" << t << endl;
};
