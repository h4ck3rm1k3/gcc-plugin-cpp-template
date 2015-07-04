
#include "with_size_expr.hpp"
        TC_WITH_SIZE_EXPR aWITH_SIZE_EXPR;

void TC_WITH_SIZE_EXPR::finish_type (tree t) {
        cerr << "finish_type: WITH_SIZE_EXPR" << t << end;;
};

void TC_WITH_SIZE_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: WITH_SIZE_EXPR" << t << end;;
};

void TC_WITH_SIZE_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: WITH_SIZE_EXPR" << t << end;;
};

