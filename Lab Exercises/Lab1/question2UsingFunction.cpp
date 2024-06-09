#include <iostream>
using namespace std;

void getArray(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter a  number: ";
        cin >> numbers[i];
        while (numbers[i] <= 0) {
            cout << "Please enter a positive number: ";
            cin >> numbers[i];
        }
    }
}

int findGreatest(int numbers[], int size) {
    int greatest = numbers[0]; // Initialize with the first element
    for (int i = 1; i < size; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
    }
    return greatest;
}

int main() {
    int SIZE;
    cout << "Enter the size of the array" << endl;
    cin >> SIZE;

    int numbers[SIZE];


    getArray(numbers, SIZE);

    int greatest = findGreatest(numbers, SIZE);

    cout << "The greatest number among the given numbers is " << greatest << endl;

    return 0;
}
