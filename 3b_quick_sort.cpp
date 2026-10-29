#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void qs(vector<int>& a, int l, int h) {
    if (l >= h) return;
    swap(a[l + rand() % (h - l + 1)], a[h]);
    int i = l;
    for (int j = l; j < h; j++)
        if (a[j] < a[h]) swap(a[i++], a[j]);
    swap(a[i], a[h]);
    qs(a, l, i - 1);
    qs(a, i + 1, h);
}
int main() {
    cout << "--- QUICK SORT PERFORMANCE STUDY ---\nInput_Size(N),Execution_Time(ms)\n";
    for (int n = 10000; n <= 100000; n += 10000) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) a[i] = rand() % 100000;
        clock_t s = clock();
        qs(a, 0, n - 1);
        cout << n << "," << (clock() - s) * 1000 / CLOCKS_PER_SEC << "\n";
    }
}
