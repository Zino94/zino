// question2.cpp
/*
Name: Zithile
Student ID: 1113552
Date of Submission: 2024/12/12
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS traversal
vector<int> bfsTraversal(vector<vector<int>> &adjList) {
    vector<int> visited(adjList.size(), 0); // Track visited nodes
     vector<int> bfs; // Store BFS traversal result
    queue<int> q; // Queue for BFS

    visited[0] = 1; // Start BFS from node 0
    q.push(0);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node); // Add the current node to the result

        // Traverse all neighbors of the current node
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1; // Mark neighbor as visited
                q.push(neighbor); // Add neighbor to the queue
            }
        }
    }

    return bfs;
}

int main() {
    vector<vector<int>> adjList = {{1, 1, 1}, {1}, {1, 4}, {2}, {1}};
     vector<int> bfs = bfsTraversal(adjList);

    // Print BFS result
    for (int node : bfs) {
        cout << node << " ";
    }

    return 0;
}

