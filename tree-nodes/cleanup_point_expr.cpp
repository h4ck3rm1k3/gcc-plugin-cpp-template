
#include "cleanup_point_expr.hpp"
        TC_CLEANUP_POINT_EXPR aCLEANUP_POINT_EXPR;

void TC_CLEANUP_POINT_EXPR::finish_type (tree t) {
        cerr << "finish_type: CLEANUP_POINT_EXPR" << t << end;;
};

void TC_CLEANUP_POINT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: CLEANUP_POINT_EXPR" << t << end;;
};

void TC_CLEANUP_POINT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: CLEANUP_POINT_EXPR" << t << end;;
};

