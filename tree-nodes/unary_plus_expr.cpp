
#include "unary_plus_expr.hpp"
        TC_UNARY_PLUS_EXPR aUNARY_PLUS_EXPR;

void TC_UNARY_PLUS_EXPR::finish_type (tree t) {
        cerr << "finish_type: UNARY_PLUS_EXPR" << t << endl;
};

void TC_UNARY_PLUS_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: UNARY_PLUS_EXPR" << t << endl;
};

void TC_UNARY_PLUS_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: UNARY_PLUS_EXPR" << t << endl;
};

