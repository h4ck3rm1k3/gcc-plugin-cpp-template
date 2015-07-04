
#include "modify_expr.hpp"
        TC_MODIFY_EXPR aMODIFY_EXPR;

void TC_MODIFY_EXPR::finish_type (tree t) {
        cerr << "finish_type: MODIFY_EXPR" << t << end;;
};

void TC_MODIFY_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: MODIFY_EXPR" << t << end;;
};

void TC_MODIFY_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: MODIFY_EXPR" << t << end;;
};

