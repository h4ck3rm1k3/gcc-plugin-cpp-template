
#include "predict_expr.hpp"
        TC_PREDICT_EXPR aPREDICT_EXPR;

void TC_PREDICT_EXPR::finish_type (tree t) {
        cerr << "finish_type: PREDICT_EXPR" << t << endl;
};

void TC_PREDICT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: PREDICT_EXPR" << t << endl;
};

void TC_PREDICT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: PREDICT_EXPR" << t << endl;
};

