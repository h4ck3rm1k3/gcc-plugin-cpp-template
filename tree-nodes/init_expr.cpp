
#include "init_expr.hpp"
        TC_INIT_EXPR aINIT_EXPR;

void TC_INIT_EXPR::finish_type (tree t) {
        cerr << "finish_type: INIT_EXPR" << t << end;;
};

void TC_INIT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: INIT_EXPR" << t << end;;
};

void TC_INIT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: INIT_EXPR" << t << end;;
};

