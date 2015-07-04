
#include "tcwrapper.hpp"
class TC_TARGET_EXPR : public TCWrapper<TARGET_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
