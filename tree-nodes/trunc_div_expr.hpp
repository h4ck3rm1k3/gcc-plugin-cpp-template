
#include "tcwrapper.hpp"
class TC_TRUNC_DIV_EXPR : public TCWrapper<TRUNC_DIV_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
