#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    int comparisons = 0;
    int swaps = 0;

    std::cout << "Original array: ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n\n";

    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            comparisons++;
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap if a smaller element was found
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
            swaps++;
        }
    }

    std::cout << "Sorted array:   ";
    for (int val : arr) std::cout << val << " ";
    std::cout << "\n\n";

    std::cout << "--- Complexity Analysis Data ---\n";
    std::cout << "Total Comparisons: " << comparisons << "\n";
    std::cout << "Total Swaps:       " << swaps << "\n";
}

int main() {
    // 10 elements to sort
    std::vector<int> data = {64, 25, 12, 22, 11, 90, 88, 45, 5, 33};
    selectionSort(data);

    return 0;
}
