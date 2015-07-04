
#include "minus_expr.hpp"
        TC_MINUS_EXPR aMINUS_EXPR;

void TC_MINUS_EXPR::finish_type (tree t) {
        cerr << "finish_type: MINUS_EXPR" << t << endl;
};

void TC_MINUS_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: MINUS_EXPR" << t << endl;
};

void TC_MINUS_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: MINUS_EXPR" << t << endl;
};

