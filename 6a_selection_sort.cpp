#include <iostream>
using namespace std;
int main() {
    int a[] = {64, 25, 12, 22, 11, 90, 88, 45, 5, 33}, n = 10, cmp = 0, swp = 0;
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (++cmp && a[j] < a[m]) m = j;
        if (m != i) swap(a[i], a[m]), swp++;
    }
    cout << "\n\nSorted array:   ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n\n--- Complexity Analysis Data ---\nTotal Comparisons: " << cmp << "\nTotal Swaps:       " << swp << "\n";
}
