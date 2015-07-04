
#include "for_stmt.hpp"
        TC_FOR_STMT aFOR_STMT;

void TC_FOR_STMT::finish_type (tree t) {
        cerr << "finish_type: FOR_STMT" << t << endl;
};

void TC_FOR_STMT::finish_decl (tree t) {
        cerr << "finish_decl: FOR_STMT" << t << endl;
};

void TC_FOR_STMT::finish_unit (tree t) {
        cerr << "finish_unit: FOR_STMT" << t << endl;
};

