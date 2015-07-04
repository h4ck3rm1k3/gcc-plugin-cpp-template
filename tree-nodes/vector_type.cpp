
#include "vector_type.hpp"
        TC_VECTOR_TYPE aVECTOR_TYPE;

void TC_VECTOR_TYPE::finish_type (tree t) {
        cerr << "finish_type: VECTOR_TYPE" << t << end;;
};

void TC_VECTOR_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: VECTOR_TYPE" << t << end;;
};

void TC_VECTOR_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: VECTOR_TYPE" << t << end;;
};

