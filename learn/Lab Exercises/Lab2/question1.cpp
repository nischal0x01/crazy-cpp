// use pass by reference (pointer)
// calculate the value of x and y from two linear functions ax+ by= m;

//using pass by value
#include<iostream>
using namespace std;
void calculate(int &a , int &b, int &m, int &c, int &d, int &n){
    // "Enter a,b,m,c,d,n in serial order" 
    int x = (m * d - b * n) / (a * d - c * b);
    int y = (a * n - b * c) / (a * d - c * b);
    cout << "The value of x is " << x << endl;
    cout << "The value of y is " << y << endl;
}

int main()
{
    int a = 1, b = 2, m = 3, c = 4, d = 5, n = 6;
    calculate(a,b,m,c,d,n);
}

//using pass by reference
