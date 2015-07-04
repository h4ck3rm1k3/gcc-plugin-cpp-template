
#include "tcwrapper.hpp"
class TC_ADDR_EXPR : public TCWrapper<ADDR_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
