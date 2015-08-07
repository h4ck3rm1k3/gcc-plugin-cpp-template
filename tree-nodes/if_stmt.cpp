
#include "if_stmt.hpp"
TC_IF_STMT aIF_STMT;

void
TC_IF_STMT::finish_type (tree t)
{
  cerr << "finish_type: IF_STMT" << t << endl;
};

void
TC_IF_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: IF_STMT" << t << endl;
};

void
TC_IF_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: IF_STMT" << t << endl;
};
