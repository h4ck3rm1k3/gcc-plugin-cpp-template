
#include "tcwrapper.hpp"
class TC_OMP_SIMD : public TCWrapper<OMP_SIMD> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
