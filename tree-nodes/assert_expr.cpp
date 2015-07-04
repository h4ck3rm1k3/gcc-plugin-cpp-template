
#include "assert_expr.hpp"
        TC_ASSERT_EXPR aASSERT_EXPR;

void TC_ASSERT_EXPR::finish_type (tree t) {
        cerr << "finish_type: ASSERT_EXPR" << t << end;;
};

void TC_ASSERT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: ASSERT_EXPR" << t << end;;
};

void TC_ASSERT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: ASSERT_EXPR" << t << end;;
};

