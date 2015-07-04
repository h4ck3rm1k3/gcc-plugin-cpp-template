
#include "tcwrapper.hpp"
class TC_TARGET_OPTION_NODE : public TCWrapper<TARGET_OPTION_NODE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
