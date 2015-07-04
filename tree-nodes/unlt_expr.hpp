
#include "tcwrapper.hpp"
class TC_UNLT_EXPR : public TCWrapper<UNLT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
