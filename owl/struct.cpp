#include "struct.hpp"

#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "record_context.hpp"
#include "field.hpp"// from parent dir

namespace gcc {
  
Uri Struct::FieldProperty::uri = Uri(gcc::prefix,gcc::Struct::FieldProperty::field);

template <class T> Struct::FieldDecl::FieldDecl (T fld, gcc::Struct * parent) :
  owl::NamedIndividual(fld.name),
  bit_field(fld.bit_field),
  offset(fld.offset),
  bit_offset(fld.bit_offset),
  bit_size(fld.bit_size)
{
  
  if (fld.name) {
    std::cerr << "StructField NAME:"<< fld.name << endl;
    Uri node_uri(std::string(
                           std::string("http://intros5r.com/struct/") +
                           std::string(parent->name) +
                           std::string("/field/") +
                           std::string(name)).c_str());
    std::cerr << "StructField URI:"<< node_uri.c_str() << endl;
    Statement s1(node_uri,rdf::type::uri,owl::NamedIndividual::uri);
    Statement s2(node_uri,rdfs::label::uri,name);
    cerr << "Parent URL:" << parent->node_uri.c_str() << endl;
    cerr << "Field URL:" << Struct::FieldProperty::uri.c_str() << endl;
    cerr << "Field Node:" << node_uri.c_str() << endl;
    Statement s3(node_uri,Struct::FieldProperty::uri,parent->node_uri);

    Statement s4(node_uri,bit_field.get_url(),bit_field.get_val());

    //(fld.bit_field),
    //offset(fld.offset),
    //bit_offset(fld.bit_offset),
    //bit_size(fld.bit_size)
  }
}


Struct::Struct (const char * name) :
  owl::NamedIndividual(name)
{
  if (name) {
    std::cerr << "Struct NAME:"<< name << endl;
    std::string node_instance = std::string(std::string("http://intros5r.com/struct/") +
                                            std::string(name));
    std::cerr << "URL:"<< node_instance << endl;
    node_uri=node_instance.c_str();
    Statement s1(node_uri,rdf::type::uri,owl::NamedIndividual::uri);
    Statement s2(node_uri,rdfs::label::uri,name);
  }
}

  //template <> void Struct::field_begin(Field fld)
  template <> void Struct::field_begin(Field fld) {
    FieldDecl f(fld,this);
  }

  template <> Uri SimpleProperty<bool, Struct::FieldDecl::bit_field_str>::url = Uri(prefix,"bit_field_property");
}

