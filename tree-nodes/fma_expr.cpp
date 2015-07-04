
#include "fma_expr.hpp"
        TC_FMA_EXPR aFMA_EXPR;

void TC_FMA_EXPR::finish_type (tree t) {
        cerr << "finish_type: FMA_EXPR" << t << end;;
};

void TC_FMA_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: FMA_EXPR" << t << end;;
};

void TC_FMA_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: FMA_EXPR" << t << end;;
};

