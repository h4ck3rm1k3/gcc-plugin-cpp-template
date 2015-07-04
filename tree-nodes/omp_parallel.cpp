
#include "omp_parallel.hpp"
        TC_OMP_PARALLEL aOMP_PARALLEL;

void TC_OMP_PARALLEL::finish_type (tree t) {
        cerr << "finish_type: OMP_PARALLEL" << t << end;;
};

void TC_OMP_PARALLEL::finish_decl (tree t) {
        cerr << "finish_decl: OMP_PARALLEL" << t << end;;
};

void TC_OMP_PARALLEL::finish_unit (tree t) {
        cerr << "finish_unit: OMP_PARALLEL" << t << end;;
};

