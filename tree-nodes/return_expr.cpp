
#include "return_expr.hpp"
        TC_RETURN_EXPR aRETURN_EXPR;

void TC_RETURN_EXPR::finish_type (tree t) {
        cerr << "finish_type: RETURN_EXPR" << t << endl;
};

void TC_RETURN_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: RETURN_EXPR" << t << endl;
};

void TC_RETURN_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: RETURN_EXPR" << t << endl;
};

