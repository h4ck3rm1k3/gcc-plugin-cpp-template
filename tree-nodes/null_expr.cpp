
#include "null_expr.hpp"
        TC_NULL_EXPR aNULL_EXPR;

void TC_NULL_EXPR::finish_type (tree t) {
        cerr << "finish_type: NULL_EXPR" << t << endl;
};

void TC_NULL_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: NULL_EXPR" << t << endl;
};

void TC_NULL_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: NULL_EXPR" << t << endl;
};

