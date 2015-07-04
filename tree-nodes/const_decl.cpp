
#include "const_decl.hpp"
        TC_CONST_DECL aCONST_DECL;

void TC_CONST_DECL::finish_type (tree t) {
        cerr << "finish_type: CONST_DECL" << t << endl;
};

void TC_CONST_DECL::finish_decl (tree t) {
        cerr << "finish_decl: CONST_DECL" << t << endl;
};

void TC_CONST_DECL::finish_unit (tree t) {
  cerr << "finish_unit: CONST_DECL(";
  cerr << " Name:" << IDENTIFIER_POINTER (DECL_NAME (t));
  cerr << " Value: " << TREE_INT_CST_LOW (DECL_INITIAL (t));
  cerr << ")" << endl;
};

