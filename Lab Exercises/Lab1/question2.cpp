// reads 10 positive number from user
//prints the largest of all
#include<iostream>
using namespace std;
int main()
{

    
int numbers[10];
int greatest = 0;

for (int i = 0; i < 10; i++)
{
    cout << "Enter the number" << endl;
    cin >> numbers[i];
}
for (int i = 0; i < 10; i++)
    if(numbers[i]> greatest){
        greatest = numbers[i];
    }


cout<< "The greatest number among the given numbers is " << greatest << endl;
}