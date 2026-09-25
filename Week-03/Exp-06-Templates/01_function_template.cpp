#include <iostream>

using namespace std;

// Function template for generic addition
template <class T>
T add(T a, T b) {
    T result = a + b;
    return result;
}

int main() {
    int i = 2, j = 3;
    float m = 2.3f, n = 1.2f;

    cout << "Addition of i and j is: " << add(i, j) << '\n';
    cout << "Addition of m and n is: " << add(m, n) << '\n';

    return 0;
}
