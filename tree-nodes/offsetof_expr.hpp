
#include "tcwrapper.hpp"
class TC_OFFSETOF_EXPR : public TCWrapper<OFFSETOF_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
