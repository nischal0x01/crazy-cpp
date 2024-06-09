#include<iostream>
using namespace std;
class calculateSI
{
public:
    double principal;
    double rate;
    int time;
    void Calculate(double principal, double rate, int time){
        double SI = principal * time * rate / 100;
        cout << "The required simple intererst is " << SI << endl;
    }
};
int main()
{
    calculateSI s1;
    s1.principal = 1000;
    s1.rate = 12;
    s1.time = 2;
    s1.Calculate(s1.principal, s1.rate, s1.time);
}