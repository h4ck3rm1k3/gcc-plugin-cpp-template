
#include "tcwrapper.hpp"
class TC_STATEMENT_LIST : public TCWrapper<STATEMENT_LIST> {
    virtual void finish_type (tree t);
    virtual void finish_decl (tree t);
    virtual void finish_unit (tree t);
    };
