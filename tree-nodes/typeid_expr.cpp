
#include "typeid_expr.hpp"
        TC_TYPEID_EXPR aTYPEID_EXPR;

void TC_TYPEID_EXPR::finish_type (tree t) {
        cerr << "finish_type: TYPEID_EXPR" << t << end;;
};

void TC_TYPEID_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TYPEID_EXPR" << t << end;;
};

void TC_TYPEID_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TYPEID_EXPR" << t << end;;
};

