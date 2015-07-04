
#include "block.hpp"
        TC_BLOCK aBLOCK;

void TC_BLOCK::finish_type (tree t) {
        cerr << "finish_type: BLOCK" << t << endl;
};

void TC_BLOCK::finish_decl (tree t) {
        cerr << "finish_decl: BLOCK" << t << endl;
};

void TC_BLOCK::finish_unit (tree t) {
        cerr << "finish_unit: BLOCK" << t << endl;
};

