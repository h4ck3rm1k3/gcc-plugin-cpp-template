
#include "tcwrapper.hpp"
class TC_TYPE_PACK_EXPANSION : public TCWrapper<TYPE_PACK_EXPANSION> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
