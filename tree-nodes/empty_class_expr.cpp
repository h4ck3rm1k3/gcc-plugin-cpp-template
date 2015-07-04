
#include "empty_class_expr.hpp"
        TC_EMPTY_CLASS_EXPR aEMPTY_CLASS_EXPR;

void TC_EMPTY_CLASS_EXPR::finish_type (tree t) {
        cerr << "finish_type: EMPTY_CLASS_EXPR" << t << endl;
};

void TC_EMPTY_CLASS_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: EMPTY_CLASS_EXPR" << t << endl;
};

void TC_EMPTY_CLASS_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: EMPTY_CLASS_EXPR" << t << endl;
};

