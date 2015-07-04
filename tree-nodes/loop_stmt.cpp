
#include "loop_stmt.hpp"
        TC_LOOP_STMT aLOOP_STMT;

void TC_LOOP_STMT::finish_type (tree t) {
        cerr << "finish_type: LOOP_STMT" << t << endl;
};

void TC_LOOP_STMT::finish_decl (tree t) {
        cerr << "finish_decl: LOOP_STMT" << t << endl;
};

void TC_LOOP_STMT::finish_unit (tree t) {
        cerr << "finish_unit: LOOP_STMT" << t << endl;
};

