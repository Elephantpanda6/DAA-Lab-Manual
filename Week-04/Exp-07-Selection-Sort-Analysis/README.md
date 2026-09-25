# Experiment 7: Selection Sort Analysis

## Aim
Implement Selection Sort for a dataset of 10 elements, instrument the algorithm to count total comparisons and swaps, and analyze its theoretical and empirical time complexity.

## Algorithm
1. Iterate $i$ from $0$ to $n-2$:
   - Initialize `min_idx = i`.
   - Iterate $j$ from $i+1$ to $n-1$:
     - Increment `comparisons`.
     - If $arr[j] < arr[min\_idx]$, update `min_idx = j`.
   - If $min\_idx \neq i$, swap $arr[i]$ and $arr[min\_idx]$ and increment `swaps`.
2. Output sorted array and total operation counts.

## Complexity Analysis
- **Comparisons**: $\frac{n(n-1)}{2} = \frac{10 \times 9}{2} = 45$ (invariant across all inputs).
- **Swaps**: Worst case $n-1 = 9$, Best case $0$.
- **Time Complexity**: $\mathcal{O}(n^2)$ for best, average, and worst cases.
- **Space Complexity**: $\mathcal{O}(1)$ (in-place).

## Compilation & Execution
```bash
g++ -std=c++17 -Wall selection_sort_analysis.cpp -o selection_sort_analysis.exe
./selection_sort_analysis.exe
```

## Sample Output
```
Original array: 64 25 12 22 11 90 88 45 5 33 

Sorted array:   5 11 12 22 25 33 45 64 88 90 

--- Complexity Analysis Data ---
Total Comparisons: 45
Total Swaps:       8
```
