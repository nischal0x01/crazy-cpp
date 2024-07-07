// 10 student info
// //access through struct pointer
// function which returns info  about the student having highest marks
// sort the information by their marks

#include <iostream>
using namespace std;
struct student {
  char name[20];
  int roll;
  float marks;
};

void inputInfo(struct stud *p, int size) {
  for (int i = 0; i < size; i++) {
    cout << "Enter name, roll and marks of the students\n";
    cin >> (p + i)->name;
    // >> (p + i)->roll >> (p + i)->marks;
  }
}
void displayInfo(struct stud *p, int size) {}
void greatestMarks(struct stud *p, int s) {}
void sort(struct stud *p, int s) {}

int main() {
  int size = 10;
  struct student std[10];
  struct student *ptr;
  ptr = &std[0];
  inputInfo(ptr, size);
}
