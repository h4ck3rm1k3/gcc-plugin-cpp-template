
#include "label_expr.hpp"
        TC_LABEL_EXPR aLABEL_EXPR;

void TC_LABEL_EXPR::finish_type (tree t) {
        cerr << "finish_type: LABEL_EXPR" << t << endl;
};

void TC_LABEL_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: LABEL_EXPR" << t << endl;
};

void TC_LABEL_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: LABEL_EXPR" << t << endl;
};

