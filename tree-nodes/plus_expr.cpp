
#include "plus_expr.hpp"
        TC_PLUS_EXPR aPLUS_EXPR;

void TC_PLUS_EXPR::finish_type (tree t) {
        cerr << "finish_type: PLUS_EXPR" << t << end;;
};

void TC_PLUS_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: PLUS_EXPR" << t << end;;
};

void TC_PLUS_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: PLUS_EXPR" << t << end;;
};

