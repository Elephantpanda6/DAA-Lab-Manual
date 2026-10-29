#include <iostream>
using namespace std;
class Op {
    int a, b;
public:
    inline void get() { cout << "Enter first value:"; cin >> a; cout << "Enter second value:"; cin >> b; }
    inline void sum() { cout << "Addition of two numbers: " << a + b << "\n"; }
    inline void sub() { cout << "Difference of two numbers: " << a - b << "\n"; }
    inline void mul() { cout << "Product of two numbers: " << a * b << "\n"; }
    inline void div() { cout << "Division of two numbers: " << a / b << "\n"; }
};
int main() {
    cout << "Program using inline function\n";
    Op s; s.get(); s.sum(); s.sub(); s.mul(); s.div();
}
