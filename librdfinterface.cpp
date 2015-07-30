// interface to librdf
// derived from http://iweb.dl.sourceforge.net/project/introspector/patched%20gcc/PATCHED%20GCC/gcc-patch.diff.gz

/* for the RDF ouput we include the redland here */
#include <redland.h>
#include <string>

class rdf_context {
  std::string stream_name; /* a buffer containing the current function name*/
  std::string function_name; /* a buffer containing the current function name*/
  std::string librdf_type;        /* the type of hash */
  std::string librdf_storagename; /* the name of the storage */
  std::string librdf_options;     /* the options */

  /*
    the redland RDF world we are building for the introspector
  */
  librdf_world  * pworld;   /* the world */
  librdf_storage *pstorage; /* the db file, the storage */
  librdf_model* pmodel;     /* the model in that world, TODO : add one per function body*/
  librdf_serializer* pserializer; /* this is how we write xml/rdf */

  /* for all gcc interaction */
  librdf_uri*  pgcc_node_types;     /* the url of the gcc node types */
  librdf_uri*  pgcc_node_fields;    /* the url of the gcc node fiedls*/
 
   /* for all current object */
  librdf_uri*  pcurrent_uri; /* the uri of the current file */

  rdf_context():
    librdf_type("hashes"),
    librdf_storagename(stream_name)
  {
    pworld=librdf_new_world();
    librdf_world_open(pworld);
    pstorage=librdf_new_storage(pworld, 
                                librdf_type.c_str(),
                                librdf_storagename.c_str(),
                                librdf_options.c_str()
                                /*
                                  new means to overwrite
                                */
                                );

  pmodel=librdf_new_model(pworld, pstorage, NULL);

  // // the basis for gcc specfic types

  // //http://purl.oclc.org/NET/introspector/2002/11/24/gcc/
  pgcc_node_types = librdf_new_uri(pworld,reinterpret_cast<unsigned char const*>("node_types:"));
  pgcc_node_fields = librdf_new_uri(pworld,reinterpret_cast<unsigned char const*>("node_fields:"));

  // this will change to be something more useful !
  pcurrent_uri = librdf_new_uri(pworld,reinterpret_cast<unsigned char const*>("#"));
  
  }
  
};
