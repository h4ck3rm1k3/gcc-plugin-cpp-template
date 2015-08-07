
#include "template_decl.hpp"
TC_TEMPLATE_DECL aTEMPLATE_DECL;

void
TC_TEMPLATE_DECL::finish_type (tree t)
{
  cerr << "finish_type: TEMPLATE_DECL" << t << endl;
};

void
TC_TEMPLATE_DECL::finish_decl (tree t)
{
  cerr << "finish_decl: TEMPLATE_DECL" << t << endl;
};

void
TC_TEMPLATE_DECL::finish_unit (tree t)
{
  cerr << "finish_unit: TEMPLATE_DECL" << t << endl;
};
