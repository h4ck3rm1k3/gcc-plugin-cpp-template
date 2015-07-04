
#include "tcwrapper.hpp"
class TC_UNGE_EXPR : public TCWrapper<UNGE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
