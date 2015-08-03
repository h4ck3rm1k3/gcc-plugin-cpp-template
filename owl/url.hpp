#pragma once 
struct raptor_uri_s;
typedef struct raptor_uri_s librdf_uri;

class Uri {
  librdf_uri* uri;
public:
  Uri(const char * url);
  Uri(const char * prefix, const char * url);
  ~Uri();
  librdf_uri* get_uri();
};
