
#include "bit_field_ref.hpp"
        TC_BIT_FIELD_REF aBIT_FIELD_REF;

void TC_BIT_FIELD_REF::finish_type (tree t) {
        cerr << "finish_type: BIT_FIELD_REF" << t << end;;
};

void TC_BIT_FIELD_REF::finish_decl (tree t) {
        cerr << "finish_decl: BIT_FIELD_REF" << t << end;;
};

void TC_BIT_FIELD_REF::finish_unit (tree t) {
        cerr << "finish_unit: BIT_FIELD_REF" << t << end;;
};

