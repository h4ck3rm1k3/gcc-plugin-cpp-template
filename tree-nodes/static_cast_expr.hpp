
#include "tcwrapper.hpp"
class TC_STATIC_CAST_EXPR : public TCWrapper<STATIC_CAST_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
