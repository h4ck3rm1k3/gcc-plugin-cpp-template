
#include "while_stmt.hpp"
TC_WHILE_STMT aWHILE_STMT;

void
TC_WHILE_STMT::finish_type (tree t)
{
  cerr << "finish_type: WHILE_STMT" << t << endl;
};

void
TC_WHILE_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: WHILE_STMT" << t << endl;
};

void
TC_WHILE_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: WHILE_STMT" << t << endl;
};
