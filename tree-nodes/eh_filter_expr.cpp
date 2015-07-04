
#include "eh_filter_expr.hpp"
        TC_EH_FILTER_EXPR aEH_FILTER_EXPR;

void TC_EH_FILTER_EXPR::finish_type (tree t) {
        cerr << "finish_type: EH_FILTER_EXPR" << t << end;;
};

void TC_EH_FILTER_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: EH_FILTER_EXPR" << t << end;;
};

void TC_EH_FILTER_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: EH_FILTER_EXPR" << t << end;;
};

