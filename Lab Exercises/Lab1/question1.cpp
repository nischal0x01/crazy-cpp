//reads three coefficients a,b,c
//find whether the solution is real or imaginary//

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c;
    float ans, value1, value2;
    cout << "Consider the equation ax2 + bx + c" << endl;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
    cout << "Enter the value of c" << endl;
    cin >> c;

    ans = b * b - 4 *a * c;
    if (ans >= 0)
    {
        value1 = ((-1*b) + sqrt(b * b - 4 * a * c))/2*a;
        value1 = ((-1*b) - sqrt(b * b - 4 * a * c))/2*a;
        cout << "x1 = " << value1 << endl;
        cout << "x2 = " << value2 << endl;
    }
    else{
        cout << "The solution is imaginary" << endl;
        
    }

    return 0;
}