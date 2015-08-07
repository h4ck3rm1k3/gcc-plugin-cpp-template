
#include "stmt_stmt.hpp"
TC_STMT_STMT aSTMT_STMT;

void
TC_STMT_STMT::finish_type (tree t)
{
  cerr << "finish_type: STMT_STMT" << t << endl;
};

void
TC_STMT_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: STMT_STMT" << t << endl;
};

void
TC_STMT_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: STMT_STMT" << t << endl;
};
