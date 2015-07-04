
#include "tcwrapper.hpp"
class TC_METHOD_TYPE : public TCWrapper<METHOD_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
