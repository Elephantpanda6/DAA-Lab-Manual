#include <iostream>
using namespace std;
struct Cal {
    int add(int a, int b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
};
int main() {
    Cal C;
    cout << C.add(10, 20) << "\n" << C.add(12, 20, 23) << "\n";
}
