
#include "try_catch_expr.hpp"
        TC_TRY_CATCH_EXPR aTRY_CATCH_EXPR;

void TC_TRY_CATCH_EXPR::finish_type (tree t) {
        cerr << "finish_type: TRY_CATCH_EXPR" << t << endl;
};

void TC_TRY_CATCH_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TRY_CATCH_EXPR" << t << endl;
};

void TC_TRY_CATCH_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TRY_CATCH_EXPR" << t << endl;
};

