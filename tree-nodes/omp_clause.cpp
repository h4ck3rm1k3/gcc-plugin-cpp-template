
#include "omp_clause.hpp"
        TC_OMP_CLAUSE aOMP_CLAUSE;

void TC_OMP_CLAUSE::finish_type (tree t) {
        cerr << "finish_type: OMP_CLAUSE" << t << endl;
};

void TC_OMP_CLAUSE::finish_decl (tree t) {
        cerr << "finish_decl: OMP_CLAUSE" << t << endl;
};

void TC_OMP_CLAUSE::finish_unit (tree t) {
        cerr << "finish_unit: OMP_CLAUSE" << t << endl;
};

