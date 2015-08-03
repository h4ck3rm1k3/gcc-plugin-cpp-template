#include "statement.hpp"
#include "librdfinterface.hpp"

librdf_node * node_create_from_uri(librdf_uri*uri)
{
	librdf_node *node;
	node = librdf_new_node_from_uri(rdf_world::get_world(), uri);
	return node;
}
Statement::Statement(Uri & sub,Uri & pred,Uri & obj){
  //uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
  librdf_statement *st;
  st = librdf_new_statement(rdf_world::get_world());
  librdf_statement_set_subject(st, node_create_from_uri(sub.get_uri()));
  librdf_statement_set_predicate(st, node_create_from_uri(pred.get_uri()));
  librdf_statement_set_object(st, node_create_from_uri(obj.get_uri()));
  librdf_model_add_statement(rdf_world::get_model(), st);
}
