
#include "tcwrapper.hpp"
class TC_LSHIFT_EXPR : public TCWrapper<LSHIFT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
