
#include "reference_type.hpp"
        TC_REFERENCE_TYPE aREFERENCE_TYPE;

void TC_REFERENCE_TYPE::finish_type (tree t) {
        cerr << "finish_type: REFERENCE_TYPE" << t << endl;
};

void TC_REFERENCE_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: REFERENCE_TYPE" << t << endl;
};

void TC_REFERENCE_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: REFERENCE_TYPE" << t << endl;
};

