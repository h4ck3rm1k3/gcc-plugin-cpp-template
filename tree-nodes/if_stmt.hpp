
#include "tcwrapper.hpp"
class TC_IF_STMT : public TCWrapper<IF_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
