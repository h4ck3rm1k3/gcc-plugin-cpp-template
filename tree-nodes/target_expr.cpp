
#include "target_expr.hpp"
        TC_TARGET_EXPR aTARGET_EXPR;

void TC_TARGET_EXPR::finish_type (tree t) {
        cerr << "finish_type: TARGET_EXPR" << t << endl;
};

void TC_TARGET_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TARGET_EXPR" << t << endl;
};

void TC_TARGET_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TARGET_EXPR" << t << endl;
};

