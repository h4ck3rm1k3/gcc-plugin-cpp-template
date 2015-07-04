
#include "tcwrapper.hpp"
class TC_DOTSTAR_EXPR : public TCWrapper<DOTSTAR_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
