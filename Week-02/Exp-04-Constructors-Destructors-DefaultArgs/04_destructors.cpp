#include <iostream>

using namespace std;

class Demo {
    int id;

public:
    Demo(int i) : id(i) {
        cout << "Constructor called for Object " << id << endl;
    }

    ~Demo() {
        cout << "Destructor called for Object " << id << endl;
    }
};

int main() {
    cout << "--- Destructor Demonstration ---\n";
    Demo d1(1);

    {
        cout << "Entering inner block:\n";
        Demo d2(2);
        cout << "Exiting inner block:\n";
    } // d2 goes out of scope and is destroyed here

    Demo d3(3);
    cout << "Exiting main function:\n";

    return 0;
}
