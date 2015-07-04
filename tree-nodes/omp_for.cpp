
#include "omp_for.hpp"
        TC_OMP_FOR aOMP_FOR;

void TC_OMP_FOR::finish_type (tree t) {
        cerr << "finish_type: OMP_FOR" << t << end;;
};

void TC_OMP_FOR::finish_decl (tree t) {
        cerr << "finish_decl: OMP_FOR" << t << end;;
};

void TC_OMP_FOR::finish_unit (tree t) {
        cerr << "finish_unit: OMP_FOR" << t << end;;
};

