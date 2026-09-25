#include <iostream>

using namespace std;

class Student {
    int rno;
    char name[50];
    double fee;

public:
    // Default constructor prompting user input
    Student() {
        cout << "Enter the RollNo: ";
        cin >> rno;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the Fee: ";
        cin >> fee;
    }

    void display() const {
        cout << endl << rno << "\t" << name << "\t" << fee << endl;
    }
};

int main() {
    // Constructor is called automatically when object is created
    Student s;
    s.display();

    return 0;
}
