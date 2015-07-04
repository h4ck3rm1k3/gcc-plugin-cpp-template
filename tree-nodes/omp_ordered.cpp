
#include "omp_ordered.hpp"
        TC_OMP_ORDERED aOMP_ORDERED;

void TC_OMP_ORDERED::finish_type (tree t) {
        cerr << "finish_type: OMP_ORDERED" << t << end;;
};

void TC_OMP_ORDERED::finish_decl (tree t) {
        cerr << "finish_decl: OMP_ORDERED" << t << end;;
};

void TC_OMP_ORDERED::finish_unit (tree t) {
        cerr << "finish_unit: OMP_ORDERED" << t << end;;
};

