#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected: string s;
public:
    Shape(string n) : s(n) {}
    virtual double area() = 0;
    void show() { cout << "Shape: " << s << "\nArea: " << area() << "\n\n"; }
};
class Circle : public Shape {
    double r;
public:
    Circle(double r) : Shape("Circle"), r(r) {}
    double area() { return acos(-1.0) * r * r; }
};
class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double w, double h) : Shape("Rectangle"), w(w), h(h) {}
    double area() { return w * h; }
};
int main() {
    Shape* a[] = {new Circle(5), new Rectangle(4, 6)};
    for (int i = 0; i < 2; i++) a[i]->show();
}
