
#include "tcwrapper.hpp"
class TC_BIT_NOT_EXPR : public TCWrapper<BIT_NOT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
