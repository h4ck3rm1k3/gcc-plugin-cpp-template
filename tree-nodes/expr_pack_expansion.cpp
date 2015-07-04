
#include "expr_pack_expansion.hpp"
        TC_EXPR_PACK_EXPANSION aEXPR_PACK_EXPANSION;

void TC_EXPR_PACK_EXPANSION::finish_type (tree t) {
        cerr << "finish_type: EXPR_PACK_EXPANSION" << t << end;;
};

void TC_EXPR_PACK_EXPANSION::finish_decl (tree t) {
        cerr << "finish_decl: EXPR_PACK_EXPANSION" << t << end;;
};

void TC_EXPR_PACK_EXPANSION::finish_unit (tree t) {
        cerr << "finish_unit: EXPR_PACK_EXPANSION" << t << end;;
};

