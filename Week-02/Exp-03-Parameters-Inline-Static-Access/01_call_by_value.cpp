#include <iostream>

using namespace std;

// Function demonstrating Call by Value
void func(int a, int b) {
    a += b;
    cout << "In func, a = " << a << " b = " << b << "\n";
}

int main() {
    int x = 5, y = 7;
    // Passing parameters by value
    func(x, y);
    cout << "In main, x = " << x << " y = " << y << "\n";

    return 0;
}
