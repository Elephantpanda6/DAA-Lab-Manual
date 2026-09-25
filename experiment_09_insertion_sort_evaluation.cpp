/*
 * EXPERIMENT 09: Insertion Sort Evaluation
 * Aim: Implement Insertion Sort and empirically analyze its time complexity across
 *      best (sorted), worst (reverse), and average (random) cases.
 *
 * Complexity: Best O(n), Average O(n^2), Worst O(n^2), Space O(1)
 *
 * Compilation: g++ -std=c++17 -O2 -Wall experiment_09_insertion_sort_evaluation.cpp -o experiment_09.exe
 */

#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>
#include <random>

using namespace std;
using namespace std::chrono;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void evaluateCase(const string& caseName, vector<int> arr) {
    auto start = high_resolution_clock::now();
    insertionSort(arr);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << caseName << " Case Time: " << duration.count() << " microseconds\n";
}

int main() {
    const int SIZE = 10000;
    vector<int> bestCase(SIZE);
    vector<int> worstCase(SIZE);
    vector<int> averageCase(SIZE);

    for (int i = 0; i < SIZE; i++) bestCase[i] = i;
    for (int i = 0; i < SIZE; i++) worstCase[i] = SIZE - i;
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
