
#include "member_ref.hpp"
        TC_MEMBER_REF aMEMBER_REF;

void TC_MEMBER_REF::finish_type (tree t) {
        cerr << "finish_type: MEMBER_REF" << t << endl;
};

void TC_MEMBER_REF::finish_decl (tree t) {
        cerr << "finish_decl: MEMBER_REF" << t << endl;
};

void TC_MEMBER_REF::finish_unit (tree t) {
        cerr << "finish_unit: MEMBER_REF" << t << endl;
};

