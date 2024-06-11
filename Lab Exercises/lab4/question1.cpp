#include<iostream>
using namespace std;

//defining class rectangle
class Rectangle{
    int length;
    int breadth;
    public:
    void setSize(int a, int b){
        length = a;
        breadth = b;}
    void getArea(){
        int area = length*breadth;
        cout << "The area of the given rectangle is " << area << endl;
    }
    void getPerimeter(){
        int perimeter = 2 * (length + breadth);
        cout << "The perimeter of the given rectangle is " << perimeter << endl;
    }
};

int main()
{
    Rectangle r1;
    r1.setSize(3, 4);
 r1.getArea();
 r1.getPerimeter();
}