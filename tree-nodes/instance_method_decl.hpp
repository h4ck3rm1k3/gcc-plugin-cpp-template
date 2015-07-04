
#include "tcwrapper.hpp"
class TC_INSTANCE_METHOD_DECL : public TCWrapper<INSTANCE_METHOD_DECL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
