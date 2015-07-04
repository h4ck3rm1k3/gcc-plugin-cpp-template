
#include "tcwrapper.hpp"
class TC_IMPLICIT_CONV_EXPR : public TCWrapper<IMPLICIT_CONV_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
