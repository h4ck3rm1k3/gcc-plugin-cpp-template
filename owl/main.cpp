#include "librdfinterface.hpp"

int
main ()
{
  rdf_world::get_context ().start_unit ("example");
  rdf_world::get_context ().finish_unit ();
}
