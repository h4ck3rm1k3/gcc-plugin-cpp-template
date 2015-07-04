
#include "oacc_data.hpp"
        TC_OACC_DATA aOACC_DATA;

void TC_OACC_DATA::finish_type (tree t) {
        cerr << "finish_type: OACC_DATA" << t << endl;
};

void TC_OACC_DATA::finish_decl (tree t) {
        cerr << "finish_decl: OACC_DATA" << t << endl;
};

void TC_OACC_DATA::finish_unit (tree t) {
        cerr << "finish_unit: OACC_DATA" << t << endl;
};

