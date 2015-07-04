
#include "omp_atomic_capture_old.hpp"
        TC_OMP_ATOMIC_CAPTURE_OLD aOMP_ATOMIC_CAPTURE_OLD;

void TC_OMP_ATOMIC_CAPTURE_OLD::finish_type (tree t) {
        cerr << "finish_type: OMP_ATOMIC_CAPTURE_OLD" << t << endl;
};

void TC_OMP_ATOMIC_CAPTURE_OLD::finish_decl (tree t) {
        cerr << "finish_decl: OMP_ATOMIC_CAPTURE_OLD" << t << endl;
};

void TC_OMP_ATOMIC_CAPTURE_OLD::finish_unit (tree t) {
        cerr << "finish_unit: OMP_ATOMIC_CAPTURE_OLD" << t << endl;
};

