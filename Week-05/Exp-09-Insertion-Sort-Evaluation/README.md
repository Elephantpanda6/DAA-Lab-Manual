# Experiment 9: Insertion Sort Evaluation

## Aim
Implement Insertion Sort and empirically analyze its execution time across:
1. **Best Case**: Already sorted array ($1$ to $N$).
2. **Worst Case**: Inverted / Reverse sorted array ($N$ down to $1$).
3. **Average Case**: Randomly shuffled array.

## Mathematical Complexities
- **Best Case**: $\mathcal{O}(n)$ — each element requires only 1 comparison and 0 shifts.
- **Worst Case**: $\mathcal{O}(n^2)$ — requires maximum comparisons and shifts ($\frac{n(n-1)}{2}$).
- **Average Case**: $\mathcal{O}(n^2)$ — expected average shifts of half the sorted sub-array.
- **Space Complexity**: $\mathcal{O}(1)$ in-place auxiliary memory.

## Compilation & Execution
```bash
g++ -std=c++17 -O2 -Wall insertion_sort_evaluation.cpp -o insertion_sort_evaluation.exe
./insertion_sort_evaluation.exe
```

## Sample Output
```
Evaluating Insertion Sort with 10000 elements:
-------------------------------------------
Best (Sorted) Case Time: 15 microseconds
Worst (Reverse) Case Time: 43210 microseconds
Average (Random) Case Time: 21850 microseconds
```
