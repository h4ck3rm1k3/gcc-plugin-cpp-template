
#include "call_expr.hpp"
        TC_CALL_EXPR aCALL_EXPR;

void TC_CALL_EXPR::finish_type (tree t) {
        cerr << "finish_type: CALL_EXPR" << t << end;;
};

void TC_CALL_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: CALL_EXPR" << t << end;;
};

void TC_CALL_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: CALL_EXPR" << t << end;;
};

