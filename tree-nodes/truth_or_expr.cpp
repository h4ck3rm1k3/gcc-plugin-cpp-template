
#include "truth_or_expr.hpp"
        TC_TRUTH_OR_EXPR aTRUTH_OR_EXPR;

void TC_TRUTH_OR_EXPR::finish_type (tree t) {
        cerr << "finish_type: TRUTH_OR_EXPR" << t << endl;
};

void TC_TRUTH_OR_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TRUTH_OR_EXPR" << t << endl;
};

void TC_TRUTH_OR_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TRUTH_OR_EXPR" << t << endl;
};

