
#include "bound_template_template_parm.hpp"
        TC_BOUND_TEMPLATE_TEMPLATE_PARM aBOUND_TEMPLATE_TEMPLATE_PARM;

void TC_BOUND_TEMPLATE_TEMPLATE_PARM::finish_type (tree t) {
        cerr << "finish_type: BOUND_TEMPLATE_TEMPLATE_PARM" << t << endl;
};

void TC_BOUND_TEMPLATE_TEMPLATE_PARM::finish_decl (tree t) {
        cerr << "finish_decl: BOUND_TEMPLATE_TEMPLATE_PARM" << t << endl;
};

void TC_BOUND_TEMPLATE_TEMPLATE_PARM::finish_unit (tree t) {
        cerr << "finish_unit: BOUND_TEMPLATE_TEMPLATE_PARM" << t << endl;
};

