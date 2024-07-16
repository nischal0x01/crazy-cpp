// WAP to find the greatest value stored in array using function template

#include <iostream>
using namespace std;
template <class T> T GetMax(T arr[], int size) {
  int i;
  T result = 0;
  for (i = 0; i < size; i++) {
    if (arr[i] > result) {
      result = arr[i];
    }
  }
  return result;
};

int main() {
  int size;
  cout << "Enter the size of array" << endl;
  cin >> size;

  cout << "Enter the numbers" << endl;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  float result = GetMax<int>(arr, size);
  cout << "The maximum number from the array is  " << result << endl;
  return 0;
}
