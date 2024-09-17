#include <iostream>
using namespace std;
class Shape {
protected:
  int width, breadth;

public:
  Shape(int a = 0, int b = 0) {
    width = a;
    breadth = b;
  }
  virtual int area() {
    cout << "the parent class area is: " << endl;
    return 0;
  }
};

class Rectangle : public Shape {
public:
  Rectangle(int a = 0, int b = 0) : Shape(a, b){};
  int area() {
    cout << "The area of rectangle is: " << width * breadth << endl;
    return 0;
  }
};

class Triangle : public Shape {
public:
  Triangle(int a = 0, int b = 0) : Shape(a, b){};
  int area() {
    cout << " The triangle area is: " << breadth * width / 2 << endl;
    return 0;
  }
};

int main() {
  Shape *shape;
  Rectangle rec(7, 10);
  Triangle tri(7, 10);
  shape = &rec;
  shape->area();
  shape = &tri;
  shape->area();

  return 0;
}
