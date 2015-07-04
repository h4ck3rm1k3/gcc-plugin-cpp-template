
#include "oacc_declare.hpp"
        TC_OACC_DECLARE aOACC_DECLARE;

void TC_OACC_DECLARE::finish_type (tree t) {
        cerr << "finish_type: OACC_DECLARE" << t << endl;
};

void TC_OACC_DECLARE::finish_decl (tree t) {
        cerr << "finish_decl: OACC_DECLARE" << t << endl;
};

void TC_OACC_DECLARE::finish_unit (tree t) {
        cerr << "finish_unit: OACC_DECLARE" << t << endl;
};

