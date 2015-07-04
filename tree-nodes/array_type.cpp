
#include "array_type.hpp"
        TC_ARRAY_TYPE aARRAY_TYPE;

void TC_ARRAY_TYPE::finish_type (tree t) {
        cerr << "finish_type: ARRAY_TYPE" << t << endl;
};

void TC_ARRAY_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: ARRAY_TYPE" << t << endl;
};

void TC_ARRAY_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: ARRAY_TYPE" << t << endl;
};

