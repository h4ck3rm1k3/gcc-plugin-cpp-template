
#include "target_option_node.hpp"
        TC_TARGET_OPTION_NODE aTARGET_OPTION_NODE;

void TC_TARGET_OPTION_NODE::finish_type (tree t) {
        cerr << "finish_type: TARGET_OPTION_NODE" << t << endl;
};

void TC_TARGET_OPTION_NODE::finish_decl (tree t) {
        cerr << "finish_decl: TARGET_OPTION_NODE" << t << endl;
};

void TC_TARGET_OPTION_NODE::finish_unit (tree t) {
        cerr << "finish_unit: TARGET_OPTION_NODE" << t << endl;
};

