
#include "tcwrapper.hpp"
class TC_CONJ_EXPR : public TCWrapper<CONJ_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };