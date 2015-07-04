
#include "array_ref.hpp"
        TC_ARRAY_REF aARRAY_REF;

void TC_ARRAY_REF::finish_type (tree t) {
        cerr << "finish_type: ARRAY_REF" << t << end;;
};

void TC_ARRAY_REF::finish_decl (tree t) {
        cerr << "finish_decl: ARRAY_REF" << t << end;;
};

void TC_ARRAY_REF::finish_unit (tree t) {
        cerr << "finish_unit: ARRAY_REF" << t << end;;
};

