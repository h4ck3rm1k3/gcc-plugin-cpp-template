
#include "complex_cst.hpp"
TC_COMPLEX_CST aCOMPLEX_CST;

void
TC_COMPLEX_CST::finish_type (tree t)
{
  cerr << "finish_type: COMPLEX_CST" << t << endl;
};

void
TC_COMPLEX_CST::finish_decl (tree t)
{
  cerr << "finish_decl: COMPLEX_CST" << t << endl;
};

void
TC_COMPLEX_CST::finish_unit (tree t)
{
  cerr << "finish_unit: COMPLEX_CST" << t << endl;
};
