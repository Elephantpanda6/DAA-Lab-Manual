#include <iostream>
#include <string>

using namespace std;

// Base class (parent)
class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Hello,hai! \n";
    }
};

// Derived class (child)
class Car : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;

    return 0;
}
