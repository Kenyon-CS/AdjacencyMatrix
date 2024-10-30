#include <iostream>
#include <vector>
using namespace std;

int main() {
    // n is the number of vertices, m is the number of edges
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    // Initialize an (n+1)x(n+1) adjacency matrix with zeros
    vector<vector<int>> adjMat(n + 1, vector<int>(n + 1, 0));

    cout << "Enter the edges (u, v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;  // Comment this line for a directed graph
    }

    // Display the adjacency matrix
    cout << "\nAdjacency Matrix:" << endl;
    cout << "  ";  // Align column headers
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        for (int j = 1; j <= n; j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
