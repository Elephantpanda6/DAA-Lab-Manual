#include <iostream>

using namespace std;

class Student {
public:
    // static member variable shared across all objects
    static int total;

    // Constructor increments total count
    Student() {
        total += 1;
    }
};

// Definition of static member outside the class
int Student::total = 0;

int main() {
    // Student 1 declared
    Student s1;
    cout << "Number of students: " << s1.total << endl;

    // Student 2 declared
    Student s2;
    cout << "Number of students: " << s2.total << endl;

    // Student 3 declared
    Student s3;
    cout << "Number of students: " << s3.total << endl;

    return 0;
}
