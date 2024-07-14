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

void inputInfo(struct student *p, int size) {
  for (int i = 0; i < size; i++) {
    cout << "Enter name, roll and marks of the students\n";
    cin >> (p + i)->name >> (p + i)->roll >> (p + i)->marks;
  }
}
void displayInfo(struct student *p, int size) {
   for (int i = 0; i < size; i++) {
    cout << "\nThe name is "<<(p + i)->name << "\nThe roll number is "<< (p + i)->roll <<" \nThe marks is "<<(p + i)->marks<<"\n\n";
  }
}
void greatestMarks(struct student *p, int size) {
  struct student *temp = p;
  for (int i = 0; i < size; i++)
  {
if(temp->marks< (p+i)->marks){
  temp = (p + i);
}
  }
  displayInfo(temp, 1);
}
void sort(struct student *p, int size) {
  for (int i = 0; i < size; i++){
    for (int j = i + 1; j < size; j++){
      if((p+i)->marks< (p+j)->marks){
        struct student *temp;
        temp = (p + i);
        *(p + i) = *(p + j);
        *(p + j) = *temp;
      }
    }
  }
  cout << "The information after sorting is \n";
}

int main(){
  int size;
  cout << "Enter the number of students \n";
  cin >> size;
  struct student s[size];
  inputInfo(s, size);
  displayInfo(s, size);
  greatestMarks(s, size);
  sort(s, size);
  displayInfo(s, size);
}
