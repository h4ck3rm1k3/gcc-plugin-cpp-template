
#include "exit_expr.hpp"
TC_EXIT_EXPR aEXIT_EXPR;

void
TC_EXIT_EXPR::finish_type (tree t)
{
  cerr << "finish_type: EXIT_EXPR" << t << endl;
};

void
TC_EXIT_EXPR::finish_decl (tree t)
{
  cerr << "finish_decl: EXIT_EXPR" << t << endl;
};

void
TC_EXIT_EXPR::finish_unit (tree t)
{
  cerr << "finish_unit: EXIT_EXPR" << t << endl;
};
