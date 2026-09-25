#include <iostream>

using namespace std;

// Defining default arguments in function prototype
void display(char c = '*', int count = 3);

int main() {
    int count = 5;

    cout << "No argument passed: ";
    display(); // Uses defaults: '*' and 3

    cout << "First argument passed: ";
    display('#', count); // Uses '#', 5

    cout << "Both arguments passed: ";
    display('$', count); // Uses '$', 5

    return 0;
}

void display(char c, int count) {
    for (int i = 1; i <= count; ++i) {
        cout << c;
    }
    cout << endl;
}
