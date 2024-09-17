#include <iostream>
using namespace std;

class Shape {
protected:
  double breadth;
  double width;

public:
  Shape(int a = 0, int b = 0) {
    breadth = a;
    width = b;
  }
  void set_data() {
    cout << "Enter the breadth " << endl;
    cin >> breadth;
    cout << "Enter the width " << endl;
    cin >> width;
  }
  virtual void displayData() = 0;
};

class triangle : public Shape {
public:
  triangle(double a = 0, double b = 0) : Shape(a, b){};
  void displayData() {
    cout << "The area of the triangle is" << width * breadth / 2 << endl;
  }
};

class rectangle : public Shape {
public:
  rectangle(double a = 0, double b = 0) : Shape(a, b){};
  void displayData() {
    cout << "The area of the rectangle is:" << width * breadth;
  }
};

int main() {
  Shape *shape;
  cout << "For triangle\n";
  triangle tri;
  shape = &tri;
  tri.set_data();
  shape->displayData();
  cout << "for rectangle:\n";
  rectangle rec;
  shape = &rec;
  rec.set_data();
  shape->displayData();
  return 0;
}
