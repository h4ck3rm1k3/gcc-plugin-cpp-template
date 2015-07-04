
#include "baselink.hpp"
        TC_BASELINK aBASELINK;

void TC_BASELINK::finish_type (tree t) {
        cerr << "finish_type: BASELINK" << t << end;;
};

void TC_BASELINK::finish_decl (tree t) {
        cerr << "finish_decl: BASELINK" << t << end;;
};

void TC_BASELINK::finish_unit (tree t) {
        cerr << "finish_unit: BASELINK" << t << end;;
};

