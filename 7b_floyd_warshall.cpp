#include <iostream>
using namespace std;
int main() {
    int V = 4, I = 1e8, d[4][4] = {{0,5,I,10},{I,0,3,I},{I,I,0,1},{I,I,I,0}};
    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++, cout << "\n")
        for (int j = 0; j < V; j++)
            if (d[i][j] >= I) cout << "INF\t";
            else cout << d[i][j] << "\t";
}
