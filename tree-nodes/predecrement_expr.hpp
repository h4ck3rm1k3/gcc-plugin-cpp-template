
#include "tcwrapper.hpp"
class TC_PREDECREMENT_EXPR : public TCWrapper<PREDECREMENT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
