
#include "do_stmt.hpp"
TC_DO_STMT aDO_STMT;

void
TC_DO_STMT::finish_type (tree t)
{
  cerr << "finish_type: DO_STMT" << t << endl;
};

void
TC_DO_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: DO_STMT" << t << endl;
};

void
TC_DO_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: DO_STMT" << t << endl;
};
