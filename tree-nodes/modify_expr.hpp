
#include "tcwrapper.hpp"
class TC_MODIFY_EXPR : public TCWrapper<MODIFY_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
