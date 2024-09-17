#include <iostream>
using namespace std;
int main() {
  int a[5], size, i;
  cout << "Enter array size" << endl;
  cin >> size;
  try {
    if (size > 5)
      throw 10;
    if (size < 0)
      throw 'a';
    for (i = 0; i < size; i++) {
      cout << "Enter a positive value" << endl;
      cin >> a[i];
      if (a[i] < 0)
        throw 5.5;
    }
    cout << "Stored valid numbers in the array are: " << endl;
    for (i = 0; i < size; i++) {
      cout << a[i];
    }
  } catch (int a) {
    cout << "Array out of bound. \t Exception" << a << endl;
  }
  return 0;
}
