#include <iostream>
#include <cmath>
using namespace std;
int n = 4, q[10], cnt = 1;
void nq(int c) {
    if (c == n) {
        cout << "Solution #" << cnt++ << ":\n";
        for (int i = 0; i < n; i++, cout << "\n")
            for (int j = 0; j < n; j++) cout << (q[j] == i ? "Q " : ". ");
        cout << "\n";
        return;
    }
    for (int r = 0; r < n; r++) {
        bool ok = 1;
        for (int j = 0; j < c; j++)
            if (q[j] == r || abs(q[j] - r) == c - j) ok = 0;
        if (ok) q[c] = r, nq(c + 1);
    }
}
int main() { nq(0); }
