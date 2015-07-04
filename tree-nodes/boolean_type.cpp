
#include "boolean_type.hpp"
        TC_BOOLEAN_TYPE aBOOLEAN_TYPE;

void TC_BOOLEAN_TYPE::finish_type (tree t) {
        cerr << "finish_type: BOOLEAN_TYPE" << t << endl;
};

void TC_BOOLEAN_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: BOOLEAN_TYPE" << t << endl;
};

void TC_BOOLEAN_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: BOOLEAN_TYPE" << t << endl;
};

