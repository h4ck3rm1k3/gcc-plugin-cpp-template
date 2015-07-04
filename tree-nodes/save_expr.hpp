
#include "tcwrapper.hpp"
class TC_SAVE_EXPR : public TCWrapper<SAVE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
