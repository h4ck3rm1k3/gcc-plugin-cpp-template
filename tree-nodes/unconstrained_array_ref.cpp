
#include "unconstrained_array_ref.hpp"
        TC_UNCONSTRAINED_ARRAY_REF aUNCONSTRAINED_ARRAY_REF;

void TC_UNCONSTRAINED_ARRAY_REF::finish_type (tree t) {
        cerr << "finish_type: UNCONSTRAINED_ARRAY_REF" << t << endl;
};

void TC_UNCONSTRAINED_ARRAY_REF::finish_decl (tree t) {
        cerr << "finish_decl: UNCONSTRAINED_ARRAY_REF" << t << endl;
};

void TC_UNCONSTRAINED_ARRAY_REF::finish_unit (tree t) {
        cerr << "finish_unit: UNCONSTRAINED_ARRAY_REF" << t << endl;
};

