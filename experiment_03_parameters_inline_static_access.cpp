/*
 * EXPERIMENT 03: Parameter Passing Methods, Inline Functions, Static Members, Access Specifiers
 * Aim: Demonstrate:
 *      1. Parameter passing: Call by Value vs Call by Address/Reference
 *      2. Inline functions for arithmetic operations
 *      3. Static class members shared across instances
 *      4. Public access specifiers in C++
 *
 * Compilation: g++ -std=c++17 -Wall experiment_03_parameters_inline_static_access.cpp -o experiment_03.exe
 */

#include <iostream>

using namespace std;

// 1. Call by Value
void callByValue(int a, int b) {
    a += b;
    cout << "In callByValue function: a = " << a << ", b = " << b << "\n";
}

// 2. Call by Address (Pointers) and Call by Reference
void swapPointers(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void swapReferences(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

// 3. Inline Functions in a Class
class Operation {
    int a, b, add, sub, mul;
    float div;

public:
    void setValues(int x, int y);
    void sum();
    void difference();
    void product();
    void division();
};

inline void Operation::setValues(int x, int y) {
    a = x;
    b = y;
}

inline void Operation::sum() {
    add = a + b;
    cout << "Addition: " << add << "\n";
}

inline void Operation::difference() {
    sub = a - b;
    cout << "Difference: " << sub << "\n";
}

inline void Operation::product() {
    mul = a * b;
    cout << "Product: " << mul << "\n";
}

inline void Operation::division() {
    if (b != 0) {
        div = static_cast<float>(a) / b;
        cout << "Division: " << div << "\n";
    }
}

// 4. Static Class Member
class Student {
public:
    static int total;
    Student() {
        total += 1;
    }
};
int Student::total = 0;

// 5. Access Specifier Demonstration
class CircleAccess {
public:
    double radius;
    double compute_area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    cout << "=== 1. Call by Value ===\n";
    int x = 5, y = 7;
    callByValue(x, y);
    cout << "In main: x = " << x << ", y = " << y << "\n\n";

    cout << "=== 2. Call by Address / Reference ===\n";
    int a = 10, b = 20;
    swapPointers(&a, &b);
    cout << "After pointer swap: a = " << a << ", b = " << b << "\n";
    swapReferences(a, b);
    cout << "After reference swap: a = " << a << ", b = " << b << "\n\n";

    cout << "=== 3. Inline Functions ===\n";
    Operation op;
    op.setValues(56, 89);
    op.sum();
    op.difference();
    op.product();
    op.division();
    cout << "\n";

    cout << "=== 4. Static Class Member ===\n";
    Student s1;
    cout << "Number of students: " << s1.total << endl;
    Student s2;
    cout << "Number of students: " << s2.total << endl;
    Student s3;
    cout << "Number of students: " << s3.total << endl << "\n";

    cout << "=== 5. Public Access Specifier ===\n";
    CircleAccess circle;
    circle.radius = 5.5;
    cout << "Radius is: " << circle.radius << "\n";
    cout << "Area is: " << circle.compute_area() << "\n";

    return 0;
}
