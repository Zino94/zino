// question1.cpp
/*
Name: Zithile
Student ID: 1113552
Date of Submission: 2024/12/12
*/

#include <iostream>
#include <vector>
#include <algorithm> // For sorting the adjacency list
using namespace std;

// Function to create the adjacency list of a graph
vector<vector<int>> createAdjacencyList(int V, vector<pair<int, int>> &edges) {
    vector<vector<int>> adjList(V); // Initialize adjacency list for V vertices

    // Add edges to the adjacency list
    for (auto edge : edges) {
        adjList[edge.first].push_back(edge.second);
        adjList[edge.second].push_back(edge.first);
    }

    // Sort the adjacency list for consistency in output
    for (auto &neighbors : adjList) {
        sort(neighbors.begin(), neighbors.end());
    }

    return adjList;
}

int main() {
    int V = 5; // Number of vertices
    vector<pair<int, int>> edges = {{0, 2}, {1, 4}, {4, 1}, {4, 4}, {1, 3}, {1, 2}, {3, 2}};
     vector<vector<int>> adjList = createAdjacencyList(V, edges);

    // Print the adjacency list in the desired format
    for (int i = 0; i < adjList.size(); i++) {
        cout << "Node " << i << " is connected to ";
         for (int j = 0; j < adjList[i].size(); j++) {
            if (j > 0) cout << ",";
            cout << adjList[i][j];
        }
        cout << "." << endl;
    }

    return 0;
}
