#include <iostream>

using namespace std;

class operation {
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void operation::get() {
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
}

inline void operation::sum() {
    add = a + b;
    cout << "Addition of two numbers: " << add << "\n";
}

inline void operation::difference() {
    sub = a - b;
    cout << "Difference of two numbers: " << sub << "\n";
}

inline void operation::product() {
    mul = a * b;
    cout << "Product of two numbers: " << mul << "\n";
}

inline void operation::division() {
    if (b != 0) {
        div = static_cast<float>(a) / b;
        cout << "Division of two numbers: " << div << "\n";
    } else {
        cout << "Division by zero is undefined.\n";
    }
}

int main() {
    cout << "Program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();

    return 0;
}
