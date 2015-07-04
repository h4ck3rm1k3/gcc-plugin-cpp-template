
#include "tcwrapper.hpp"
class TC_C_MAYBE_CONST_EXPR : public TCWrapper<C_MAYBE_CONST_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
