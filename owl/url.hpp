#pragma once
#include <librdf.h>

struct raptor_uri_s;
typedef struct raptor_uri_s librdf_uri;

class Uri
{
  librdf_uri *uri;
public:
  Uri ();
  Uri (const char *url);
  Uri (const char *prefix, const char *url);
  ~Uri ();
  librdf_uri *get_uri () const;
  Uri & operator = (const char *url);
  const char *c_str ()
  {
    return (const char *) librdf_uri_to_string (uri);
  }
};

class ConstUri
{
  const char *uri;
public:
  //constexpr ConstUri () : uri(0) {}
  constexpr ConstUri (const char *url) :uri(url) {}
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
  const char *c_str () const;

};
