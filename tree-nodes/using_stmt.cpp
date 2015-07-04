
#include "using_stmt.hpp"
        TC_USING_STMT aUSING_STMT;

void TC_USING_STMT::finish_type (tree t) {
        cerr << "finish_type: USING_STMT" << t << endl;
};

void TC_USING_STMT::finish_decl (tree t) {
        cerr << "finish_decl: USING_STMT" << t << endl;
};

void TC_USING_STMT::finish_unit (tree t) {
        cerr << "finish_unit: USING_STMT" << t << endl;
};

