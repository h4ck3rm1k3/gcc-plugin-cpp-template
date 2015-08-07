
#include "omp_single.hpp"
TC_OMP_SINGLE aOMP_SINGLE;

void
TC_OMP_SINGLE::finish_type (tree t)
{
  cerr << "finish_type: OMP_SINGLE" << t << endl;
};

void
TC_OMP_SINGLE::finish_decl (tree t)
{
  cerr << "finish_decl: OMP_SINGLE" << t << endl;
};

void
TC_OMP_SINGLE::finish_unit (tree t)
{
  cerr << "finish_unit: OMP_SINGLE" << t << endl;
};
