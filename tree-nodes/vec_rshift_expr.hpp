
#include "tcwrapper.hpp"
class TC_VEC_RSHIFT_EXPR : public TCWrapper<VEC_RSHIFT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
