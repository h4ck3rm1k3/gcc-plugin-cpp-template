
#include "tcwrapper.hpp"
class TC_DEBUG_EXPR_DECL : public TCWrapper<DEBUG_EXPR_DECL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
