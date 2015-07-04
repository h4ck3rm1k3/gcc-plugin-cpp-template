
#include "eh_spec_block.hpp"
        TC_EH_SPEC_BLOCK aEH_SPEC_BLOCK;

void TC_EH_SPEC_BLOCK::finish_type (tree t) {
        cerr << "finish_type: EH_SPEC_BLOCK" << t << endl;
};

void TC_EH_SPEC_BLOCK::finish_decl (tree t) {
        cerr << "finish_decl: EH_SPEC_BLOCK" << t << endl;
};

void TC_EH_SPEC_BLOCK::finish_unit (tree t) {
        cerr << "finish_unit: EH_SPEC_BLOCK" << t << endl;
};

