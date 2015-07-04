
#include "sad_expr.hpp"
        TC_SAD_EXPR aSAD_EXPR;

void TC_SAD_EXPR::finish_type (tree t) {
        cerr << "finish_type: SAD_EXPR" << t << endl;
};

void TC_SAD_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: SAD_EXPR" << t << endl;
};

void TC_SAD_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: SAD_EXPR" << t << endl;
};

