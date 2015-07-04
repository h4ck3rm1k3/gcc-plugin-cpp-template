
#include "paren_expr.hpp"
        TC_PAREN_EXPR aPAREN_EXPR;

void TC_PAREN_EXPR::finish_type (tree t) {
        cerr << "finish_type: PAREN_EXPR" << t << end;;
};

void TC_PAREN_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: PAREN_EXPR" << t << end;;
};

void TC_PAREN_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: PAREN_EXPR" << t << end;;
};

