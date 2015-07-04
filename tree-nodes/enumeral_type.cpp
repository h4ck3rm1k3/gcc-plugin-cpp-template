
#include "enumeral_type.hpp"

TC_ENUMERAL_TYPE aENUMERAL_TYPE;

void TC_ENUMERAL_TYPE::finish_type (tree t) {
  cerr << "finish_type: ENUMERAL_TYPE" << t << endl;
  cerr << "ENUM";
  while (t) {      
    ProcEnum(t).resolve();
    t = TREE_CHAIN(t);
  }
}

void TC_ENUMERAL_TYPE::finish_decl (tree t) {
        cerr << "finish_decl: ENUMERAL_TYPE" << t << endl;
};

void TC_ENUMERAL_TYPE::finish_unit (tree t) {
        cerr << "finish_unit: ENUMERAL_TYPE" << t << endl;
};

