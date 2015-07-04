
#include "tcwrapper.hpp"
class TC_LROTATE_EXPR : public TCWrapper<LROTATE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
