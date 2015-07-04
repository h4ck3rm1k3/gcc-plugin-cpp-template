
#include "throw_expr.hpp"
        TC_THROW_EXPR aTHROW_EXPR;

void TC_THROW_EXPR::finish_type (tree t) {
        cerr << "finish_type: THROW_EXPR" << t << endl;
};

void TC_THROW_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: THROW_EXPR" << t << endl;
};

void TC_THROW_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: THROW_EXPR" << t << endl;
};

