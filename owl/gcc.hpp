#pragma once
#include "url.hpp"
#include <sstream>
#include <ios>
//#include <iostream>
#include <iomanip>

// from compiler...
union tree_node;
typedef union tree_node *tree;


namespace gcc
{
  constexpr const ConstUri prefix =
    "http://intros5r.com/2015/08/gcc-plugin.rdf#";
  
  constexpr const ConstUri doc_uri =
    "http://intros5r.com/2015/08/example.rdf#";

  /*
    pointer to a tree node in the compiler.
    we use this to store a pointer from the rdf object to the memory address of the tree node 
    so that we can find it in a memory dump.
   */
  
  
  class gcc_tree_node
  {
    tree value;
  public:
    constexpr gcc_tree_node (tree v):value (v)
    {
    }
    operator   const gcc_tree_node() const
    {
      return value;
    }
    
    static constexpr const ConstUri2 uri = ConstUri2(prefix,"tree_node");

    librdf_node * get_node() const {
      librdf_node *node;
      std::stringstream ss;
      ss << std::hex << value;
      std::string result = ss.str();
 
      node = librdf_new_node_from_literal (rdf_world::get_world (),
                                           (const unsigned char *) result.c_str(), 0, 0);
      return node;
    }

  };
  
}
