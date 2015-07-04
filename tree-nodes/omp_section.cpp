
#include "omp_section.hpp"
        TC_OMP_SECTION aOMP_SECTION;

void TC_OMP_SECTION::finish_type (tree t) {
        cerr << "finish_type: OMP_SECTION" << t << end;;
};

void TC_OMP_SECTION::finish_decl (tree t) {
        cerr << "finish_decl: OMP_SECTION" << t << end;;
};

void TC_OMP_SECTION::finish_unit (tree t) {
        cerr << "finish_unit: OMP_SECTION" << t << end;;
};

