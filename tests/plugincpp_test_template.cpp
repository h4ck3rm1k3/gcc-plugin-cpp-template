struct vl_embed { };
template<typename, typename, typename> struct vec;
template<typename T, typename A> struct vec<T, A, vl_embed>
{
public:
  int x;
  
};
