#include "error_mark.hpp"
TC_ERROR_MARK aTC_ERROR_MARK;

void TC_ERROR_MARK::finish_type (tree t)
{
  cerr << "error mark" << endl;  
}
