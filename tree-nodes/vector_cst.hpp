
#include "tcwrapper.hpp"
class TC_VECTOR_CST : public TCWrapper<VECTOR_CST> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
