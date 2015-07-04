
#include "statement_list.hpp"
        TC_STATEMENT_LIST aSTATEMENT_LIST;

void TC_STATEMENT_LIST::finish_type (tree t) {
        cerr << "finish_type: STATEMENT_LIST" << t << endl;
};

void TC_STATEMENT_LIST::finish_decl (tree t) {
        cerr << "finish_decl: STATEMENT_LIST" << t << endl;
};

void TC_STATEMENT_LIST::finish_unit (tree t) {
        cerr << "finish_unit: STATEMENT_LIST" << t << endl;
};

