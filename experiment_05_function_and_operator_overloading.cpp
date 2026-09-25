/*
 * EXPERIMENT 05: Function Overloading and Operator Overloading
 * Aim: Implement compile-time polymorphism via:
 *      1. Overloaded static member functions add()
 *      2. Overloaded unary prefix ++ operator on class Test
 *
 * Compilation: g++ -std=c++17 -Wall experiment_05_function_and_operator_overloading.cpp -o experiment_05.exe
 */

#include <iostream>

using namespace std;

// 1. Function Overloading
class Cal {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int add(int a, int b, int c) {
        return a + b + c;
    }

    static double add(double a, double b) {
        return a + b;
    }
};

// 2. Operator Overloading
class Test {
private:
    int num;

public:
    Test() : num(8) {}

    // Overloading prefix ++ operator
    void operator++() {
        num = num + 2;
    }

    void Print() const {
        cout << "The Count is: " << num << endl;
    }
};

int main() {
    cout << "=== 1. Function Overloading ===\n";
    cout << "Sum of 10 and 20: " << Cal::add(10, 20) << endl;
    cout << "Sum of 12, 20, and 23: " << Cal::add(12, 20, 23) << endl;
    cout << "Sum of 4.5 and 3.2: " << Cal::add(4.5, 3.2) << endl;
    cout << "\n";

    cout << "=== 2. Operator Overloading ===\n";
    Test tt;
    cout << "Before ++tt: ";
    tt.Print();
    ++tt;
    cout << "After ++tt: ";
    tt.Print();

    return 0;
}
