#include <iostream>

using namespace std;

class Point {
private:
  float x, y;
public:
  Point() { x = 0.0; y = 0.0; }
  Point(float coordX, float coordY) : x(coordX), y(coordY) {}
  ~Point() {}
  float getX() const { return x; }
  float getY() const { return y; }
  void setX(float coordX) { x = coordX; }
  void setY(float coordY) { y = coordY; }
};

class Line {
private:
  Point leftBottom, rightUpper;
public:
  Line(Point p1, Point p2);
};

class Rectangle {
};
