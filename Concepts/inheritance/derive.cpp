#include<iostream>
using namespace std;
class Point{
    protected:
        int x,y;
    public:
        void set(int a , int b)
        {
            x = a;
            y = b;
        }
        void foo(){
            float distance = sqrt(x * x + y * y);
            std::cout << "Distance : " << distance << endl;
        }

        void print(){
            cout << "(" << x << "," << y << ")" << endl;
        }
};

class Circle:  public Point{
    private:
        double r;
        public :
        void set(int a, int b, double c){
        Point :: set(a, b);
        r = c;
        }
        void print(){

        }
};

int main(){
    Point A;
    A.set(30, 50);
    A.print();
    Circle C;
    C.set(10, 10, 100);
    C.foo();
    C.print();
    return 0;
}
