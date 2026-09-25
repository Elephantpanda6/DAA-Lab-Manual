/*
 * EXPERIMENT 11: Quick Sort Performance Study
 * Aim: Implement Randomized Quick Sort, record execution time for various input sizes
 *      (10,000 to 100,000), and output CSV format data for plotting Time vs N.
 *
 * Complexity: Average/Best O(n log n), Worst O(n^2), Auxiliary Stack O(log n)
 *
 * Compilation: g++ -std=c++17 -O2 -Wall experiment_11_quick_sort_performance.cpp -o experiment_11.exe
 */

#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace std::chrono;

int partition(vector<int>& arr, int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    swap(arr[pivotIndex], arr[high]);
    int pivot = arr[high];

    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0));
    vector<int> sizes = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};

    cout << "--- QUICK SORT PERFORMANCE STUDY ---" << endl;
    cout << "Copy the data below into a .csv file to plot Time vs N\n" << endl;
    cout << "Input_Size(N),Execution_Time(ms)" << endl;

    for (int n : sizes) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 100000;
        }

        auto start = high_resolution_clock::now();
        quickSort(arr, 0, n - 1);
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<milliseconds>(stop - start);
        cout << n << "," << duration.count() << endl;
    }

    return 0;
}
