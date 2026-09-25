#include <iostream>

using namespace std;

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

int main() {
    Cal C;
    cout << "add(10, 20)       = " << C.add(10, 20) << endl;
    cout << "add(12, 20, 23)   = " << C.add(12, 20, 23) << endl;
    cout << "add(4.5, 3.2)     = " << Cal::add(4.5, 3.2) << endl;

    return 0;
}
