
#include "range_for_stmt.hpp"
        TC_RANGE_FOR_STMT aRANGE_FOR_STMT;

void TC_RANGE_FOR_STMT::finish_type (tree t) {
        cerr << "finish_type: RANGE_FOR_STMT" << t << end;;
};

void TC_RANGE_FOR_STMT::finish_decl (tree t) {
        cerr << "finish_decl: RANGE_FOR_STMT" << t << end;;
};

void TC_RANGE_FOR_STMT::finish_unit (tree t) {
        cerr << "finish_unit: RANGE_FOR_STMT" << t << end;;
};

