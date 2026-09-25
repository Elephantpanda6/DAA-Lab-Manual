/*
 * EXPERIMENT 08: Factorial Computation (Iterative and Recursive)
 * Aim: Write both iterative and recursive versions to compute n!; compare their
 *      runtimes using <chrono> and compare their call-stack depths.
 *
 * Complexity: Iterative O(n) time, O(1) space | Recursive O(n) time, O(n) space
 *
 * Compilation: g++ -std=c++17 -Wall experiment_08_factorial_computation.cpp -o experiment_08.exe
 */

#include <iostream>
#include <chrono>

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

unsigned long long factorialRecursive(int n, int current_depth, int& max_depth) {
    if (current_depth > max_depth) {
        max_depth = current_depth;
    }
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1, current_depth + 1, max_depth);
}

int main() {
    int n = 15;
    std::cout << "Factorial Computation for n = " << n << "\n";

    // 1. Iterative Execution & Timing
    auto start_iter = std::chrono::high_resolution_clock::now();
    unsigned long long iter_res = factorialIterative(n);
    auto end_iter = std::chrono::high_resolution_clock::now();
    auto duration_iter = std::chrono::duration_cast<std::chrono::nanoseconds>(end_iter - start_iter).count();

    // 2. Recursive Execution & Timing
    int max_stack_depth = 0;
    auto start_recur = std::chrono::high_resolution_clock::now();
    unsigned long long recur_res = factorialRecursive(n, 1, max_stack_depth);
    auto end_recur = std::chrono::high_resolution_clock::now();
    auto duration_recur = std::chrono::duration_cast<std::chrono::nanoseconds>(end_recur - start_recur).count();

    std::cout << "\nResults:\n";
    std::cout << "Iterative Result: " << iter_res << " | Time: " << duration_iter << " ns\n";
    std::cout << "Recursive Result: " << recur_res << " | Time: " << duration_recur << " ns\n";

    std::cout << "\n--- Direct Performance Comparison ---\n";
    std::cout << "Metric\t\tIterative Version\tRecursive Version\n";
    std::cout << "---------------------------------------------------------\n";
    std::cout << "Time (ns)\t" << duration_iter << "\t\t\t" << duration_recur << "\n";
    std::cout << "Stack Depth\t1 (Constant O(1))\t" << max_stack_depth << " (Linear O(n))\n";

    return 0;
}
