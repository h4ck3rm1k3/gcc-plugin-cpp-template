
#include "try_block.hpp"
        TC_TRY_BLOCK aTRY_BLOCK;

void TC_TRY_BLOCK::finish_type (tree t) {
        cerr << "finish_type: TRY_BLOCK" << t << endl;
};

void TC_TRY_BLOCK::finish_decl (tree t) {
        cerr << "finish_decl: TRY_BLOCK" << t << endl;
};

void TC_TRY_BLOCK::finish_unit (tree t) {
        cerr << "finish_unit: TRY_BLOCK" << t << endl;
};

