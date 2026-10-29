#include <iostream>
#include <algorithm>
using namespace std;
struct Item { int v, w; };
bool cmp(Item x, Item y) { return x.v * y.w > y.v * x.w; }
int main() {
    int W = 50;
    Item a[] = {{60, 10}, {100, 20}, {120, 30}};
    sort(a, a + 3, cmp);
    double ans = 0;
    for (int i = 0; i < 3; i++) {
        int t = min(W, a[i].w);
        ans += t * 1.0 * a[i].v / a[i].w;
        W -= t;
    }
    cout << "Maximum value in Fractional Knapsack = " << ans << "\n";
}
