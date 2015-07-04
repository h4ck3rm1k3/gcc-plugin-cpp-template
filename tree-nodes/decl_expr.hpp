
#include "tcwrapper.hpp"
class TC_DECL_EXPR : public TCWrapper<DECL_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
