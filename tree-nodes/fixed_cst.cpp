
#include "fixed_cst.hpp"
TC_FIXED_CST aFIXED_CST;

void
TC_FIXED_CST::finish_type (tree t)
{
  cerr << "finish_type: FIXED_CST" << t << endl;
};

void
TC_FIXED_CST::finish_decl (tree t)
{
  cerr << "finish_decl: FIXED_CST" << t << endl;
};

void
TC_FIXED_CST::finish_unit (tree t)
{
  cerr << "finish_unit: FIXED_CST" << t << endl;
};
