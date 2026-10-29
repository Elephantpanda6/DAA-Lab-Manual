#include <iostream>
#include <cmath>
using namespace std;
int s = 0;
int gcd(int a, int b) { return b ? (++s, gcd(b, a % b)) : a; }
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int g = gcd(abs(a), abs(b));
    cout << "\nResults:\n-------------------------\nGCD of " << a << " and " << b
         << " is: " << g << "\nTotal recursive steps taken: " << s << "\n";
}
