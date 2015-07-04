
#include "constructor.hpp"
        TC_CONSTRUCTOR aCONSTRUCTOR;

void TC_CONSTRUCTOR::finish_type (tree t) {
        cerr << "finish_type: CONSTRUCTOR" << t << end;;
};

void TC_CONSTRUCTOR::finish_decl (tree t) {
        cerr << "finish_decl: CONSTRUCTOR" << t << end;;
};

void TC_CONSTRUCTOR::finish_unit (tree t) {
        cerr << "finish_unit: CONSTRUCTOR" << t << end;;
};

