
#include "omp_taskgroup.hpp"
        TC_OMP_TASKGROUP aOMP_TASKGROUP;

void TC_OMP_TASKGROUP::finish_type (tree t) {
        cerr << "finish_type: OMP_TASKGROUP" << t << end;;
};

void TC_OMP_TASKGROUP::finish_decl (tree t) {
        cerr << "finish_decl: OMP_TASKGROUP" << t << end;;
};

void TC_OMP_TASKGROUP::finish_unit (tree t) {
        cerr << "finish_unit: OMP_TASKGROUP" << t << end;;
};

