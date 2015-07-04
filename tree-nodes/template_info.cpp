
#include "template_info.hpp"
        TC_TEMPLATE_INFO aTEMPLATE_INFO;

void TC_TEMPLATE_INFO::finish_type (tree t) {
        cerr << "finish_type: TEMPLATE_INFO" << t << end;;
};

void TC_TEMPLATE_INFO::finish_decl (tree t) {
        cerr << "finish_decl: TEMPLATE_INFO" << t << end;;
};

void TC_TEMPLATE_INFO::finish_unit (tree t) {
        cerr << "finish_unit: TEMPLATE_INFO" << t << end;;
};

