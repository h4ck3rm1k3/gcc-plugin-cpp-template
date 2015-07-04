
#include "tcwrapper.hpp"
class TC_INTEGER_CST : public TCWrapper<INTEGER_CST> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
