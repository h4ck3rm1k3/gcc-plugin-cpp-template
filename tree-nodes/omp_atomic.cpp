
#include "omp_atomic.hpp"
TC_OMP_ATOMIC aOMP_ATOMIC;

void
TC_OMP_ATOMIC::finish_type (tree t)
{
  cerr << "finish_type: OMP_ATOMIC" << t << endl;
};

void
TC_OMP_ATOMIC::finish_decl (tree t)
{
  cerr << "finish_decl: OMP_ATOMIC" << t << endl;
};

void
TC_OMP_ATOMIC::finish_unit (tree t)
{
  cerr << "finish_unit: OMP_ATOMIC" << t << endl;
};
