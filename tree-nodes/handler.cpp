
#include "handler.hpp"
        TC_HANDLER aHANDLER;

void TC_HANDLER::finish_type (tree t) {
        cerr << "finish_type: HANDLER" << t << endl;
};

void TC_HANDLER::finish_decl (tree t) {
        cerr << "finish_decl: HANDLER" << t << endl;
};

void TC_HANDLER::finish_unit (tree t) {
        cerr << "finish_unit: HANDLER" << t << endl;
};

