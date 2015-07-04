
#include "tcwrapper.hpp"
class TC_REALIGN_LOAD_EXPR : public TCWrapper<REALIGN_LOAD_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
