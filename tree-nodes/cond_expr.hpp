
#include "tcwrapper.hpp"
class TC_COND_EXPR : public TCWrapper<COND_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
