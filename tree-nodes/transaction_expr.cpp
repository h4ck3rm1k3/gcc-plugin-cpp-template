
#include "transaction_expr.hpp"
        TC_TRANSACTION_EXPR aTRANSACTION_EXPR;

void TC_TRANSACTION_EXPR::finish_type (tree t) {
        cerr << "finish_type: TRANSACTION_EXPR" << t << end;;
};

void TC_TRANSACTION_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: TRANSACTION_EXPR" << t << end;;
};

void TC_TRANSACTION_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: TRANSACTION_EXPR" << t << end;;
};

