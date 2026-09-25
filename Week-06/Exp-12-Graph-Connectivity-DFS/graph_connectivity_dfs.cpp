#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

    // Helper function for DFS traversal
    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true;
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }

public:
    // Constructor
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    // Function to add an undirected edge
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected graph
    }

    // Function to check if the graph is connected
    bool isConnected() {
        vector<bool> visited(V, false);

        // Find a vertex with at least one edge to start DFS
        int startVertex = -1;
        for (int i = 0; i < V; i++) {
            if (!adj[i].empty()) {
                startVertex = i;
                break;
            }
        }

        // If the graph has vertices but no edges, it is connected only if V <= 1
        if (startVertex == -1) {
            return V <= 1;
        }

        // Run DFS traversal from the identified starting vertex
        DFSUtil(startVertex, visited);

        // Check if all vertices with edges were visited
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

    // Example 1: Connected Graph (5 vertices: 0-1-2-3-4 connected)
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

    // Example 2: Disconnected Graph (Component 1: {0,1,2}, Component 2: {3,4})
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
