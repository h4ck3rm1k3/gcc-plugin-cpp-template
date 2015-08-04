// interface to librdf
// derived from http://iweb.dl.sourceforge.net/project/introspector/patched%20gcc/PATCHED%20GCC/gcc-patch.diff.gz

/* for the RDF ouput we include the redland here */
#include <redland.h>
#include <string>
#include <iostream>

#include "librdfinterface.hpp"
#include "owl/url.hpp"
#include "owl/struct.hpp"


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
  Uri * base_uri;// introspector
  
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

  }

  ~rdf_context_imp() {
    librdf_free_model(pmodel);
    librdf_storage_close(pstorage);
    librdf_free_storage(pstorage);
    librdf_free_world(pworld);
  }

  librdf_world  * get_world() {
    return pworld;
  }

  librdf_model  * get_model() {
    return pmodel;
  }

  void serialize(const char * filename) {
    librdf_serializer* serializer;
    serializer = librdf_new_serializer(pworld,"turtle", NULL, NULL);
    Uri base_uri(gcc::prefix);   
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
    //std::cerr << "Finish" << mainfilename << std::endl;
    std::string filename(mainfilename);
    filename += ".ttl"; 
    pimp->serialize(filename.c_str());
  }
  else {
    //std::cerr << "no file name!" << std::endl;
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

rdf_context * rdf_world::p_rdf_context=0;

