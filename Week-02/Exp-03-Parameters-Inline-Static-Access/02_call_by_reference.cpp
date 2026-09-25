#include <iostream>

using namespace std;

// Swap using pointers (Call by Address)
void swapnum(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

// Swap using C++ references (Call by Reference)
void swapnumRef(int& i, int& j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    int a = 10, b = 20;

    // Passing parameters by address
    swapnum(&a, &b);
    cout << "After pointer swap: a is " << a << " and b is " << b << "\n";

    // Swapping back using C++ references
    swapnumRef(a, b);
    cout << "After reference swap: a is " << a << " and b is " << b << "\n";

    return 0;
}
