# Experiment 10: GCD via Recursion (Euclidean Algorithm)

## Aim
To implement the Euclidean algorithm recursively to find the Greatest Common Divisor (GCD) of two integers and trace the number of recursive reduction steps.

## Principle
The Euclidean algorithm relies on the recurrence:
$$\gcd(a, b) = \gcd(b, a \pmod b)$$
with base case:
$$\gcd(a, 0) = a$$

## Complexity
- **Time Complexity**: $\mathcal{O}(\log(\min(a, b)))$ (by Lamé's theorem, consecutive Fibonacci numbers represent the worst-case number of steps).
- **Space Complexity**: $\mathcal{O}(\log(\min(a, b)))$ recursion call stack depth.

## Compilation & Execution
```bash
g++ -std=c++17 -Wall gcd_recursion.cpp -o gcd_recursion.exe
./gcd_recursion.exe
```

## Sample Output
```
Enter two integers: 105 252

Results:
-------------------------
GCD of 105 and 252 is: 21
Total recursive steps taken: 4
```
