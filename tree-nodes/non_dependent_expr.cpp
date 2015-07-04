
#include "non_dependent_expr.hpp"
        TC_NON_DEPENDENT_EXPR aNON_DEPENDENT_EXPR;

void TC_NON_DEPENDENT_EXPR::finish_type (tree t) {
        cerr << "finish_type: NON_DEPENDENT_EXPR" << t << end;;
};

void TC_NON_DEPENDENT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: NON_DEPENDENT_EXPR" << t << end;;
};

void TC_NON_DEPENDENT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: NON_DEPENDENT_EXPR" << t << end;;
};

