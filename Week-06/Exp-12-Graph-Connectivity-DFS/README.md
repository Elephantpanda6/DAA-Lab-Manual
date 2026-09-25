# Experiment 12: Graph Connectivity Check via Depth-First Search (DFS)

## Aim
Use Depth-First Search (DFS) on an undirected graph represented as an adjacency list to determine whether all vertices belong to a single connected component.

## Algorithm
1. Initialize a `visited` boolean array of size $V$ with `false`.
2. Locate the first vertex with non-zero degree to initiate DFS.
3. Traverse the component using recursive DFS, marking reachable vertices as `true`.
4. Iterate over all vertices: if any vertex with incident edges remains unvisited, the graph is **NOT CONNECTED**. Otherwise, it is **CONNECTED**.

## Complexity
- **Time Complexity**: $\mathcal{O}(V + E)$ where $V$ is vertices and $E$ is edges.
- **Space Complexity**: $\mathcal{O}(V)$ for the recursion stack and visited array.

## Compilation & Execution
```bash
g++ -std=c++17 -Wall graph_connectivity_dfs.cpp -o graph_connectivity_dfs.exe
./graph_connectivity_dfs.exe
```

## Sample Output
```
--- GRAPH CONNECTIVITY CHECK ---

Graph 1 status: The graph is CONNECTED.
Graph 2 status: The graph is NOT CONNECTED.
```
