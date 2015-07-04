
#include "tcwrapper.hpp"
class TC_PLUS_NOMOD_EXPR : public TCWrapper<PLUS_NOMOD_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
