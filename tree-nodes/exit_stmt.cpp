
#include "exit_stmt.hpp"
        TC_EXIT_STMT aEXIT_STMT;

void TC_EXIT_STMT::finish_type (tree t) {
        cerr << "finish_type: EXIT_STMT" << t << endl;
};

void TC_EXIT_STMT::finish_decl (tree t) {
        cerr << "finish_decl: EXIT_STMT" << t << endl;
};

void TC_EXIT_STMT::finish_unit (tree t) {
        cerr << "finish_unit: EXIT_STMT" << t << endl;
};

