
#include "omp_atomic_capture_new.hpp"
        TC_OMP_ATOMIC_CAPTURE_NEW aOMP_ATOMIC_CAPTURE_NEW;

void TC_OMP_ATOMIC_CAPTURE_NEW::finish_type (tree t) {
        cerr << "finish_type: OMP_ATOMIC_CAPTURE_NEW" << t << end;;
};

void TC_OMP_ATOMIC_CAPTURE_NEW::finish_decl (tree t) {
        cerr << "finish_decl: OMP_ATOMIC_CAPTURE_NEW" << t << end;;
};

void TC_OMP_ATOMIC_CAPTURE_NEW::finish_unit (tree t) {
        cerr << "finish_unit: OMP_ATOMIC_CAPTURE_NEW" << t << end;;
};

