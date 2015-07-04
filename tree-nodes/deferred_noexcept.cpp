
#include "deferred_noexcept.hpp"
        TC_DEFERRED_NOEXCEPT aDEFERRED_NOEXCEPT;

void TC_DEFERRED_NOEXCEPT::finish_type (tree t) {
        cerr << "finish_type: DEFERRED_NOEXCEPT" << t << endl;
};

void TC_DEFERRED_NOEXCEPT::finish_decl (tree t) {
        cerr << "finish_decl: DEFERRED_NOEXCEPT" << t << endl;
};

void TC_DEFERRED_NOEXCEPT::finish_unit (tree t) {
        cerr << "finish_unit: DEFERRED_NOEXCEPT" << t << endl;
};

