#include <iostream>
#include <string>

using namespace std;

class Employee {
    int id;
    string name;
    double salary;

public:
    // Using 'this' to resolve ambiguity between parameter names and member variables
    Employee(int id, string name, double salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    // Returning reference *this allows method chaining
    Employee& setSalary(double salary) {
        this->salary = salary;
        return *this;
    }

    void display() const {
        cout << "ID: " << this->id << " | Name: " << this->name
             << " | Salary: $" << this->salary << endl;
    }
};

int main() {
    cout << "--- 'this' Pointer Demonstration ---\n";
    Employee emp(101, "Alice", 65000);
    emp.display();

    cout << "After salary update via method chaining:\n";
    emp.setSalary(72000).display();

    return 0;
}
