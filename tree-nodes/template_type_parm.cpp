
#include "template_type_parm.hpp"
        TC_TEMPLATE_TYPE_PARM aTEMPLATE_TYPE_PARM;

void TC_TEMPLATE_TYPE_PARM::finish_type (tree t) {
        cerr << "finish_type: TEMPLATE_TYPE_PARM" << t << endl;
};

void TC_TEMPLATE_TYPE_PARM::finish_decl (tree t) {
        cerr << "finish_decl: TEMPLATE_TYPE_PARM" << t << endl;
};

void TC_TEMPLATE_TYPE_PARM::finish_unit (tree t) {
        cerr << "finish_unit: TEMPLATE_TYPE_PARM" << t << endl;
};

