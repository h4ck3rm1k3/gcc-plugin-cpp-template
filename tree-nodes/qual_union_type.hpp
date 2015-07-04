
#include "tcwrapper.hpp"
class TC_QUAL_UNION_TYPE : public TCWrapper<QUAL_UNION_TYPE> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
