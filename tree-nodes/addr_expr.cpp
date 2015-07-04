
#include "addr_expr.hpp"
        TC_ADDR_EXPR aADDR_EXPR;

void TC_ADDR_EXPR::finish_type (tree t) {
        cerr << "finish_type: ADDR_EXPR" << t << end;;
};

void TC_ADDR_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: ADDR_EXPR" << t << end;;
};

void TC_ADDR_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: ADDR_EXPR" << t << end;;
};

