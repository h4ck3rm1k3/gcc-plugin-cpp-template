
#include "continue_stmt.hpp"
        TC_CONTINUE_STMT aCONTINUE_STMT;

void TC_CONTINUE_STMT::finish_type (tree t) {
        cerr << "finish_type: CONTINUE_STMT" << t << end;;
};

void TC_CONTINUE_STMT::finish_decl (tree t) {
        cerr << "finish_decl: CONTINUE_STMT" << t << end;;
};

void TC_CONTINUE_STMT::finish_unit (tree t) {
        cerr << "finish_unit: CONTINUE_STMT" << t << end;;
};

