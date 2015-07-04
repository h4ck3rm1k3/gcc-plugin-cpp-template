
#include "tcwrapper.hpp"
class TC_LAST_AND_UNUSED_TREE_CODE : public TCWrapper<LAST_AND_UNUSED_TREE_CODE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
