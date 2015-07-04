
#include "tcwrapper.hpp"
class TC_BIND_EXPR : public TCWrapper<BIND_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
