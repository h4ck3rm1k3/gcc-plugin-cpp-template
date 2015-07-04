
#include "tcwrapper.hpp"
class TC_PLACEHOLDER_EXPR : public TCWrapper<PLACEHOLDER_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
