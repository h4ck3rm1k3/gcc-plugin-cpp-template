
#include "cilk_sync_stmt.hpp"
        TC_CILK_SYNC_STMT aCILK_SYNC_STMT;

void TC_CILK_SYNC_STMT::finish_type (tree t) {
        cerr << "finish_type: CILK_SYNC_STMT" << t << end;;
};

void TC_CILK_SYNC_STMT::finish_decl (tree t) {
        cerr << "finish_decl: CILK_SYNC_STMT" << t << end;;
};

void TC_CILK_SYNC_STMT::finish_unit (tree t) {
        cerr << "finish_unit: CILK_SYNC_STMT" << t << end;;
};

