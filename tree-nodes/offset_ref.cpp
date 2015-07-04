
#include "offset_ref.hpp"
        TC_OFFSET_REF aOFFSET_REF;

void TC_OFFSET_REF::finish_type (tree t) {
        cerr << "finish_type: OFFSET_REF" << t << endl;
};

void TC_OFFSET_REF::finish_decl (tree t) {
        cerr << "finish_decl: OFFSET_REF" << t << endl;
};

void TC_OFFSET_REF::finish_unit (tree t) {
        cerr << "finish_unit: OFFSET_REF" << t << endl;
};

