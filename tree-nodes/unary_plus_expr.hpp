
#include "tcwrapper.hpp"
class TC_UNARY_PLUS_EXPR : public TCWrapper<UNARY_PLUS_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
