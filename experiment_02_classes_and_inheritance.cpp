/*
 * EXPERIMENT 02: Sample Programs on Classes and Inheritance in C++
 * Aim: Demonstrate class definition, object instantiation, attribute manipulation,
 *      and single inheritance where a derived class (Car) inherits from a base
 *      class (Vehicle).
 *
 * Compilation: g++ -std=c++17 -Wall experiment_02_classes_and_inheritance.cpp -o experiment_02.exe
 */

#include <iostream>
#include <string>

using namespace std;

// Part 1: Class and Object Demonstration
class MyClass {
public:
    int myNum;
    string myString;
};

// Part 2: Inheritance Demonstration
class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Hello,hai! \n";
    }
};

class Car : public Vehicle {
public:
    string model = "Mustang";
};

int main() {
    cout << "=== 1. Class and Object Demonstration ===\n";
    MyClass myObj;
    myObj.myNum = 15;
    myObj.myString = "Good Morning";
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n\n";

    cout << "=== 2. Inheritance Demonstration ===\n";
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model << endl;

    return 0;
}
