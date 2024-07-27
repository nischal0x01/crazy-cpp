
#include <iostream>

// Abstract class
class Shape {
public:
  // Pure virtual function
  virtual void draw() const = 0;   // = 0 makes it a pure virtual function
  virtual double area() const = 0; // Another pure virtual function
};

// Derived class
class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) : radius(r) {}

  // Implementing the pure virtual function 'draw'
  void draw() const override {
    std::cout << "Drawing a circle with radius " << radius << std::endl;
  }

  // Implementing the pure virtual function 'area'
  double area() const override { return 3.14159 * radius * radius; }
};

// Derived class
class Rectangle : public Shape {
private:
  double width, height;

public:
  Rectangle(double w, double h) : width(w), height(h) {}

  // Implementing the pure virtual function 'draw'
  void draw() const override {
    std::cout << "Drawing a rectangle with width " << width << " and height "
              << height << std::endl;
  }

  // Implementing the pure virtual function 'area'
  double area() const override { return width * height; }
};

int main() {
  // Abstract classes cannot be instantiated
  // Shape shape; // Error: Cannot instantiate an abstract class

  // Instantiate objects of derived classes
  Circle circle(5.0);
  Rectangle rectangle(4.0, 6.0);

  // Use the objects
  circle.draw();
  std::cout << "Area of circle: " << circle.area() << std::endl;

  rectangle.draw();
  std::cout << "Area of rectangle: " << rectangle.area() << std::endl;

  return 0;
}
