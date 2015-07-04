
#include "omp_sections.hpp"
        TC_OMP_SECTIONS aOMP_SECTIONS;

void TC_OMP_SECTIONS::finish_type (tree t) {
        cerr << "finish_type: OMP_SECTIONS" << t << endl;
};

void TC_OMP_SECTIONS::finish_decl (tree t) {
        cerr << "finish_decl: OMP_SECTIONS" << t << endl;
};

void TC_OMP_SECTIONS::finish_unit (tree t) {
        cerr << "finish_unit: OMP_SECTIONS" << t << endl;
};

