
#include "omp_teams.hpp"
TC_OMP_TEAMS aOMP_TEAMS;

void
TC_OMP_TEAMS::finish_type (tree t)
{
  cerr << "finish_type: OMP_TEAMS" << t << endl;
};

void
TC_OMP_TEAMS::finish_decl (tree t)
{
  cerr << "finish_decl: OMP_TEAMS" << t << endl;
};

void
TC_OMP_TEAMS::finish_unit (tree t)
{
  cerr << "finish_unit: OMP_TEAMS" << t << endl;
};
