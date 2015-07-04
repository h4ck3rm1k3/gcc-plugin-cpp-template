
#include "tcwrapper.hpp"
class TC_VIEW_CONVERT_EXPR : public TCWrapper<VIEW_CONVERT_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
