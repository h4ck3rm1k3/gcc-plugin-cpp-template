
#include "tcwrapper.hpp"
class TC_TREE_LIST : public TCWrapper<TREE_LIST> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
