
#include "urshift_expr.hpp"
        TC_URSHIFT_EXPR aURSHIFT_EXPR;

void TC_URSHIFT_EXPR::finish_type (tree t) {
        cerr << "finish_type: URSHIFT_EXPR" << t << endl;
};

void TC_URSHIFT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: URSHIFT_EXPR" << t << endl;
};

void TC_URSHIFT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: URSHIFT_EXPR" << t << endl;
};

