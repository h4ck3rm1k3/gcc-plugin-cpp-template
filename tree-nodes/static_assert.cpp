
#include "static_assert.hpp"
        TC_STATIC_ASSERT aSTATIC_ASSERT;

void TC_STATIC_ASSERT::finish_type (tree t) {
        cerr << "finish_type: STATIC_ASSERT" << t << endl;
};

void TC_STATIC_ASSERT::finish_decl (tree t) {
        cerr << "finish_decl: STATIC_ASSERT" << t << endl;
};

void TC_STATIC_ASSERT::finish_unit (tree t) {
        cerr << "finish_unit: STATIC_ASSERT" << t << endl;
};

