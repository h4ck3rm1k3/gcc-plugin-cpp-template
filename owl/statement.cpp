#include "statement.hpp"
#include "librdfinterface.hpp"

librdf_node * node_create_from_uri(librdf_uri*uri)
{
	librdf_node *node;
	node = librdf_new_node_from_uri(rdf_world::get_world(), uri);
	return node;
}

librdf_node * node_create_from_string(const char *s)
{
	librdf_node *node;
        node = librdf_new_node_from_literal(rdf_world::get_world(),
                                            (const unsigned char *)s,
                                            0,
                                            0);
	return node;
}

Statement::Statement(Uri & sub,Uri & pred,Uri & obj){
  //uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
  librdf_statement *st;
  st = librdf_new_statement(rdf_world::get_world());
  cerr << "statement" << sub.c_str() << " "<< pred.c_str() << " "<< obj.c_str() << endl;
  librdf_statement_set_subject(st, node_create_from_uri(sub.get_uri()));
  librdf_statement_set_predicate(st, node_create_from_uri(pred.get_uri()));
  librdf_statement_set_object(st, node_create_from_uri(obj.get_uri()));
  librdf_model_add_statement(rdf_world::get_model(), st);
}


Statement::Statement(Uri & sub,Uri & pred,bool obj){
  //uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
  librdf_statement *st;
  st = librdf_new_statement(rdf_world::get_world());
  cerr << "statement2:" << sub.c_str()<< " " << pred.c_str() << " " << obj << endl;
  librdf_statement_set_subject(st, node_create_from_uri(sub.get_uri()));
  librdf_statement_set_predicate(st, node_create_from_uri(pred.get_uri()));
  if (obj) {
    librdf_statement_set_object(st, node_create_from_string("True"));
  }else{
    librdf_statement_set_object(st, node_create_from_string("False"));
  }
  librdf_model_add_statement(rdf_world::get_model(), st);
}

Statement::Statement(Uri & sub,Uri & pred,int obj){
  librdf_statement *st;
  st = librdf_new_statement(rdf_world::get_world());
  cerr << "statement3:" << sub.c_str()<< " " << pred.c_str() << " " << obj << endl;
  librdf_statement_set_subject(st, node_create_from_uri(sub.get_uri()));
  librdf_statement_set_predicate(st, node_create_from_uri(pred.get_uri()));
  librdf_statement_set_object(st, node_create_from_string(std::to_string(obj).c_str()));

  librdf_model_add_statement(rdf_world::get_model(), st);
}

Statement::Statement(Uri & sub,Uri & pred,const char * obj){
  //uri=librdf_new_uri(rdf_world::get_world(), (const unsigned char*)url);
  librdf_statement *st;
  st = librdf_new_statement(rdf_world::get_world());
  cerr << "statement4:" << sub.c_str()<< " " << pred.c_str() << " " << obj << endl;
  librdf_statement_set_subject(st, node_create_from_uri(sub.get_uri()));
  librdf_statement_set_predicate(st, node_create_from_uri(pred.get_uri()));
  librdf_statement_set_object(st, node_create_from_string(obj));
  librdf_model_add_statement(rdf_world::get_model(), st);
}

