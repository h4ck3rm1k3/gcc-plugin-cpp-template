
#include "ptrmem_cst.hpp"
TC_PTRMEM_CST aPTRMEM_CST;

void
TC_PTRMEM_CST::finish_type (tree t)
{
  cerr << "finish_type: PTRMEM_CST" << t << endl;
};

void
TC_PTRMEM_CST::finish_decl (tree t)
{
  cerr << "finish_decl: PTRMEM_CST" << t << endl;
};

void
TC_PTRMEM_CST::finish_unit (tree t)
{
  cerr << "finish_unit: PTRMEM_CST" << t << endl;
};
