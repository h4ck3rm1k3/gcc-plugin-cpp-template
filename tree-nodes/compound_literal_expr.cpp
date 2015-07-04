
#include "compound_literal_expr.hpp"
        TC_COMPOUND_LITERAL_EXPR aCOMPOUND_LITERAL_EXPR;

void TC_COMPOUND_LITERAL_EXPR::finish_type (tree t) {
        cerr << "finish_type: COMPOUND_LITERAL_EXPR" << t << end;;
};

void TC_COMPOUND_LITERAL_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: COMPOUND_LITERAL_EXPR" << t << end;;
};

void TC_COMPOUND_LITERAL_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: COMPOUND_LITERAL_EXPR" << t << end;;
};

