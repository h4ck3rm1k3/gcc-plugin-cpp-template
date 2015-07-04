
#include "omp_critical.hpp"
        TC_OMP_CRITICAL aOMP_CRITICAL;

void TC_OMP_CRITICAL::finish_type (tree t) {
        cerr << "finish_type: OMP_CRITICAL" << t << end;;
};

void TC_OMP_CRITICAL::finish_decl (tree t) {
        cerr << "finish_decl: OMP_CRITICAL" << t << end;;
};

void TC_OMP_CRITICAL::finish_unit (tree t) {
        cerr << "finish_unit: OMP_CRITICAL" << t << end;;
};

