
#include "using_decl.hpp"
        TC_USING_DECL aUSING_DECL;

void TC_USING_DECL::finish_type (tree t) {
        cerr << "finish_type: USING_DECL" << t << end;;
};

void TC_USING_DECL::finish_decl (tree t) {
        cerr << "finish_decl: USING_DECL" << t << end;;
};

void TC_USING_DECL::finish_unit (tree t) {
        cerr << "finish_unit: USING_DECL" << t << end;;
};

