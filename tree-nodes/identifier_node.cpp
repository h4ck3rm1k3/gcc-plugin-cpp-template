
#include "identifier_node.hpp"
        TC_IDENTIFIER_NODE aIDENTIFIER_NODE;

void TC_IDENTIFIER_NODE::finish_type (tree t) {
        cerr << "finish_type: IDENTIFIER_NODE" << t << endl;
};

void TC_IDENTIFIER_NODE::finish_decl (tree t) {
        cerr << "finish_decl: IDENTIFIER_NODE" << t << endl;
};

void TC_IDENTIFIER_NODE::finish_unit (tree t) {
        cerr << "finish_unit: IDENTIFIER_NODE" << t << endl;
};

