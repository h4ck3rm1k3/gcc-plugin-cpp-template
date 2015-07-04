
#include "function_decl.hpp"
        TC_FUNCTION_DECL aFUNCTION_DECL;

void TC_FUNCTION_DECL::finish_type (tree t) {
        cerr << "finish_type: FUNCTION_DECL" << t << endl;
};

void TC_FUNCTION_DECL::finish_decl (tree t) {
        cerr << "finish_decl: FUNCTION_DECL" << t << endl;
};

void TC_FUNCTION_DECL::finish_unit (tree t) {
        cerr << "finish_unit: FUNCTION_DECL" << t << endl;
};

