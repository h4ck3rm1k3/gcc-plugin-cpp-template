
#include "tcwrapper.hpp"
class TC_FUNCTION_TYPE : public TCWrapper<FUNCTION_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
