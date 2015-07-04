
#include "cilk_simd.hpp"
        TC_CILK_SIMD aCILK_SIMD;

void TC_CILK_SIMD::finish_type (tree t) {
        cerr << "finish_type: CILK_SIMD" << t << end;;
};

void TC_CILK_SIMD::finish_decl (tree t) {
        cerr << "finish_decl: CILK_SIMD" << t << end;;
};

void TC_CILK_SIMD::finish_unit (tree t) {
        cerr << "finish_unit: CILK_SIMD" << t << end;;
};

