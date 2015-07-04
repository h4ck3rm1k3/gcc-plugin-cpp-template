
#include "tcwrapper.hpp"
class TC_LT_EXPR : public TCWrapper<LT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
