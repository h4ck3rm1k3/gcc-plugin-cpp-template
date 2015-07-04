
#include "dynamic_cast_expr.hpp"
        TC_DYNAMIC_CAST_EXPR aDYNAMIC_CAST_EXPR;

void TC_DYNAMIC_CAST_EXPR::finish_type (tree t) {
        cerr << "finish_type: DYNAMIC_CAST_EXPR" << t << endl;
};

void TC_DYNAMIC_CAST_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: DYNAMIC_CAST_EXPR" << t << endl;
};

void TC_DYNAMIC_CAST_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: DYNAMIC_CAST_EXPR" << t << endl;
};

