#include <iostream>

using namespace std;

const unsigned int ARRAYSIZE = 256;
typedef unsigned int DataType;
class SeqList {
private:
  DataType listItem[ARRAYSIZE];
  int size;
public:
  SeqList();

  int listSize() const;
  int listEmpty() const;
  int find(DataType & item) const;
  DataType getData(int position) const;

  void insertItem(const DataType & item);
  void deleteItem(const DataType & item);
  DataType deleteFront();
  void clearList();
};

class OrderedList : public SeqList {
private:
public:
  OrderedList();
  void insertItem(const DataType & item);
};

int main() {
}
