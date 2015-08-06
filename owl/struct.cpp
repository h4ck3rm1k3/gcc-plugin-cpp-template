#include "struct.hpp"

#include <gcc-plugin.h>
#include <coretypes.h>
#include <tree.h>
#include "rdf.hpp"
#include "record_context.hpp"
#include "field.hpp"// from parent dir

namespace gcc {
  
Uri Struct::FieldProperty::uri = Uri(prefix,Struct::FieldProperty::field);

template <class T> Struct::FieldDecl::FieldDecl (T fld, Struct * parent) :
  name(fld.name),
  bit_field(fld.bit_field),
  offset(fld.offset),
  bit_offset(fld.bit_offset),
  bit_size(fld.bit_size)
{
  
  if (fld.name) {
    std::cerr << "StructField NAME:"<< fld.name << endl;
    Uri node_uri(std::string(
                             std::string(doc_url) +
                             std::string("struct/") +
                             std::string(parent->name) +
                             std::string("/field/") +
                             std::string(name)).c_str());
    std::cerr << "StructField URI:"<< node_uri.c_str() << endl;
    Uri li = LocalUrl(Struct::FieldDecl::uri).uri();    
    Statement s1(node_uri,rdf::type::uri, li);
    Statement s2(node_uri,rdfs::label::uri,name);
    cerr << "Parent URL:" << parent->node_uri.c_str() << endl;
    cerr << "Field URL:" << Struct::FieldProperty::uri.c_str() << endl;
    cerr << "Field Node:" << node_uri.c_str() << endl;
    Statement s3(node_uri,Struct::FieldProperty::uri,parent->node_uri);

    //(fld.bit_field),
    Statement s_bit_field(node_uri,bit_field.get_url(),bit_field.get_val());
    //offset(fld.offset),
    Statement s_offset(node_uri,offset.get_url(),offset.get_val());
    //bit_offset(fld.bit_offset),
    Statement s_bitoffset(node_uri,bit_offset.get_url(),bit_offset.get_val());
    //bit_size(fld.bit_size)
    Statement s_bitsize(node_uri,bit_size.get_url(),bit_size.get_val());
  }
}


Struct::Struct (const char * name) :
  name(name)
{
  if (name) {
    std::cerr << "Struct NAME:"<< name << endl;
    std::string node_instance = std::string(std::string(doc_url) +
                                            std::string("struct/") +
                                            std::string(name));
    std::cerr << "URL:"<< node_instance << endl;
    node_uri=node_instance.c_str();
    LocalUrl l(Struct::uri);
    Uri lu(l.c_str());
    Statement s1(node_uri,rdf::type::uri,lu);
    Statement s2(node_uri,rdfs::label::uri,name);
  }
}

  //template <> void Struct::field_begin(Field fld)
  template <> void Struct::field_begin(Field fld) {
    FieldDecl f(fld,this);
  }

  /*
    initialize the urls of the template fields
  */
  template <> Uri SimpleProperty<bool, Struct::FieldDecl::bit_field_str>::url = Uri(prefix,"bit_field_property");
  template <> Uri SimpleProperty<int, Struct::FieldDecl::bit_offset_str>::url = Uri(prefix,"bit_offset_property");
  template <> Uri SimpleProperty<int, Struct::FieldDecl::bit_size_str>::url = Uri(prefix,"bit_size_property");
  template <> Uri SimpleProperty<int, Struct::FieldDecl::offset_str>::url = Uri(prefix,"offset_property");
}

