
#include "try_finally_expr.hpp"
        TC_TRY_FINALLY_EXPR aTRY_FINALLY_EXPR;

void TC_TRY_FINALLY_EXPR::finish_type (tree t) {
        cerr << "finish_type: TRY_FINALLY_EXPR" << t << end;;
};

void TC_TRY_FINALLY_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TRY_FINALLY_EXPR" << t << end;;
};

void TC_TRY_FINALLY_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TRY_FINALLY_EXPR" << t << end;;
};

