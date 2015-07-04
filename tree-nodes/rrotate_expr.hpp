
#include "tcwrapper.hpp"
class TC_RROTATE_EXPR : public TCWrapper<RROTATE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
