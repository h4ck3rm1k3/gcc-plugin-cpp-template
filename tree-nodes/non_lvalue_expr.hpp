
#include "tcwrapper.hpp"
class TC_NON_LVALUE_EXPR : public TCWrapper<NON_LVALUE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
