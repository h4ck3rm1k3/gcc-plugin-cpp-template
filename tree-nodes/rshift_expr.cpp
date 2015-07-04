
#include "rshift_expr.hpp"
        TC_RSHIFT_EXPR aRSHIFT_EXPR;

void TC_RSHIFT_EXPR::finish_type (tree t) {
        cerr << "finish_type: RSHIFT_EXPR" << t << end;;
};

void TC_RSHIFT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: RSHIFT_EXPR" << t << end;;
};

void TC_RSHIFT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: RSHIFT_EXPR" << t << end;;
};

