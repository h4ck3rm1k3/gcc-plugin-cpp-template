// interface to librdf
// derived from http://iweb.dl.sourceforge.net/project/introspector/patched%20gcc/PATCHED%20GCC/gcc-patch.diff.gz

/* for the RDF ouput we include the redland here */
#include <redland.h>
#include <string>
#include <iostream>

#include "librdfinterface.hpp"
#include "owl/url.hpp"
//class Uri;

class rdf_context_imp {
  std::string stream_name; /* a buffer containing the current filename name*/

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

  // /* for all gcc interaction */
  // librdf_uri*  pgcc_node_types;     /* the url of the gcc node types */
  // librdf_uri*  pgcc_node_fields;    /* the url of the gcc node fiedls*/


  Uri * base_uri;// introspector
  
  //  /* for all current object */
  // librdf_uri*  pcurrent_uri; /* the uri of the current file */

public:
  
  rdf_context_imp():
    librdf_type("hashes"),
    librdf_storagename(stream_name),
    librdf_options("hash-type='memory'")
  {

    pworld=librdf_new_world();
    librdf_world_open(pworld);
    pstorage=librdf_new_storage(pworld, 
                                librdf_type.c_str(),
                                0, //librdf_storagename.c_str(),
                                librdf_options.c_str()
                                /*
                                  new means to overwrite
                                */
                                );    
    pmodel=librdf_new_model(pworld, pstorage, NULL);
    //base_uri = new Uri("http://intros5r.com/base.rdf");   
  // // the basis for gcc specfic types
  // //http://purl.oclc.org/NET/introspector/2002/11/24/gcc/
  //pgcc_node_types = librdf_new_uri(pworld,reinterpret_cast<unsigned char const*>("node_types:"));
  //pgcc_node_fields = librdf_new_uri(pworld,reinterpret_cast<unsigned char const*>("node_fields:"));
  // this will change to be something more useful !
  //pcurrent_uri = librdf_new_uri(pworld,reinterpret_cast<unsigned char const*>("#"));
  }

  ~rdf_context_imp() {
    librdf_free_model(pmodel);
    librdf_storage_close(pstorage);
    librdf_free_storage(pstorage);
    librdf_free_world(pworld);
    //delete base_uri;
  }

  librdf_world  * get_world() {
    return pworld;
  }

  librdf_model  * get_model() {
    return pmodel;
  }

  void serialize(const char * filename) {
    librdf_serializer* serializer;
    serializer = librdf_new_serializer(pworld,"rdfxml", NULL, NULL);
    Uri base_uri("http://intros5r.com/base.rdf");   
    FILE * output_file = fopen(filename, "w");
    librdf_serializer_serialize_model_to_file_handle(serializer, output_file, base_uri.get_uri(), pmodel);
    fclose(output_file);
    librdf_free_serializer(serializer);
    
  }

};



rdf_context::rdf_context() :
  mainfilename(0)
{
  pimp = new rdf_context_imp;
};

void rdf_context::start_unit(const char * amainfilename){
  mainfilename=amainfilename;
}

void rdf_context::finish_unit(){
  if (mainfilename) {
    std::cerr << "Finish" << mainfilename << std::endl;
    std::string filename(mainfilename);
    filename += ".rdf"; 
    pimp->serialize(filename.c_str());
  }
  else {
    std::cerr << "no file name!" << std::endl;
  }

}

rdf_context::~rdf_context()  {
  
  delete pimp;
};


librdf_world  * rdf_context::get_world() {
  return pimp->get_world();
}

librdf_model  * rdf_context::get_model() {
  return pimp->get_model();
}


//rdf_context rdf_world::ardf_context;

rdf_context * rdf_world::p_rdf_context=0;

//rdf_world ardf_world;
