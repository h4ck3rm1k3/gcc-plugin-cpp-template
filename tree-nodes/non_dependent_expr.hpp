
#include "tcwrapper.hpp"
class TC_NON_DEPENDENT_EXPR : public TCWrapper<NON_DEPENDENT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
