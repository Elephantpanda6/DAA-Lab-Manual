#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <cmath>
#include <memory>
#include <string>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// 1. Encapsulation & Abstraction: Base Class
class Shape {
protected:
    std::string shapeName; // Accessible by derived classes

public:
    // Parameterized Constructor using an initialization list
    Shape(std::string name) : shapeName(name) {}

    // Pure Virtual Function making this an Abstract Class
    virtual double calculateArea() const = 0;

    // Virtual Destructor ensures proper cleanup of derived objects
    virtual ~Shape() {}

    void displayName() const {
        std::cout << "Shape: " << shapeName << std::endl;
    }
};

// 2. Inheritance: Derived Class (Circle)
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    // Overriding the pure virtual function
    double calculateArea() const override {
        return M_PI * radius * radius;
    }
};

// 2. Inheritance: Derived Class (Rectangle)
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}

    double calculateArea() const override {
        return width * height;
    }
};

int main() {
    // 3. Runtime Polymorphism: Handling different objects via Base Class pointers
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(5.0));
    shapes.push_back(std::make_unique<Rectangle>(4.0, 6.0));

    for (const auto& shape : shapes) {
        shape->displayName();
        std::cout << "Area: " << shape->calculateArea() << std::endl << std::endl;
    }

    return 0;
}
