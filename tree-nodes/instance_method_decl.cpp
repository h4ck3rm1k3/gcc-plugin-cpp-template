
#include "instance_method_decl.hpp"
        TC_INSTANCE_METHOD_DECL aINSTANCE_METHOD_DECL;

void TC_INSTANCE_METHOD_DECL::finish_type (tree t) {
        cerr << "finish_type: INSTANCE_METHOD_DECL" << t << endl;
};

void TC_INSTANCE_METHOD_DECL::finish_decl (tree t) {
        cerr << "finish_decl: INSTANCE_METHOD_DECL" << t << endl;
};

void TC_INSTANCE_METHOD_DECL::finish_unit (tree t) {
        cerr << "finish_unit: INSTANCE_METHOD_DECL" << t << endl;
};

