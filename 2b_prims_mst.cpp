#include <iostream>
#include <vector>
using namespace std;
int main() {
    int V = 5, g[5][5] = {{0,2,0,6,0},{2,0,3,8,5},{0,3,0,0,7},{6,8,0,0,9},{0,5,7,9,0}};
    vector<int> p(V, -1), k(V, 1e9), vis(V, 0);
    k[0] = 0;
    for (int c = 0; c < V - 1; c++) {
        int u = -1;
        for (int v = 0; v < V; v++)
            if (!vis[v] && (u < 0 || k[v] < k[u])) u = v;
        vis[u] = 1;
        for (int v = 0; v < V; v++)
            if (g[u][v] && !vis[v] && g[u][v] < k[v]) p[v] = u, k[v] = g[u][v];
    }
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << p[i] << " - " << i << " \t" << g[i][p[i]] << "\n";
}
