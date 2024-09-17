#include <iostream>
using namespace std;

template <class T> class myPair {
  T a, b;

public:
  myPair(T first, T second) {
    a = first;
    b = second;
  }
  T getMax();
};
template <class T> T myPair<T>::getMax() {
  T result;
  result = a > b ? a : b;
  return result;
}

int main() {
  myPair<int> myobject(100, 75);
  cout << myobject.getMax();
  return 0;
}
