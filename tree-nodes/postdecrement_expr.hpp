
#include "tcwrapper.hpp"
class TC_POSTDECREMENT_EXPR : public TCWrapper<POSTDECREMENT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
