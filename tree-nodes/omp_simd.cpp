
#include "omp_simd.hpp"
        TC_OMP_SIMD aOMP_SIMD;

void TC_OMP_SIMD::finish_type (tree t) {
        cerr << "finish_type: OMP_SIMD" << t << endl;
};

void TC_OMP_SIMD::finish_decl (tree t) {
        cerr << "finish_decl: OMP_SIMD" << t << endl;
};

void TC_OMP_SIMD::finish_unit (tree t) {
        cerr << "finish_unit: OMP_SIMD" << t << endl;
};

