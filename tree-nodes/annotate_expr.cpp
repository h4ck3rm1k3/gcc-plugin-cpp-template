
#include "annotate_expr.hpp"
        TC_ANNOTATE_EXPR aANNOTATE_EXPR;

void TC_ANNOTATE_EXPR::finish_type (tree t) {
        cerr << "finish_type: ANNOTATE_EXPR" << t << end;;
};

void TC_ANNOTATE_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: ANNOTATE_EXPR" << t << end;;
};

void TC_ANNOTATE_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: ANNOTATE_EXPR" << t << end;;
};

