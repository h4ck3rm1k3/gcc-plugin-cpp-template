
#include "ctor_initializer.hpp"
        TC_CTOR_INITIALIZER aCTOR_INITIALIZER;

void TC_CTOR_INITIALIZER::finish_type (tree t) {
        cerr << "finish_type: CTOR_INITIALIZER" << t << endl;
};

void TC_CTOR_INITIALIZER::finish_decl (tree t) {
        cerr << "finish_decl: CTOR_INITIALIZER" << t << endl;
};

void TC_CTOR_INITIALIZER::finish_unit (tree t) {
        cerr << "finish_unit: CTOR_INITIALIZER" << t << endl;
};

