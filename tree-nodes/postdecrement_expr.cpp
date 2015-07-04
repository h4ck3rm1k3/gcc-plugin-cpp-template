
#include "postdecrement_expr.hpp"
        TC_POSTDECREMENT_EXPR aPOSTDECREMENT_EXPR;

void TC_POSTDECREMENT_EXPR::finish_type (tree t) {
        cerr << "finish_type: POSTDECREMENT_EXPR" << t << endl;
};

void TC_POSTDECREMENT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: POSTDECREMENT_EXPR" << t << endl;
};

void TC_POSTDECREMENT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: POSTDECREMENT_EXPR" << t << endl;
};

