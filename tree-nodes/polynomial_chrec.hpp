
#include "tcwrapper.hpp"
class TC_POLYNOMIAL_CHREC : public TCWrapper<POLYNOMIAL_CHREC> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
