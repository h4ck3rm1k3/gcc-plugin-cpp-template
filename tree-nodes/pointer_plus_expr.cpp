
#include "pointer_plus_expr.hpp"
        TC_POINTER_PLUS_EXPR aPOINTER_PLUS_EXPR;

void TC_POINTER_PLUS_EXPR::finish_type (tree t) {
        cerr << "finish_type: POINTER_PLUS_EXPR" << t << endl;
};

void TC_POINTER_PLUS_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: POINTER_PLUS_EXPR" << t << endl;
};

void TC_POINTER_PLUS_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: POINTER_PLUS_EXPR" << t << endl;
};

