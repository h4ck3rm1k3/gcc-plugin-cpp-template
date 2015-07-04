
#include "bit_not_expr.hpp"
        TC_BIT_NOT_EXPR aBIT_NOT_EXPR;

void TC_BIT_NOT_EXPR::finish_type (tree t) {
        cerr << "finish_type: BIT_NOT_EXPR" << t << end;;
};

void TC_BIT_NOT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: BIT_NOT_EXPR" << t << end;;
};

void TC_BIT_NOT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: BIT_NOT_EXPR" << t << end;;
};

