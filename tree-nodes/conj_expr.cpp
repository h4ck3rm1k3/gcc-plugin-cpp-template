
#include "conj_expr.hpp"
        TC_CONJ_EXPR aCONJ_EXPR;

void TC_CONJ_EXPR::finish_type (tree t) {
        cerr << "finish_type: CONJ_EXPR" << t << endl;
};

void TC_CONJ_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: CONJ_EXPR" << t << endl;
};

void TC_CONJ_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: CONJ_EXPR" << t << endl;
};

