
#include "nullptr_type.hpp"
        TC_NULLPTR_TYPE aNULLPTR_TYPE;

void TC_NULLPTR_TYPE::finish_type (tree t) {
        cerr << "finish_type: NULLPTR_TYPE" << t << end;;
};

void TC_NULLPTR_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: NULLPTR_TYPE" << t << end;;
};

void TC_NULLPTR_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: NULLPTR_TYPE" << t << end;;
};

