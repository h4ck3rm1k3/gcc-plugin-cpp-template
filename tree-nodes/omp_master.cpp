
#include "omp_master.hpp"
        TC_OMP_MASTER aOMP_MASTER;

void TC_OMP_MASTER::finish_type (tree t) {
        cerr << "finish_type: OMP_MASTER" << t << endl;
};

void TC_OMP_MASTER::finish_decl (tree t) {
        cerr << "finish_decl: OMP_MASTER" << t << endl;
};

void TC_OMP_MASTER::finish_unit (tree t) {
        cerr << "finish_unit: OMP_MASTER" << t << endl;
};

