#include<iostream>
using namespace std;
class calculateBMI
{
public:
    double height;
    double weight;
    void Calculate(double height, double weight)
    {
        double BMI = weight / (height*height);
        cout << "Your required BMI is" << BMI << endl;
    }
};

int
main()
{
    calculateBMI nischal;
    nischal.height = 1.8;
    nischal.weight = 75;
    nischal.Calculate(nischal.height, nischal.weight);
}