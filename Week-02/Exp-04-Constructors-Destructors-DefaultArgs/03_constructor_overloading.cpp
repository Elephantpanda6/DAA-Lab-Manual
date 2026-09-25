#include <iostream>

using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    // 1. Default constructor
    Rectangle() : length(0), breadth(0) {
        cout << "Default constructor: Area = " << area() << endl;
    }

    // 2. Overloaded constructor for Square
    Rectangle(int side) : length(side), breadth(side) {
        cout << "Square constructor (side " << side << "): Area = " << area() << endl;
    }

    // 3. Overloaded constructor for Rectangle
    Rectangle(int l, int b) : length(l), breadth(b) {
        cout << "Rectangle constructor (" << l << "x" << b << "): Area = " << area() << endl;
    }

    // 4. Copy constructor
    Rectangle(const Rectangle& r) : length(r.length), breadth(r.breadth) {
        cout << "Copy constructor: Area = " << area() << endl;
    }

    int area() const {
        return length * breadth;
    }
};

int main() {
    cout << "--- Constructor Overloading Demonstration ---\n";
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);
    Rectangle r4 = r3;

    return 0;
}
