#include <iostream>
using namespace std;
void show(char c = '*', int n = 3) {
    cout << string(n, c) << "\n";
}
int main() {
    cout << "No argument passed: "; show();
    cout << "First argument passed: "; show('#', 5);
    cout << "Both arguments passed: "; show('$', 5);
}
