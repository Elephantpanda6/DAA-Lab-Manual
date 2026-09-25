# Experiment 11: Quick Sort Performance Study

## Aim
Implement Randomized Quick Sort, benchmark execution times across various input sizes ($N = 10,000$ to $100,000$), and export the results to CSV format to enable plotting Time vs $N$.

## Theoretical Complexity
- **Average & Best Case**: $\mathcal{O}(n \log n)$
- **Worst Case**: $\mathcal{O}(n^2)$ (mitigated using randomized pivot selection)
- **Auxiliary Stack Space**: $\mathcal{O}(\log n)$

## Compilation & Execution
```bash
g++ -std=c++17 -O2 -Wall quick_sort_performance.cpp -o quick_sort_performance.exe
./quick_sort_performance.exe
```

## Sample CSV Output
```csv
--- QUICK SORT PERFORMANCE STUDY ---
Copy the data below into a .csv file to plot Time vs N

Input_Size(N),Execution_Time(ms)
10000,2
20000,5
30000,8
40000,10
50000,13
60000,16
70000,19
80000,23
90000,26
100000,29
```
