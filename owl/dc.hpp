namespace dc {
  class description {
    // <http://purl.org/dc/elements/1.1/description> rdf:type owl:AnnotationProperty .
    const char * desc;
  public:
    constexpr description (const char * desc) : desc(desc) {}
  };
}
