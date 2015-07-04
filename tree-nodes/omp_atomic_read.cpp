
#include "omp_atomic_read.hpp"
        TC_OMP_ATOMIC_READ aOMP_ATOMIC_READ;

void TC_OMP_ATOMIC_READ::finish_type (tree t) {
        cerr << "finish_type: OMP_ATOMIC_READ" << t << end;;
};

void TC_OMP_ATOMIC_READ::finish_decl (tree t) {
        cerr << "finish_decl: OMP_ATOMIC_READ" << t << end;;
};

void TC_OMP_ATOMIC_READ::finish_unit (tree t) {
        cerr << "finish_unit: OMP_ATOMIC_READ" << t << end;;
};

