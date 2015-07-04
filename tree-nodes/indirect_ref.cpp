
#include "indirect_ref.hpp"
        TC_INDIRECT_REF aINDIRECT_REF;

void TC_INDIRECT_REF::finish_type (tree t) {
        cerr << "finish_type: INDIRECT_REF" << t << endl;
};

void TC_INDIRECT_REF::finish_decl (tree t) {
        cerr << "finish_decl: INDIRECT_REF" << t << endl;
};

void TC_INDIRECT_REF::finish_unit (tree t) {
        cerr << "finish_unit: INDIRECT_REF" << t << endl;
};

