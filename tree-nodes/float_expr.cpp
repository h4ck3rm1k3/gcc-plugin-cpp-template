
#include "float_expr.hpp"
        TC_FLOAT_EXPR aFLOAT_EXPR;

void TC_FLOAT_EXPR::finish_type (tree t) {
        cerr << "finish_type: FLOAT_EXPR" << t << endl;
};

void TC_FLOAT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: FLOAT_EXPR" << t << endl;
};

void TC_FLOAT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: FLOAT_EXPR" << t << endl;
};

