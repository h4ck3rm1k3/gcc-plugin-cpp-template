
#include "tcwrapper.hpp"
class TC_RANGE_FOR_STMT : public TCWrapper<RANGE_FOR_STMT> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
