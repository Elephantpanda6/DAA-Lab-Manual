#include <iostream>

using namespace std;

// Class demonstrating public access specifier
class Circle {
public:
    double radius;

    double compute_area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle obj;

    // Accessing public data member directly outside class
    obj.radius = 5.5;

    cout << "Radius is: " << obj.radius << "\n";
    cout << "Area is: " << obj.compute_area() << "\n";

    return 0;
}
