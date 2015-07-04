
#include "complex_type.hpp"
        TC_COMPLEX_TYPE aCOMPLEX_TYPE;

void TC_COMPLEX_TYPE::finish_type (tree t) {
        cerr << "finish_type: COMPLEX_TYPE" << t << endl;
};

void TC_COMPLEX_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: COMPLEX_TYPE" << t << endl;
};

void TC_COMPLEX_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: COMPLEX_TYPE" << t << endl;
};

