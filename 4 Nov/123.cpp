#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function for DFS traversal
void DFS(int start, vector<vector<int>> &adj, vector<bool> &visited) {
    stack<int> s;
    s.push(start);
    visited[start] = true;

    cout << "DFS Traversal: ";

    while (!s.empty()) {
        int node = s.top();
        s.pop();
        cout << node << " ";

        // Traverse adjacent nodes
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                s.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    cout << endl;
}

int main() {
    // Number of nodes
    int n = 6;

    // Adjacency list representation
    vector<vector<int>> adj(n + 1);
    adj[1] = {2, 3};
    adj[2] = {4, 5};
    adj[3] = {6};

    // Visited array
    vector<bool> visited(n + 1, false);

    // Start DFS from node 1
    DFS(1, adj, visited);

    return 0;
}

