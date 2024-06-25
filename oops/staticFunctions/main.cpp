#include <iostream>
using namespace std;
class example {
  static int sum;
  int x;

public:
  example() {
    sum = sum + 1;
    x = sum;
  }
  static void stfun() { cout << "\n Result is : " << sum << endl; }
  void number() { cout << "\n Number is " << x; }
}

;

int example ::sum = 0;

int main() {
  example e1;
  example::stfun();
  example e2, e3, e4;
  example::stfun();
  e1.number();
  e2.number();
  e3.number();
  return 0;
}
