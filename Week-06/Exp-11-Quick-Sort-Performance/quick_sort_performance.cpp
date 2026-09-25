#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace std::chrono;

// Partition function using a random pivot
int partition(vector<int>& arr, int low, int high) {
    // Choose a random pivot index between low and high
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

// Quick Sort recursive implementation
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0)); // Seed for random number generation

    // Input sizes to test
    vector<int> sizes = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};

    cout << "--- QUICK SORT PERFORMANCE STUDY ---" << endl;
    cout << "Copy the data below into a .csv file to plot Time vs N\n" << endl;
    cout << "Input_Size(N),Execution_Time(ms)" << endl;

    for (int n : sizes) {
        // Generate random dataset of size N
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 100000;
        }

        // Record starting time
        auto start = high_resolution_clock::now();
        quickSort(arr, 0, n - 1);
        // Record ending time
        auto stop = high_resolution_clock::now();

        // Calculate duration in milliseconds
        auto duration = duration_cast<milliseconds>(stop - start);
        cout << n << "," << duration.count() << endl;
    }

    return 0;
}
