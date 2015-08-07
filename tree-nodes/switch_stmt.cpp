
#include "switch_stmt.hpp"
TC_SWITCH_STMT aSWITCH_STMT;

void
TC_SWITCH_STMT::finish_type (tree t)
{
  cerr << "finish_type: SWITCH_STMT" << t << endl;
};

void
TC_SWITCH_STMT::finish_decl (tree t)
{
  cerr << "finish_decl: SWITCH_STMT" << t << endl;
};

void
TC_SWITCH_STMT::finish_unit (tree t)
{
  cerr << "finish_unit: SWITCH_STMT" << t << endl;
};
