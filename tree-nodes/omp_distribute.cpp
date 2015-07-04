
#include "omp_distribute.hpp"
        TC_OMP_DISTRIBUTE aOMP_DISTRIBUTE;

void TC_OMP_DISTRIBUTE::finish_type (tree t) {
        cerr << "finish_type: OMP_DISTRIBUTE" << t << endl;
};

void TC_OMP_DISTRIBUTE::finish_decl (tree t) {
        cerr << "finish_decl: OMP_DISTRIBUTE" << t << endl;
};

void TC_OMP_DISTRIBUTE::finish_unit (tree t) {
        cerr << "finish_unit: OMP_DISTRIBUTE" << t << endl;
};

