
#include "oacc_exit_data.hpp"
TC_OACC_EXIT_DATA aOACC_EXIT_DATA;

void
TC_OACC_EXIT_DATA::finish_type (tree t)
{
  cerr << "finish_type: OACC_EXIT_DATA" << t << endl;
};

void
TC_OACC_EXIT_DATA::finish_decl (tree t)
{
  cerr << "finish_decl: OACC_EXIT_DATA" << t << endl;
};

void
TC_OACC_EXIT_DATA::finish_unit (tree t)
{
  cerr << "finish_unit: OACC_EXIT_DATA" << t << endl;
};
