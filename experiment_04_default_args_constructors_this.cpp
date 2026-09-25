/*
 * EXPERIMENT 04: Default Arguments, Constructors, Overloading, Destructors, 'this' Pointer
 * Aim: Demonstrate default argument parameters, constructor types (default,
 *      parameterized, copy), destructor scope cleanup, and 'this' pointer.
 *
 * Compilation: g++ -std=c++17 -Wall experiment_04_default_args_constructors_this.cpp -o experiment_04.exe
 */

#include <iostream>
#include <string>

using namespace std;

// 1. Default Arguments
void display(char c = '*', int count = 3) {
    for (int i = 1; i <= count; ++i) {
        cout << c;
    }
    cout << endl;
}

// 2. Constructors, Overloading, and Destructors
class Rectangle {
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle() : length(0), breadth(0) {
        cout << "Default constructor: Area = " << area() << endl;
    }

    // Parameterized constructor (Square)
    Rectangle(int side) : length(side), breadth(side) {
        cout << "Square constructor (side " << side << "): Area = " << area() << endl;
    }

    // Parameterized constructor (Rectangle)
    Rectangle(int l, int b) : length(l), breadth(b) {
        cout << "Rectangle constructor (" << l << "x" << b << "): Area = " << area() << endl;
    }

    // Copy constructor
    Rectangle(const Rectangle& r) : length(r.length), breadth(r.breadth) {
        cout << "Copy constructor: Area = " << area() << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called for Rectangle (" << length << "x" << breadth << ")" << endl;
    }

    int area() const {
        return length * breadth;
    }
};

// 3. Student class using 'this' pointer
class Student {
    int rno;
    string name;
    double fee;

public:
    Student(int rno, string name, double fee) {
        this->rno = rno;
        this->name = name;
        this->fee = fee;
    }

    Student& display() {
        cout << this->rno << "\t" << this->name << "\t" << this->fee << endl;
        return *this;
    }
};

int main() {
    cout << "=== 1. Default Arguments ===\n";
    cout << "No argument: ";
    display();
    cout << "First argument ('#'): ";
    display('#', 5);
    cout << "Both arguments ('$'): ";
    display('$', 5);
    cout << "\n";

    cout << "=== 2. Constructors & Overloading ===\n";
    {
        Rectangle r1;
        Rectangle r2(5);
        Rectangle r3(4, 6);
        Rectangle r4 = r3;
    }
    cout << "\n";

    cout << "=== 3. 'this' Pointer ===\n";
    Student s(45, "Rahul", 120000);
    s.display();

    return 0;
}
