# Experiment 8: Factorial Computation (Iterative vs Recursive)

## Aim
Write both iterative and recursive implementations to calculate $n!$, measure their runtime in nanoseconds using `<chrono>`, and compare their memory stack call depths.

## Theoretical Comparison
| Metric | Iterative Approach | Recursive Approach |
| :--- | :--- | :--- |
| **Time Complexity** | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| **Auxiliary Space** | $\mathcal{O}(1)$ (Constant) | $\mathcal{O}(n)$ (Call stack frames) |
| **Function Overhead** | None (Simple loop counter) | High (Stack pushes, frame allocation) |

## Compilation & Execution
```bash
g++ -std=c++17 -Wall factorial_comparison.cpp -o factorial_comparison.exe
./factorial_comparison.exe
```

## Sample Input / Output
```
Enter a number to calculate factorial (e.g., 15): 15

Results:
Iterative Result: 1307674368000 | Time Taken: 40 ns
Recursive Result: 1307674368000 | Time Taken: 120 ns

--- Direct Performance Comparison ---
Metric          Iterative Version       Recursive Version
---------------------------------------------------------
Time (ns)       40                      120
Stack Depth     1 (Constant O(1))       15 (Linear O(n))
```
