
#include "oacc_update.hpp"
TC_OACC_UPDATE aOACC_UPDATE;

void
TC_OACC_UPDATE::finish_type (tree t)
{
  cerr << "finish_type: OACC_UPDATE" << t << endl;
};

void
TC_OACC_UPDATE::finish_decl (tree t)
{
  cerr << "finish_decl: OACC_UPDATE" << t << endl;
};

void
TC_OACC_UPDATE::finish_unit (tree t)
{
  cerr << "finish_unit: OACC_UPDATE" << t << endl;
};
