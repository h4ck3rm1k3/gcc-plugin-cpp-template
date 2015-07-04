
#include "delete_expr.hpp"
        TC_DELETE_EXPR aDELETE_EXPR;

void TC_DELETE_EXPR::finish_type (tree t) {
        cerr << "finish_type: DELETE_EXPR" << t << end;;
};

void TC_DELETE_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: DELETE_EXPR" << t << end;;
};

void TC_DELETE_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: DELETE_EXPR" << t << end;;
};

