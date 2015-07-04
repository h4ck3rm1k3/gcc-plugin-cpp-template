
#include "component_ref.hpp"
        TC_COMPONENT_REF aCOMPONENT_REF;

void TC_COMPONENT_REF::finish_type (tree t) {
        cerr << "finish_type: COMPONENT_REF" << t << end;;
};

void TC_COMPONENT_REF::finish_decl (tree t) {
        cerr << "finish_decl: COMPONENT_REF" << t << end;;
};

void TC_COMPONENT_REF::finish_unit (tree t) {
        cerr << "finish_unit: COMPONENT_REF" << t << end;;
};

