
#include "parm_decl.hpp"
        TC_PARM_DECL aPARM_DECL;

void TC_PARM_DECL::finish_type (tree t) {
        cerr << "finish_type: PARM_DECL" << t << endl;
};

void TC_PARM_DECL::finish_decl (tree t) {
        cerr << "finish_decl: PARM_DECL" << t << endl;
};

void TC_PARM_DECL::finish_unit (tree t) {
        cerr << "finish_unit: PARM_DECL" << t << endl;
};

