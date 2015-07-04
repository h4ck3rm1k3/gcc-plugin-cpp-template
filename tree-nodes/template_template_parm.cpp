
#include "template_template_parm.hpp"
        TC_TEMPLATE_TEMPLATE_PARM aTEMPLATE_TEMPLATE_PARM;

void TC_TEMPLATE_TEMPLATE_PARM::finish_type (tree t) {
        cerr << "finish_type: TEMPLATE_TEMPLATE_PARM" << t << endl;
};

void TC_TEMPLATE_TEMPLATE_PARM::finish_decl (tree t) {
        cerr << "finish_decl: TEMPLATE_TEMPLATE_PARM" << t << endl;
};

void TC_TEMPLATE_TEMPLATE_PARM::finish_unit (tree t) {
        cerr << "finish_unit: TEMPLATE_TEMPLATE_PARM" << t << endl;
};

