
#include "tcwrapper.hpp"
class TC_WIDEN_MULT_MINUS_EXPR : public TCWrapper<WIDEN_MULT_MINUS_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
