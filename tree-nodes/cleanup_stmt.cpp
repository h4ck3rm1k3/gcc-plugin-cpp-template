
#include "cleanup_stmt.hpp"
        TC_CLEANUP_STMT aCLEANUP_STMT;

void TC_CLEANUP_STMT::finish_type (tree t) {
        cerr << "finish_type: CLEANUP_STMT" << t << endl;
};

void TC_CLEANUP_STMT::finish_decl (tree t) {
        cerr << "finish_decl: CLEANUP_STMT" << t << endl;
};

void TC_CLEANUP_STMT::finish_unit (tree t) {
        cerr << "finish_unit: CLEANUP_STMT" << t << endl;
};

