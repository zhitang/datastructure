#include <iostream>

using namespace std;

class Rectangle {
private:
  double length;
  double width;
public:
  Rectangle(double l = 0, double w = 0);
  double getLength() const;
  double getWidth() const;
  void setLength(double l);
  void setWidth(double w);

  double perimeter() const;
  double area() const;
};

Rectangle::Rectangle(double l, double w) :
  length(l), width(w) {}

double Rectangle::getLength() const {
  return length;
}

double Rectangle::getWidth() const {
  return width;
}

void Rectangle::setLength(double l) {
  length = l;
}

void Rectangle::setWidth(double w) {
  width = w;
}

double Rectangle::perimeter() const {
  return 2.0 * (length + width);
}

double Rectangle::area() const {
  return length * width;
}

int main() {
  Rectangle rec1(10, 20);
  cout << rec1.perimeter() << endl;
  cout << rec1.area() << endl;
}
