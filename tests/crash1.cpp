template<typename, typename, typename> struct vec;
struct vl_embed { };
struct vl_ptr { };

struct va_heap
{
  typedef vl_ptr default_layout;
  template<typename T>
  static void reserve (vec<T, va_heap, vl_embed> *&, unsigned, bool
         );

  template<typename T>
  static void release (vec<T, va_heap, vl_embed> *&);
};

template<typename T,
         typename A = va_heap,
         typename L = typename A::default_layout>
struct vec
{
  template<typename T, typename A> struct vec<T, A, vl_embed>
{
public:
  unsigned allocated (void) const { return m_vecpfx.m_alloc; }
  unsigned length (void) const { return m_vecpfx.m_num; }
  bool is_empty (void) const { return m_vecpfx.m_num == 0; }
  T *address (void) { return m_vecdata; }
  const T *address (void) const { return m_vecdata; }
  const T &operator[] (unsigned) const;
  T &operator[] (unsigned);
  T &last (void);
  bool space (unsigned) const;
  bool iterate (unsigned, T *) const;
  bool iterate (unsigned, T **) const;
  vec *copy () const;
  void splice (vec &);
  void splice (vec *src);
  T *quick_push (const T &);
  T &pop (void);
  void truncate (unsigned);
  void quick_insert (unsigned, const T &);
  void ordered_remove (unsigned);
  void unordered_remove (unsigned);
  void block_remove (unsigned, unsigned);
  void qsort (int (*) (const void *, const void *));
  T *bsearch (const void *key, int (*compar)(const void *, const void *));
  unsigned lower_bound (T, bool (*)(const T &, const T &)) const;
  static size_t embedded_size (unsigned);
  void embedded_init (unsigned, unsigned = 0, unsigned = 0);
  void quick_grow (unsigned len);
  void quick_grow_cleared (unsigned len);


  template <typename, typename, typename> friend struct vec;


  friend struct va_gc;
  friend struct va_gc_atomic;
  friend struct va_heap;



  vec_prefix m_vecpfx;
  T m_vecdata[1];
};
