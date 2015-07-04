
#include "tcwrapper.hpp"
class TC_DELETE_EXPR : public TCWrapper<DELETE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
