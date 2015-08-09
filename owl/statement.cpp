#include "statement.hpp"

#include "librdfinterface.hpp"

librdf_node *
node_create_from_uri (librdf_uri * uri)
{
  librdf_node *node;
  node = librdf_new_node_from_uri (rdf_world::get_world (), uri);
  return node;
}

librdf_node *
node_create_from_string (const char *s)
{
  librdf_node *node;
  node = librdf_new_node_from_literal (rdf_world::get_world (),
				       (const unsigned char *) s, 0, 0);
  return node;
}

template <> Statement::Statement (TConstStatement1 & a) 
  {
    librdf_statement *st;
    st = librdf_new_statement (rdf_world::get_world ());
     cerr << "template statement: sub:" << a.s << " pred:" << a.p << " obj:" << a.o << endl;
    librdf_statement_set_subject (st, node_create_from_uri (a.s.get_uri ()));
    librdf_statement_set_predicate (st, node_create_from_uri (a.p.get_uri ()));
    //librdf_statement_set_object (st, node_create_from_uri (a.o.get_uri ()));
    librdf_statement_set_object (st,node_create_from_string (a.o));
      
    librdf_model_add_statement (rdf_world::get_model (), st);
  }
  

