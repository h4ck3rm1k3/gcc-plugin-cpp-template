
#include "function_type.hpp"
        TC_FUNCTION_TYPE aFUNCTION_TYPE;

void TC_FUNCTION_TYPE::finish_type (tree t) {
        cerr << "finish_type: FUNCTION_TYPE" << t << endl;
};

void TC_FUNCTION_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: FUNCTION_TYPE" << t << endl;
};

void TC_FUNCTION_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: FUNCTION_TYPE" << t << endl;
};

