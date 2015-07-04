
#include "tcwrapper.hpp"
class TC_WITH_CLEANUP_EXPR : public TCWrapper<WITH_CLEANUP_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
