
#include "imported_decl.hpp"
        TC_IMPORTED_DECL aIMPORTED_DECL;

void TC_IMPORTED_DECL::finish_type (tree t) {
        cerr << "finish_type: IMPORTED_DECL" << t << endl;
};

void TC_IMPORTED_DECL::finish_decl (tree t) {
        cerr << "finish_decl: IMPORTED_DECL" << t << endl;
};

void TC_IMPORTED_DECL::finish_unit (tree t) {
        cerr << "finish_unit: IMPORTED_DECL" << t << endl;
};

