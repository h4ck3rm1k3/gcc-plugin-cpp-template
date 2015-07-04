
#include "tcwrapper.hpp"
class TC_MINUS_NOMOD_EXPR : public TCWrapper<MINUS_NOMOD_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
