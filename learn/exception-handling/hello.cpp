// program to show exception handling
#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter the size of array" << endl;
  cin >> size;
  try {
    if (size > 5)
      throw 10;

    if (size < 0)
      throw 2;
  } catch (int x) {
    cout << "The size of array mustn't exceed 5" << endl;
  } catch (float x) {
    cout << "No negative value for an array" << endl;
  }

  return 0;
}
