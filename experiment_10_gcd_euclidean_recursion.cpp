/*
 * EXPERIMENT 10: GCD via Recursion (Euclidean Algorithm)
 * Aim: Use the Euclidean algorithm recursively to find the Greatest Common Divisor
 *      and count the number of recursive steps.
 *
 * Complexity: Time O(log(min(a, b))), Space O(log(min(a, b)))
 *
 * Compilation: g++ -std=c++17 -Wall experiment_10_gcd_euclidean_recursion.cpp -o experiment_10.exe
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int findGCD(int a, int b, int& stepCount) {
    if (b == 0) {
        return a;
    }
    stepCount++;
    return findGCD(b, a % b, stepCount);
}

int main() {
    int num1 = 105, num2 = 252;
    int stepCount = 0;

    int a = abs(num1);
    int b = abs(num2);

    int gcd = findGCD(a, b, stepCount);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << "\n";
    cout << "Total recursive steps taken: " << stepCount << "\n";

    return 0;
}
