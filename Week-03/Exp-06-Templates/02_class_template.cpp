#include <iostream>

using namespace std;

// Class template for holding and retrieving generic numeric values
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
    // Create object with int type
    Number<int> numberInt(7);

    // Create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
