
#include "expr_stmt.hpp"
TC_EXPR_STMT aEXPR_STMT;

void
TC_EXPR_STMT::finish_type (tree t)
{
  cerr << "finish_type: EXPR_STMT" << t << endl;
};

void
TC_EXPR_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: EXPR_STMT" << t << endl;
};

void
TC_EXPR_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: EXPR_STMT" << t << endl;
};
