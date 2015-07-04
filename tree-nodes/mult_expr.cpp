
#include "mult_expr.hpp"
        TC_MULT_EXPR aMULT_EXPR;

void TC_MULT_EXPR::finish_type (tree t) {
        cerr << "finish_type: MULT_EXPR" << t << end;;
};

void TC_MULT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: MULT_EXPR" << t << end;;
};

void TC_MULT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: MULT_EXPR" << t << end;;
};

