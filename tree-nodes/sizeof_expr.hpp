
#include "tcwrapper.hpp"
class TC_SIZEOF_EXPR : public TCWrapper<SIZEOF_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
