#include <iostream>
using namespace std;
class complex {
  float real, img;

public:
  complex() {
    real = 0;
    img = 0;
  }
  complex(float a, float b) {
    real = a;
    img = b;
  }
  friend void operator*(complex &, complex);
  friend complex operator-(int, complex);
  void display() { cout << real << "+" << img << "i" << endl; }
};
void operator*(complex &x, complex y) {
  x.real *= y.real;
  x.img *= y.img;
}
complex operator-(int x, complex y) { return complex(x - y.real, y.img); }

int main() {
  complex a(2, 3), b(2, 2), c;
  a *b;
  c = 2 - a;
  c.display();
}
