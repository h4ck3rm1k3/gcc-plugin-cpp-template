
#include "const_cast_expr.hpp"
        TC_CONST_CAST_EXPR aCONST_CAST_EXPR;

void TC_CONST_CAST_EXPR::finish_type (tree t) {
        cerr << "finish_type: CONST_CAST_EXPR" << t << endl;
};

void TC_CONST_CAST_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: CONST_CAST_EXPR" << t << endl;
};

void TC_CONST_CAST_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: CONST_CAST_EXPR" << t << endl;
};

