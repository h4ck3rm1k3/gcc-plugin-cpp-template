
#include "va_arg_expr.hpp"
        TC_VA_ARG_EXPR aVA_ARG_EXPR;

void TC_VA_ARG_EXPR::finish_type (tree t) {
        cerr << "finish_type: VA_ARG_EXPR" << t << end;;
};

void TC_VA_ARG_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: VA_ARG_EXPR" << t << end;;
};

void TC_VA_ARG_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: VA_ARG_EXPR" << t << end;;
};

