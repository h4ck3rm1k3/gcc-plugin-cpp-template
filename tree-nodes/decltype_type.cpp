
#include "decltype_type.hpp"
        TC_DECLTYPE_TYPE aDECLTYPE_TYPE;

void TC_DECLTYPE_TYPE::finish_type (tree t) {
        cerr << "finish_type: DECLTYPE_TYPE" << t << endl;
};

void TC_DECLTYPE_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: DECLTYPE_TYPE" << t << endl;
};

void TC_DECLTYPE_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: DECLTYPE_TYPE" << t << endl;
};

