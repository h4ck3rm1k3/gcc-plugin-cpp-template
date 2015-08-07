#pragma once
/*
 * rdf context object to be created when the plugin starts a unit.
 */
#include <redland.h>
#include <iostream>
class rdf_context_imp;
//class librdf_world;
class rdf_context
{
  rdf_context_imp *pimp;
  const char *mainfilename;
public:  rdf_context ();
   ~rdf_context ();
  void start_unit (const char *mainfilename);
  void finish_unit ();

  librdf_world *get_world ();
  librdf_model *get_model ();
};

using namespace std;

class rdf_world
{
  // singleton
public:
  static rdf_context *p_rdf_context;

    rdf_world ()
  {
    //cerr << "create world" << p_rdf_context << endl;
    // p_rdf_context = new  rdf_context();
  }

   ~rdf_world ()
  {
    //cerr << "destroy world" << p_rdf_context << endl;
    delete p_rdf_context;
    p_rdf_context = 0;
  }

  static rdf_context & get_context ()
  {
    //cerr << "get context" << p_rdf_context << endl;
    if (!p_rdf_context)
      {
	p_rdf_context = new rdf_context ();
      }
    return *p_rdf_context;
  }

  // out of
  static librdf_world *get_world ()
  {
    //    cerr << "get world/ context" << p_rdf_context << endl;
    if (!p_rdf_context)
      {
	p_rdf_context = new rdf_context ();
      }
    ///cerr << "get world/ going to return" << p_rdf_context << endl;
    return p_rdf_context->get_world ();
  }

  static librdf_model *get_model ()
  {
    return p_rdf_context->get_model ();
  }
};
