
#include "tcwrapper.hpp"
class TC_POINTER_PLUS_EXPR : public TCWrapper<POINTER_PLUS_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
