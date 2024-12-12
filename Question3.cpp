// question3.cpp
/*
Name: Zithile
Student ID: 1113552
Date of Submission: 2024/12/12
*/

#include <iostream>
#include <vector>
using namespace std;

// Recursive helper function for DFS
void dfsHelper(int node, vector<vector<int>> &adjList, vector<int> &visited, vector<int> &dfs) {
    visited[node] = 1; // Mark the current node as visited
    dfs.push_back(node); // Add the node to the result

    // Traverse all neighbors of the current node
    for (int neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            dfsHelper(neighbor, adjList, visited, dfs); // Recursive call for unvisited neighbors
        }
    }
}

// Function to perform DFS traversal
vector<int> dfsTraversal(vector<vector<int>> &adjList) {
    vector<int> visited(adjList.size(), 0); // Track visited nodes
     vector<int> dfs; // Store DFS traversal result
    dfsHelper(0, adjList, visited, dfs); // Start DFS from node 0
    return dfs;
}

int main() {
    vector<vector<int>> adjList = {{2, 2}, {0, 3}, {0, 1, 2, 3}, {1}, {3}};
     vector<int> dfs = dfsTraversal(adjList);

    // Print DFS result
    for (int node : dfs) {
        cout << node << " ";
    }

     return 0;
}

