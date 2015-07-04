
#include "string_cst.hpp"
        TC_STRING_CST aSTRING_CST;

void TC_STRING_CST::finish_type (tree t) {
        cerr << "finish_type: STRING_CST" << t << endl;
};

void TC_STRING_CST::finish_decl (tree t) {
        cerr << "finish_decl: STRING_CST" << t << endl;
};

void TC_STRING_CST::finish_unit (tree t) {
        cerr << "finish_unit: STRING_CST" << t << endl;
};

