#pragma once
#include <librdf.h>
#include <ostream>
#include "librdfinterface.hpp"
struct raptor_uri_s;
typedef struct raptor_uri_s librdf_uri;

class Uri
{
  librdf_uri *uri;
public:
  Uri ();
  Uri (const char *uri);
  Uri (const char *prefix, const char *uri);
  ~Uri ();
  librdf_uri *get_uri () const;
  Uri & operator = (const char *uri);
  const char *c_str () const 
  {
    return (const char *) librdf_uri_to_string (uri);
  }

  librdf_node *get_node () const 
  {
    librdf_node *node;
    node = librdf_new_node_from_uri (rdf_world::get_world (), get_uri());
    return node;
  }

};

class ConstUri
{
  const char *uri;
public:
  //constexpr ConstUri () : uri(0) {}
  constexpr ConstUri (const char *uri) :uri(uri) {}
  //~ConstUri () {}
  librdf_uri *get_uri () const;
  constexpr const char *c_str () const { return uri; } ;
  constexpr operator const char *  () const { return uri; } ;
};

class ConstUri2
{
  const char *prefix;
  const char *path;
public:
  constexpr ConstUri2 (const char *prefix, const char * path) : prefix(prefix), path(path) {}
  constexpr ConstUri2 (const ConstUri prefix, const char * path) : prefix(prefix.c_str()), path(path) {}
  librdf_uri *get_uri () const;
  librdf_node *get_node () const 
  {
    librdf_node *node;
    node = librdf_new_node_from_uri (rdf_world::get_world (), get_uri());
    return node;
  }
  
  const char *c_str () const;

};

std::ostream& operator<< (std::ostream& os, const ConstUri2& o);
std::ostream& operator<< (std::ostream& os, const Uri & o);
