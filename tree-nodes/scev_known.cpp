
#include "scev_known.hpp"
        TC_SCEV_KNOWN aSCEV_KNOWN;

void TC_SCEV_KNOWN::finish_type (tree t) {
        cerr << "finish_type: SCEV_KNOWN" << t << endl;
};

void TC_SCEV_KNOWN::finish_decl (tree t) {
        cerr << "finish_decl: SCEV_KNOWN" << t << endl;
};

void TC_SCEV_KNOWN::finish_unit (tree t) {
        cerr << "finish_unit: SCEV_KNOWN" << t << endl;
};

