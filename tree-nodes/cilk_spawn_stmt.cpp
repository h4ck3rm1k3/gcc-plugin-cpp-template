
#include "cilk_spawn_stmt.hpp"
        TC_CILK_SPAWN_STMT aCILK_SPAWN_STMT;

void TC_CILK_SPAWN_STMT::finish_type (tree t) {
        cerr << "finish_type: CILK_SPAWN_STMT" << t << end;;
};

void TC_CILK_SPAWN_STMT::finish_decl (tree t) {
        cerr << "finish_decl: CILK_SPAWN_STMT" << t << end;;
};

void TC_CILK_SPAWN_STMT::finish_unit (tree t) {
        cerr << "finish_unit: CILK_SPAWN_STMT" << t << end;;
};

