#include <iostream>
#include <vector>
using namespace std;
int main() {
    int W = 50, v[] = {60, 100, 120}, wt[] = {10, 20, 30};
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < 3; i++)
        for (int w = W; w >= wt[i]; w--)
            dp[w] = max(dp[w], v[i] + dp[w - wt[i]]);
    cout << "Max 0/1 Knapsack Value (DP) = " << dp[W] << "\n";
}
