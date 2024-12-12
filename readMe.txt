Zithile 11113552  2024/12/12
Question 1

Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.
input: {{3, 4}, {4, 4}, {4, 2}, {3, 4}, {3, 3}, {1, 1}, {2, 2}}
output: 
Node 0 is connected to .
Node 1 is connected to 1,1.
Node 2 is connected to 2,2,4.
Node 3 is connected to 3,3,4,4.
Node 4 is connected to 2,3,3,4,4.


Question 2

Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] 
represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, 
visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.

input: {{1, 2, 3}, {1}, {2, 2}, {2}, {5}}
output: 0 1 2 3


Question 3

Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] 
represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting 
vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.

input: {{3, 3}, {1, 2}, {0, 2, 3, 4}, {1}, {3}}
output: 0 3 1 2 4


Question 4 

Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges 
in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector 
containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer 
denoting the weight of the edge.

input: {{2, 2, 2}, {2, 2, 3}, {2, 1, 1}}
output: Minimum Spanning Tree Weight: 1
