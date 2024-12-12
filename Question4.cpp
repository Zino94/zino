// question4.cpp
/*
Name: Zithile
Student ID: 1113552
Date of Submission: 2024/12/12
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to represent an edge with a weight
struct Edge {
    int u, v, weight;
    bool operator<(const Edge &other) const {
        return weight < other.weight; // Sort edges by weight
    }
};

// Find the root of a set using path compression
int findParent(int node, vector<int> &parent) {
    if (parent[node] == node)
        return node;
     return parent[node] = findParent(parent[node], parent);
}

// Union two sets by rank
void unionSets(int u, int v, vector<int> &parent, vector<int> &rank) {
    u = findParent(u, parent);
    v = findParent(v, parent);

     if (rank[u] < rank[v]) {
        parent[u] = v;
    } else if (rank[u] > rank[v]) {
        parent[v] = u;
    }  else {
        parent[v] = u;
        rank[u]++;
    }
}

// Function to find MST using Kruskal's algorithm
int findMST(int V, vector<Edge> &edges) {
    sort(edges.begin(), edges.end()); // Sort edges by weight
    vector<int> parent(V), rank(V, 0);

    // Initialize each node as its own parent
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    int mstWeight = 0;
    // Iterate through sorted edges and build MST
    for (auto edge : edges) {
        if (findParent(edge.u, parent) != findParent(edge.v, parent)) {
            mstWeight += edge.weight; // Add edge weight to MST
            unionSets(edge.u, edge.v, parent, rank); // Union the sets
        }
    }

    return mstWeight;
}

int main() {
    int V = 3, E = 3;
    vector<Edge> edges = {{1, 2, 3}, {2, 4, 5}, {3, 2, 4}};
    cout << "Minimum Spanning Tree Weight: " << findMST(V, edges) << endl;

    return 0;
}

