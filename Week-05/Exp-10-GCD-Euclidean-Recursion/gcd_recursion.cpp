#include <iostream>
#include <cstdlib>

using namespace std;

// Recursive function to calculate GCD and count steps
int findGCD(int a, int b, int& stepCount) {
    // Base case: if b becomes 0, GCD is a
    if (b == 0) {
        return a;
    }
    stepCount++; // Increment the recursion counter
    return findGCD(b, a % b, stepCount);
}

int main() {
    int num1, num2;
    int stepCount = 0;

    cout << "Enter two integers: ";
    if (!(cin >> num1 >> num2)) {
        cout << "Invalid input.\n";
        return 1;
    }

    // Handle negative inputs by taking absolute values
    int a = abs(num1);
    int b = abs(num2);

    int gcd = findGCD(a, b, stepCount);

    cout << "\nResults:\n";
    cout << "-------------------------\n";
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << "\n";
    cout << "Total recursive steps taken: " << stepCount << "\n";

    return 0;
}
