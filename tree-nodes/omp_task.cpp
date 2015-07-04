
#include "omp_task.hpp"
        TC_OMP_TASK aOMP_TASK;

void TC_OMP_TASK::finish_type (tree t) {
        cerr << "finish_type: OMP_TASK" << t << endl;
};

void TC_OMP_TASK::finish_decl (tree t) {
        cerr << "finish_decl: OMP_TASK" << t << endl;
};

void TC_OMP_TASK::finish_unit (tree t) {
        cerr << "finish_unit: OMP_TASK" << t << endl;
};

