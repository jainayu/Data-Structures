## Graphs

Graphs are mathematical structures that represent pairwise relationships between objects. A graph is a flow structure that represents the relationship between various objects. It can be visualized by using the following two basic components:

- Nodes: These are the most important components in any graph. Nodes are entities whose relationships are expressed using edges. If a graph comprises 2 nodes A and B and an undirected edge between them, then it expresses a bi-directional relationship between the nodes and edge.

- Edges: Edges are the components that are used to represent the relationships between various nodes in a graph. An edge between two nodes expresses a one-way or two-way relationship between the nodes.

**Types of nodes:**

- Root node: The root node is the ancestor of all other nodes in a graph. It does not have any ancestor. Each graph consists of exactly one root node. Generally, you must start traversing a graph from the root node.

- Leaf nodes: In a graph, leaf nodes represent the nodes that do not have any successors. These nodes only have ancestor nodes. They can have any number of incoming edges but they will not have any outgoing edges.

**Types of graphs**

- Undirected: An undirected graph is a graph in which all the edges are bi-directional i.e. the edges do not point in any specific direction.
- Directed: A directed graph is a graph in which all the edges are uni-directional i.e. the edges point in a single direction.
- Weighted: In a weighted graph, each edge is assigned a weight or cost.
- Cyclic: A graph is cyclic if the graph comprises a path that starts from a vertex and ends at the same vertex. That path is called a cycle. An **acyclic graph** is a graph that has no cycle. 

> A **tree** is an **undirected graph** in which any two vertices are connected by only one path. A tree is an **acyclic graph** and has N - 1 edges where N is the number of vertices. Each node in a graph may have one or multiple parent nodes. However, in a tree, each node (except the root node) comprises exactly one parent node.

> *Note: A root node has no parent.*

> A tree **cannot contain any cycles or self loops**, however, the same does not apply to graphs. 

**Graph representation**

You can represent a graph in many ways. The two most common ways of representing a graph is as follows:

- Adjacency matrix
- Adjacency list

**Graph traversals**

Graph traversal means visiting every vertex and edge exactly once in a well-defined order. While using certain graph algorithms, you must ensure that each vertex of the graph is visited exactly once. The order in which the vertices are visited are important and may depend upon the algorithm or question that you are solving.

During a traversal, it is important that you track which vertices have been visited. The most common way of tracking vertices is to mark them.

#### Breadth First Search (BFS)

#### Depth First Search (DFS)

