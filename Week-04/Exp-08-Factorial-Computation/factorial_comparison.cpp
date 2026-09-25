#include <iostream>
#include <chrono>

// Iterative Factorial
unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Recursive Factorial with Stack Depth tracking
unsigned long long factorialRecursive(int n, int current_depth, int& max_depth) {
    if (current_depth > max_depth) {
        max_depth = current_depth;
    }
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1, current_depth + 1, max_depth);
}

int main() {
    int n;
    std::cout << "Enter a number to calculate factorial (e.g., 15): ";
    if (!(std::cin >> n) || n < 0 || n > 20) {
        std::cout << "Please enter a valid positive integer between 0 and 20 (to prevent 64-bit overflow).\n";
        return 1;
    }

    // 1. Iterative Execution & Timing
    auto start_iter = std::chrono::high_resolution_clock::now();
    unsigned long long iter_res = factorialIterative(n);
    auto end_iter = std::chrono::high_resolution_clock::now();
    auto duration_iter = std::chrono::duration_cast<std::chrono::nanoseconds>(end_iter - start_iter).count();

    // 2. Recursive Execution & Timing
    int max_stack_depth = 0;
    auto start_recur = std::chrono::high_resolution_clock::now();
    unsigned long long recur_res = factorialRecursive(n, 1, max_stack_depth); // Starts at depth 1
    auto end_recur = std::chrono::high_resolution_clock::now();
    auto duration_recur = std::chrono::duration_cast<std::chrono::nanoseconds>(end_recur - start_recur).count();

    // Outputs
    std::cout << "\nResults:\n";
    std::cout << "Iterative Result: " << iter_res << " | Time Taken: " << duration_iter << " ns\n";
    std::cout << "Recursive Result: " << recur_res << " | Time Taken: " << duration_recur << " ns\n";

    // Direct Structural Comparison
    std::cout << "\n--- Direct Performance Comparison ---\n";
    std::cout << "Metric\t\tIterative Version\tRecursive Version\n";
    std::cout << "---------------------------------------------------------\n";
    std::cout << "Time (ns)\t" << duration_iter << "\t\t\t" << duration_recur << "\n";
    std::cout << "Stack Depth\t1 (Constant O(1))\t" << max_stack_depth << " (Linear O(n))\n";

    return 0;
}
