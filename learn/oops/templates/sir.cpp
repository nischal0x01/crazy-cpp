#include <iostream>
using namespace std;

template <class T> class array {
  T a[5];

public:
  void set_a(int s) {
    int i;
    cout << "Enter" << s << "values" << endl;
    for (i = 0; i < s; i++) {
      cin >> a[i];
    }
  }
  T getMax();
};

T array<T>::getMax(int s) {
  T max int i;
  max = a[0];
  for (i = 1; i < s; i++) {
    if (max < a[i])
      max = a[i];
  }
  return max;
}
