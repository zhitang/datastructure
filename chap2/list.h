
template <class T>
class List {
 protected:
  int size;
 public:
  List();
  //querying the list
  virtual int listSize() const;
  virtual int listEmpty() const;
  virtual int find(T & item) = 0;
  //modifying the list
  virtual void insertItem(const T & item) = 0;
  virtual void deleteItem(const T & item) = 0;
  virtual void clearList() = 0;
};
