
#include "tcwrapper.hpp"
class TC_VEC_WIDEN_MULT_EVEN_EXPR : public TCWrapper<VEC_WIDEN_MULT_EVEN_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
