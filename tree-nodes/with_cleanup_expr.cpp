
#include "with_cleanup_expr.hpp"
        TC_WITH_CLEANUP_EXPR aWITH_CLEANUP_EXPR;

void TC_WITH_CLEANUP_EXPR::finish_type (tree t) {
        cerr << "finish_type: WITH_CLEANUP_EXPR" << t << end;;
};

void TC_WITH_CLEANUP_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: WITH_CLEANUP_EXPR" << t << end;;
};

void TC_WITH_CLEANUP_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: WITH_CLEANUP_EXPR" << t << end;;
};

