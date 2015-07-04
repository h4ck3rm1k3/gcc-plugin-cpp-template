
#include "tcwrapper.hpp"
class TC_VEC_NEW_EXPR : public TCWrapper<VEC_NEW_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
