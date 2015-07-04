
#include "tcwrapper.hpp"
class TC_REDUC_MAX_EXPR : public TCWrapper<REDUC_MAX_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
