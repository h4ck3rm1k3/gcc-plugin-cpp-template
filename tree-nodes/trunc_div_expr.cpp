
#include "trunc_div_expr.hpp"
        TC_TRUNC_DIV_EXPR aTRUNC_DIV_EXPR;

void TC_TRUNC_DIV_EXPR::finish_type (tree t) {
        cerr << "finish_type: TRUNC_DIV_EXPR" << t << endl;
};

void TC_TRUNC_DIV_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TRUNC_DIV_EXPR" << t << endl;
};

void TC_TRUNC_DIV_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TRUNC_DIV_EXPR" << t << endl;
};

