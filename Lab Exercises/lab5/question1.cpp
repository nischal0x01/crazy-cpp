#include<iostream>
using namespace std;
class Complex{
    int x;
    int y;
    public:
void setter(){
    cout << "Enter the real part" << endl;
    cin >> x;
    cout << "Enter the imaginary part part" << endl;
    cin >> y;
}
void display(){
    cout << "The given complex number is " << endl;
    cout << x<< " + " << y << "i"<< endl;
}
};

int main()
{
    Complex c1;
    c1.setter();
    c1.display();
}