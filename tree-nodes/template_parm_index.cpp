
#include "template_parm_index.hpp"
TC_TEMPLATE_PARM_INDEX aTEMPLATE_PARM_INDEX;

void
TC_TEMPLATE_PARM_INDEX::finish_type (tree t)
{
  cerr << "finish_type: TEMPLATE_PARM_INDEX" << t << endl;
};

void
TC_TEMPLATE_PARM_INDEX::finish_decl (tree t)
{
  cerr << "finish_decl: TEMPLATE_PARM_INDEX" << t << endl;
};

void
TC_TEMPLATE_PARM_INDEX::finish_unit (tree t)
{
  cerr << "finish_unit: TEMPLATE_PARM_INDEX" << t << endl;
};
