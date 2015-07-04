
#include "oacc_enter_data.hpp"
        TC_OACC_ENTER_DATA aOACC_ENTER_DATA;

void TC_OACC_ENTER_DATA::finish_type (tree t) {
        cerr << "finish_type: OACC_ENTER_DATA" << t << endl;
};

void TC_OACC_ENTER_DATA::finish_decl (tree t) {
        cerr << "finish_decl: OACC_ENTER_DATA" << t << endl;
};

void TC_OACC_ENTER_DATA::finish_unit (tree t) {
        cerr << "finish_unit: OACC_ENTER_DATA" << t << endl;
};

