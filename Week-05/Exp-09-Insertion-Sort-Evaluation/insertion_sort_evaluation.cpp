#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <random>

using namespace std;
using namespace std::chrono;

// Function to perform Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Helper function to measure and print execution time
void evaluateCase(const string& caseName, vector<int> arr) {
    auto start = high_resolution_clock::now();
    insertionSort(arr);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << caseName << " Case Time: " << duration.count() << " microseconds\n";
}

int main() {
    const int SIZE = 10000; // Array size for evaluation
    vector<int> bestCase(SIZE);
    vector<int> worstCase(SIZE);
    vector<int> averageCase(SIZE);

    // 1. Best Case: Already sorted array
    for (int i = 0; i < SIZE; i++) bestCase[i] = i;

    // 2. Worst Case: Reverse sorted array
    for (int i = 0; i < SIZE; i++) worstCase[i] = SIZE - i;

    // 3. Average Case: Randomly shuffled array
    for (int i = 0; i < SIZE; i++) averageCase[i] = i;
    auto rng = default_random_engine {};
    shuffle(averageCase.begin(), averageCase.end(), rng);

    cout << "Evaluating Insertion Sort with " << SIZE << " elements:\n";
    cout << "-------------------------------------------\n";
    evaluateCase("Best (Sorted)", bestCase);       // Expected: O(n)
    evaluateCase("Worst (Reverse)", worstCase);    // Expected: O(n^2)
    evaluateCase("Average (Random)", averageCase); // Expected: O(n^2)

    return 0;
}
