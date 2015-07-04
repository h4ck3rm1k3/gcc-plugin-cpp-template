
#include "cast_expr.hpp"
        TC_CAST_EXPR aCAST_EXPR;

void TC_CAST_EXPR::finish_type (tree t) {
        cerr << "finish_type: CAST_EXPR" << t << end;;
};

void TC_CAST_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: CAST_EXPR" << t << end;;
};

void TC_CAST_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: CAST_EXPR" << t << end;;
};

