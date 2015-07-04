
#include "omp_target.hpp"
        TC_OMP_TARGET aOMP_TARGET;

void TC_OMP_TARGET::finish_type (tree t) {
        cerr << "finish_type: OMP_TARGET" << t << endl;
};

void TC_OMP_TARGET::finish_decl (tree t) {
        cerr << "finish_decl: OMP_TARGET" << t << endl;
};

void TC_OMP_TARGET::finish_unit (tree t) {
        cerr << "finish_unit: OMP_TARGET" << t << endl;
};

