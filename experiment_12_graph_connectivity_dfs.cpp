/*
 * EXPERIMENT 12: Graph Connectivity Check via DFS
 * Aim: Use Depth-First Search (DFS) on an undirected graph with adjacency list
 *      representation to determine whether the graph is connected.
 *
 * Complexity: Time O(V + E), Space O(V)
 *
 * Compilation: g++ -std=c++17 -Wall experiment_12_graph_connectivity_dfs.cpp -o experiment_12.exe
 */

#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isConnected() {
        vector<bool> visited(V, false);
        int startVertex = -1;
        for (int i = 0; i < V; i++) {
            if (!adj[i].empty()) {
                startVertex = i;
                break;
            }
        }

        if (startVertex == -1) {
            return V <= 1;
        }

        DFSUtil(startVertex, visited);

        for (int i = 0; i < V; i++) {
            if (!visited[i] && !adj[i].empty()) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    cout << "--- GRAPH CONNECTIVITY CHECK ---\n" << endl;

    // Graph 1: Connected Graph (vertices 0-1-2-3-4 connected)
    Graph g1(5);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 2);
    g1.addEdge(3, 4);
    g1.addEdge(2, 3);

    cout << "Graph 1 status: ";
    if (g1.isConnected())
        cout << "The graph is CONNECTED." << endl;
    else
        cout << "The graph is NOT CONNECTED." << endl;

    // Graph 2: Disconnected Graph
    Graph g2(5);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(3, 4);

    cout << "Graph 2 status: ";
    if (g2.isConnected())
        cout << "The graph is CONNECTED." << endl;
    else
        cout << "The graph is NOT CONNECTED." << endl;

    return 0;
}
