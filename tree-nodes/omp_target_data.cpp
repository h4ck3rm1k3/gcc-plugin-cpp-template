
#include "omp_target_data.hpp"
        TC_OMP_TARGET_DATA aOMP_TARGET_DATA;

void TC_OMP_TARGET_DATA::finish_type (tree t) {
        cerr << "finish_type: OMP_TARGET_DATA" << t << endl;
};

void TC_OMP_TARGET_DATA::finish_decl (tree t) {
        cerr << "finish_decl: OMP_TARGET_DATA" << t << endl;
};

void TC_OMP_TARGET_DATA::finish_unit (tree t) {
        cerr << "finish_unit: OMP_TARGET_DATA" << t << endl;
};

