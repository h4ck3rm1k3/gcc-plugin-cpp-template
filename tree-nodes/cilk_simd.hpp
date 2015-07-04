
#include "tcwrapper.hpp"
class TC_CILK_SIMD : public TCWrapper<CILK_SIMD> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
