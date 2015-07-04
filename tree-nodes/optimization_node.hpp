
#include "tcwrapper.hpp"
class TC_OPTIMIZATION_NODE : public TCWrapper<OPTIMIZATION_NODE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
