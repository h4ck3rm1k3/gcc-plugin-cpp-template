
#include "offsetof_expr.hpp"
        TC_OFFSETOF_EXPR aOFFSETOF_EXPR;

void TC_OFFSETOF_EXPR::finish_type (tree t) {
        cerr << "finish_type: OFFSETOF_EXPR" << t << endl;
};

void TC_OFFSETOF_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: OFFSETOF_EXPR" << t << endl;
};

void TC_OFFSETOF_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: OFFSETOF_EXPR" << t << endl;
};

