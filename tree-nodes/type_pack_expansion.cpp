
#include "type_pack_expansion.hpp"
        TC_TYPE_PACK_EXPANSION aTYPE_PACK_EXPANSION;

void TC_TYPE_PACK_EXPANSION::finish_type (tree t) {
        cerr << "finish_type: TYPE_PACK_EXPANSION" << t << endl;
};

void TC_TYPE_PACK_EXPANSION::finish_decl (tree t) {
        cerr << "finish_decl: TYPE_PACK_EXPANSION" << t << endl;
};

void TC_TYPE_PACK_EXPANSION::finish_unit (tree t) {
        cerr << "finish_unit: TYPE_PACK_EXPANSION" << t << endl;
};

