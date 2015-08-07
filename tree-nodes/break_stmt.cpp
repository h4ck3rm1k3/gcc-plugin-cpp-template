
#include "break_stmt.hpp"
TC_BREAK_STMT aBREAK_STMT;

void
TC_BREAK_STMT::finish_type (tree t)
{
  cerr << "finish_type: BREAK_STMT" << t << endl;
};

void
TC_BREAK_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: BREAK_STMT" << t << endl;
};

void
TC_BREAK_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: BREAK_STMT" << t << endl;
};
