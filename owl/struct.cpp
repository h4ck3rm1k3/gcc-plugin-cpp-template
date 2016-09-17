#include "struct.hpp"

//#include <gcc-plugin.h>
//#include <coretypes.h>
//#include <tree.h>
//#include "tree.h"


#include "rdf.hpp"
//#include "record_context.hpp"
//#include "field.hpp"// from parent dir

namespace gcc
{



  Struct::Struct (const char * aname, tree t):
    name (aname),
    tree_node(t)
  {
    std::string node_instance = std::string (std::string (doc_uri) +
					     std::string ("struct/") +
					     std::string (name));
    std::cerr << "URL:" << node_instance << endl;
    node_uri = node_instance.c_str ();
    
    if (name)
      {
	std::cerr << "Struct NAME:" << name << endl;
	Statement s1 (node_uri, rdf::type::uri, Struct::uri);
	Statement s2 (node_uri,
		      rdfs::label::uri,
		      name);
      }

    
    if (tree_node)
      {
	std::cerr << "Struct tree_node:" << tree_node << endl;
	Statement s2 (node_uri,
		      gcc::gcc_tree_node::uri,
		      gcc::gcc_tree_node(tree_node));
      }
  }

  template < class T > void Struct::field_begin (T fld)
  {
    FieldDecl f (fld, this);
  }

  template<>  constexpr ConstUri2 gcc::Struct::uri;
    //gcc::Struct<tree_node*>::uri
  
  constexpr ConstUri2 gcc::Struct::FieldProperty::uri;
  constexpr ConstUri2 gcc::Struct::FieldDecl::uri;
  constexpr ConstUri2 gcc::Struct::FieldDecl::BitField::uri;
  constexpr ConstUri2 gcc::Struct::FieldDecl::BitSize::uri;
  constexpr ConstUri2 gcc::Struct::FieldDecl::BitOffset::uri;
  constexpr ConstUri2 gcc::Struct::FieldDecl::Offset::uri;

  constexpr TConstStatement1 gcc::Struct::standard;
  //gcc::Struct<tree_node*>::standard
  
  constexpr TConstStatement1 gcc::Struct::description;
  //gcc::Struct<tree_node*>::description

  
  constexpr ConstUri2 gcc::CStandard::uri;


  
  Declaration<Struct,owl::Class> Struct::declaration(standard,description);
  Declaration<Struct::FieldDecl,owl::Class> Struct::FieldDecl::declaration;
  Declaration<Struct::FieldProperty,owl::ObjectProperty> Struct::FieldProperty::declaration;
  Declaration<Struct::FieldDecl::BitField,owl::ObjectProperty> Struct::FieldDecl::BitField::declaration;
  Declaration<Struct::FieldDecl::BitSize,owl::ObjectProperty> Struct::FieldDecl::BitSize::declaration;
  Declaration<Struct::FieldDecl::BitOffset,owl::ObjectProperty> Struct::FieldDecl::BitOffset::declaration;
  Declaration<Struct::FieldDecl::Offset,owl::ObjectProperty> Struct::FieldDecl::Offset::declaration;


}
