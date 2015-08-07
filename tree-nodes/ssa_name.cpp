
#include "ssa_name.hpp"
TC_SSA_NAME aSSA_NAME;

void
TC_SSA_NAME::finish_type (tree t)
{
  cerr << "finish_type: SSA_NAME" << t << endl;
};

void
TC_SSA_NAME::finish_decl (tree t)
{
  cerr << "finish_decl: SSA_NAME" << t << endl;
};

void
TC_SSA_NAME::finish_unit (tree t)
{
  cerr << "finish_unit: SSA_NAME" << t << endl;
};
