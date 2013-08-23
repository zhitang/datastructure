#include <iostream>

using namespace std;

class Stock {
private:
  string stockID;
  unsigned int currentInventory;
  double unitPrice;
  unsigned int requirementLevel;
public:
  Stock() {}
  Stock(string id, unsigned int inventory = 0, double price = 0.0, unsigned int level = 0) : stockID(id), currentInventory(inventory), unitPrice(price), requirementLevel(level) {}
  ~Stock() {}
  void updateStockLevel();
  void adjustUnitPrice();
  void reorderItem();
};

int main() {
  Stock myStock = Stock();

}
