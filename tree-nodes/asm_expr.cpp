
#include "asm_expr.hpp"
        TC_ASM_EXPR aASM_EXPR;

void TC_ASM_EXPR::finish_type (tree t) {
        cerr << "finish_type: ASM_EXPR" << t << endl;
};

void TC_ASM_EXPR::finish_decl (tree t) {
        cerr << "finish_decl: ASM_EXPR" << t << endl;
};

void TC_ASM_EXPR::finish_unit (tree t) {
        cerr << "finish_unit: ASM_EXPR" << t << endl;
};

