
#include "tcwrapper.hpp"
class TC_PAREN_EXPR : public TCWrapper<PAREN_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
