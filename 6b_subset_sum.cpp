#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a[] = {3, 34, 4, 12, 5, 2}, s = 9;
    vector<int> dp(s + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < 6; i++)
        for (int j = s; j >= a[i]; j--) dp[j] |= dp[j - a[i]];
    cout << (dp[s] ? "Found a subset with given sum\n" : "No subset with given sum\n");
}
