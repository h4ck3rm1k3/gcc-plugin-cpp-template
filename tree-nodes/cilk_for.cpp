
#include "cilk_for.hpp"
        TC_CILK_FOR aCILK_FOR;

void TC_CILK_FOR::finish_type (tree t) {
        cerr << "finish_type: CILK_FOR" << t << endl;
};

void TC_CILK_FOR::finish_decl (tree t) {
        cerr << "finish_decl: CILK_FOR" << t << endl;
};

void TC_CILK_FOR::finish_unit (tree t) {
        cerr << "finish_unit: CILK_FOR" << t << endl;
};

