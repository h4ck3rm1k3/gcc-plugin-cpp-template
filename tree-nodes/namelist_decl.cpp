
#include "namelist_decl.hpp"
        TC_NAMELIST_DECL aNAMELIST_DECL;

void TC_NAMELIST_DECL::finish_type (tree t) {
        cerr << "finish_type: NAMELIST_DECL" << t << endl;
};

void TC_NAMELIST_DECL::finish_decl (tree t) {
        cerr << "finish_decl: NAMELIST_DECL" << t << endl;
};

void TC_NAMELIST_DECL::finish_unit (tree t) {
        cerr << "finish_unit: NAMELIST_DECL" << t << endl;
};

