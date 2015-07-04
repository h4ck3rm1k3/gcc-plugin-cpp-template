
#include "tcwrapper.hpp"
class TC_GT_EXPR : public TCWrapper<GT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
