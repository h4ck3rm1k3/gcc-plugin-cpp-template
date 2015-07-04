
#include "truth_not_expr.hpp"
        TC_TRUTH_NOT_EXPR aTRUTH_NOT_EXPR;

void TC_TRUTH_NOT_EXPR::finish_type (tree t) {
        cerr << "finish_type: TRUTH_NOT_EXPR" << t << end;;
};

void TC_TRUTH_NOT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TRUTH_NOT_EXPR" << t << end;;
};

void TC_TRUTH_NOT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TRUTH_NOT_EXPR" << t << end;;
};

