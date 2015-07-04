
#include "oacc_loop.hpp"
        TC_OACC_LOOP aOACC_LOOP;

void TC_OACC_LOOP::finish_type (tree t) {
        cerr << "finish_type: OACC_LOOP" << t << endl;
};

void TC_OACC_LOOP::finish_decl (tree t) {
        cerr << "finish_decl: OACC_LOOP" << t << endl;
};

void TC_OACC_LOOP::finish_unit (tree t) {
        cerr << "finish_unit: OACC_LOOP" << t << endl;
};

