namespace dc
{
  static constexpr const char *prefix = "http://purl.org/dc/elements/1.1/";
  class description
  {
    // <description> rdf:type owl:AnnotationProperty .
    const char *desc;
  public:
      constexpr description (const char *desc):desc (desc)
    {
    }
  };
}
