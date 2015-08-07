
#include "oacc_host_data.hpp"
TC_OACC_HOST_DATA aOACC_HOST_DATA;

void
TC_OACC_HOST_DATA::finish_type (tree t)
{
  cerr << "finish_type: OACC_HOST_DATA" << t << endl;
};

void
TC_OACC_HOST_DATA::finish_decl (tree t)
{
  cerr << "finish_decl: OACC_HOST_DATA" << t << endl;
};

void
TC_OACC_HOST_DATA::finish_unit (tree t)
{
  cerr << "finish_unit: OACC_HOST_DATA" << t << endl;
};
