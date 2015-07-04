
#include "tcwrapper.hpp"
class TC_UNLE_EXPR : public TCWrapper<UNLE_EXPR> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
