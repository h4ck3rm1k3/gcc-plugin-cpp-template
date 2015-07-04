
#include "keyword_decl.hpp"
        TC_KEYWORD_DECL aKEYWORD_DECL;

void TC_KEYWORD_DECL::finish_type (tree t) {
        cerr << "finish_type: KEYWORD_DECL" << t << endl;
};

void TC_KEYWORD_DECL::finish_decl (tree t) {
        cerr << "finish_decl: KEYWORD_DECL" << t << endl;
};

void TC_KEYWORD_DECL::finish_unit (tree t) {
        cerr << "finish_unit: KEYWORD_DECL" << t << endl;
};

