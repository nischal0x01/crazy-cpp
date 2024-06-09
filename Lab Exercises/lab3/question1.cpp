#include<iostream>
#include<cmath>
using namespace std;
class point{
    public:
    int x;
    int y;
    void setter(){
        cout << "Enter the x coordinate" << endl;
        cin >> x;
        cout << "Enter the y coordinate" << endl;
        cin >> y;
    }
    float calculateDistance(point p1){
        return sqrt(pow(x - p1.x ,2)+ pow(y - p1.y,2));
    }
    void display(){
        cout << "(" << x << "," << y<< ")" << endl;
        ;
    }
};
int main()
{
    point p1, p2;
    p1.setter();
    p2.setter();
    cout << "Distance" << p1.calculateDistance(p2) << endl;
}