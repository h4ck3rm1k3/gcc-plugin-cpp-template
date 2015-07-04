
#include "aggr_init_expr.hpp"
        TC_AGGR_INIT_EXPR aAGGR_INIT_EXPR;

void TC_AGGR_INIT_EXPR::finish_type (tree t) {
        cerr << "finish_type: AGGR_INIT_EXPR" << t << endl;
};

void TC_AGGR_INIT_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: AGGR_INIT_EXPR" << t << endl;
};

void TC_AGGR_INIT_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: AGGR_INIT_EXPR" << t << endl;
};

