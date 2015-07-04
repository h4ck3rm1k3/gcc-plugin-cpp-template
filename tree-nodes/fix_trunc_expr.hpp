
#include "tcwrapper.hpp"
class TC_FIX_TRUNC_EXPR : public TCWrapper<FIX_TRUNC_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
