
#include "tcwrapper.hpp"
class TC_CONVERT_EXPR : public TCWrapper<CONVERT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
