#include <iostream>
using namespace std;

class complex {
    int real, img;
public:
    complex() : real(0), img(0) {}
    complex(int a, int b) : real(a), img(b) {}

    void setter() {
        cout << "Enter values for real and img: ";
        cin >> real >> img;
    }

    int get_real() const {
        return real;
    }

    int get_img() const {
        return img;
    }

    void display() const {
        cout << real << "+" << img << "i" << endl;
    }

    complex operator*(int x) {
        real *= x;
        img *= x;
        return *this;
    }

    complex operator+(const complex& other) const {
        return complex(real + other.real, img + other.img);
    }

    complex& operator+=(const complex& other) {
        real += other.real;
        img += other.img;
        return *this;
    }

    complex& operator+=(int x) {
        real += x;
        return *this;
    }
};

int main() {
    complex a, b(2, 3), c;
    a.setter();
    a.display();
    b.display();
    a = a * 5;  // Correctly assign the result back to a
    a.display();
    a += b;
    a.display();
    a += 2;
    a.display();
    return 0;
}
