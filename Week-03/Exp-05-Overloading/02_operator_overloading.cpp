#include <iostream>

using namespace std;

class Test {
private:
    int num;

public:
    Test() : num(8) {}

    // Overloading unary prefix ++ operator
    void operator++() {
        num = num + 2;
    }

    void Print() const {
        cout << "The Count is: " << num << endl;
    }
};

int main() {
    Test tt;
    cout << "Initial: ";
    tt.Print();

    ++tt; // Calling overloaded operator ++
    cout << "After ++tt: ";
    tt.Print();

    return 0;
}
