#include <iostream>
using namespace std;
class Polygon {
protected:
  int numVertices;
  float *xCoord, *yCoord;

public:
  void set(float *x, float *y, int nV);
};
class Rectangle {
protected:
  int numVertices;
  float *xCoord, *yCoord;

public:
  void set(float *x, float *y, int nV);
  float area();
};
int main() {}
