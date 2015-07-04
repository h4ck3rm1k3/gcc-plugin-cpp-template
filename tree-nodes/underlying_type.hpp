
#include "tcwrapper.hpp"
class TC_UNDERLYING_TYPE : public TCWrapper<UNDERLYING_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
