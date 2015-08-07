
#include "omp_target_update.hpp"
TC_OMP_TARGET_UPDATE aOMP_TARGET_UPDATE;

void
TC_OMP_TARGET_UPDATE::finish_type (tree t)
{
  cerr << "finish_type: OMP_TARGET_UPDATE" << t << endl;
};

void
TC_OMP_TARGET_UPDATE::finish_decl (tree t)
{
  cerr << "finish_decl: OMP_TARGET_UPDATE" << t << endl;
};

void
TC_OMP_TARGET_UPDATE::finish_unit (tree t)
{
  cerr << "finish_unit: OMP_TARGET_UPDATE" << t << endl;
};
