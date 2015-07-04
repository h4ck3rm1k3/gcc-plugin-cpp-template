
#include "message_send_expr.hpp"
        TC_MESSAGE_SEND_EXPR aMESSAGE_SEND_EXPR;

void TC_MESSAGE_SEND_EXPR::finish_type (tree t) {
        cerr << "finish_type: MESSAGE_SEND_EXPR" << t << endl;
};

void TC_MESSAGE_SEND_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: MESSAGE_SEND_EXPR" << t << endl;
};

void TC_MESSAGE_SEND_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: MESSAGE_SEND_EXPR" << t << endl;
};

