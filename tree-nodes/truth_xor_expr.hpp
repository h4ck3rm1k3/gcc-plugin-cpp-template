
#include "tcwrapper.hpp"
class TC_TRUTH_XOR_EXPR : public TCWrapper<TRUTH_XOR_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
