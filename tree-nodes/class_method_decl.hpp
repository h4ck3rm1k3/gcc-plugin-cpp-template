
#include "tcwrapper.hpp"
class TC_CLASS_METHOD_DECL : public TCWrapper<CLASS_METHOD_DECL> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
