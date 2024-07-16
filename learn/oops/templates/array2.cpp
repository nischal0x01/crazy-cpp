#include <iostream>
using namespace std;
template <class T, class X> T GetMax(T arr[], X arr2[], int size) {
  int i;
  T result = 0;
  for (i = 0; i < size; i++) {
    if (arr[i] > result) {
      result = arr[i];
    }
    if (arr2[i] > result) {
      result = arr2[i];
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

  cout << "Enter the float numbers" << endl;
  float arr2[size];
  for (int i = 0; i < size; i++) {
    cin >> arr2[i];
  }
  float result = GetMax<int, float>(arr, arr2, size);
  cout << "The maximum number from the array is  " << result << endl;
  return 0;
}
