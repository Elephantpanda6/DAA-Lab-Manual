#include <iostream>
using namespace std;
class MyClass {
public:
    int n;
    string s;
};
int main() {
    MyClass o = {15, "Good Morning"};
    cout << o.n << "\n" << o.s;
}
