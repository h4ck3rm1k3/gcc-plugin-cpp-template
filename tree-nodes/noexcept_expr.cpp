
#include "noexcept_expr.hpp"
        TC_NOEXCEPT_EXPR aNOEXCEPT_EXPR;

void TC_NOEXCEPT_EXPR::finish_type (tree t) {
        cerr << "finish_type: NOEXCEPT_EXPR" << t << end;;
};

void TC_NOEXCEPT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: NOEXCEPT_EXPR" << t << end;;
};

void TC_NOEXCEPT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: NOEXCEPT_EXPR" << t << end;;
};

