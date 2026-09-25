/*
 * EXPERIMENT 06: Function and Class Templates
 * Aim: Write generic, reusable code using C++ templates:
 *      1. Function template add<T>(a, b)
 *      2. Class template Number<T>
 *
 * Compilation: g++ -std=c++17 -Wall experiment_06_function_and_class_templates.cpp -o experiment_06.exe
 */

#include <iostream>

using namespace std;

// 1. Function Template
template <class T>
T add(T a, T b) {
    return a + b;
}

// 2. Class Template
template <class T>
class Number {
private:
    T num;

public:
    Number(T n) : num(n) {}

    T getNum() const {
        return num;
    }
};

int main() {
    cout << "=== 1. Function Template ===\n";
    int i = 2, j = 3;
    float m = 2.3f, n = 1.2f;
    cout << "Addition of i and j is: " << add(i, j) << '\n';
    cout << "Addition of m and n is: " << add(m, n) << '\n';
    cout << "\n";

    cout << "=== 2. Class Template ===\n";
    Number<int> numberInt(7);
    Number<double> numberDouble(7.7);
    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
