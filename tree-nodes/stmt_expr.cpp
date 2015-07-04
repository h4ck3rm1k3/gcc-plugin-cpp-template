
#include "stmt_expr.hpp"
        TC_STMT_EXPR aSTMT_EXPR;

void TC_STMT_EXPR::finish_type (tree t) {
        cerr << "finish_type: STMT_EXPR" << t << endl;
};

void TC_STMT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: STMT_EXPR" << t << endl;
};

void TC_STMT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: STMT_EXPR" << t << endl;
};

