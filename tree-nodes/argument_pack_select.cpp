
#include "argument_pack_select.hpp"
        TC_ARGUMENT_PACK_SELECT aARGUMENT_PACK_SELECT;

void TC_ARGUMENT_PACK_SELECT::finish_type (tree t) {
        cerr << "finish_type: ARGUMENT_PACK_SELECT" << t << end;;
};

void TC_ARGUMENT_PACK_SELECT::finish_decl (tree t) {
        cerr << "finish_decl: ARGUMENT_PACK_SELECT" << t << end;;
};

void TC_ARGUMENT_PACK_SELECT::finish_unit (tree t) {
        cerr << "finish_unit: ARGUMENT_PACK_SELECT" << t << end;;
};

