#include <iostream>

using namespace std;

const float PI = 3.14159;

class Circle {
private:
  float radius;
public:
  Circle() { radius = 1.0; }
  Circle(float rad) : radius(rad) {}
  ~Circle() {}
  float circumference() const;
  float area() const;
};

float Circle::circumference() const {
  return 2.0 * PI * radius;
}

float Circle::area() const {
  return PI * radius * radius;
}

int main() {
  float radius;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  Circle c1(radius);
  Circle c2(radius + 3.0);
  cout << "The circumference of the circle 1 is " << c1.circumference() << endl;
  cout << "The circumference of the circle 2 is " << c2.circumference() << endl;
  cout << "The area of circle 1 is " << c1.area() << endl;
  cout << "The area of circle 2 is " << c2.area() << endl;
}
