## Trees

#### Binary/ N-ary Trees

A binary tree is a structure comprising nodes, where each node has the following 3 components:

- Data element: Stores any kind of data in the node
- Left pointer: Points to the tree on the left side of node
- Right pointer: Points to the tree on the right side of the node

As the name suggests, the data element stores any kind of data in the node. The left and right pointers point to binary trees on the left and right side of the node respectively.

If a tree is empty, it is represented by a null pointer.

**Commonly-used terminologies**
- Root: Top node in a tree
- Child: Nodes that are next to each other and connected downwards
- Parent: Converse notion of child
- Siblings: Nodes with the same parent
- Descendant: Node reachable by repeated proceeding from parent to child
- Ancestor: Node reachable by repeated proceeding from child to parent.
- Leaf: Node with no children
- Internal node: Node with at least one child
- External node: Node with no children

**Application of trees**
- A Manipulate hierarchical data.
- Make information easy to search.
- Manipulate sorted lists of data.
- Use as a workflow for compositing digital images for visual effects.
- Use in router algorithms.

#### Binary Search Tree (BST) ([see implementation](https://github.com/jainayu/Data-Structures/blob/master/Trees/BST.cpp))

For a binary tree to be a binary search tree, the data of all the nodes in the left sub-tree of the root node should be less than or equal to the data of the root. The data of all the nodes in the right subtree of the root node should be greater than the data of the root. 

**Traversing the tree**

*There are mainly three types of tree traversals.*

- Pre-order traversal: In this traversal technique the traversal order is root-left-right i.e.
    - Process data of root node
    - First, traverse left subtree completely
    - Then, traverse right subtree

*[see implementation](https://github.com/jainayu/Data-Structures/blob/master/Trees/BST.cpp)*
    
- Post-order traversal: In this traversal technique the traversal order is left-right-root.
    - Process data of left subtree
    - First, traverse right subtree
    - Then, traverse root node

*[see implementation](https://github.com/jainayu/Data-Structures/blob/master/Trees/BST.cpp)*

- In-order traversal: In in-order traversal, do the following:
    - First process left subtree (before processing root node)
    - Then, process current root node
    - Process right subtree

*[see implementation](https://github.com/jainayu/Data-Structures/blob/master/Trees/BST.cpp)*
    
## Heaps

A heap is a tree-based data structure in which all the nodes of the tree are in a specific order. In binary heap, if the heap is a complete binary tree with N nodes, then it has smallest possible height which is log2(N). 

For example, if *X* is the parent node of *Y*, then the value of *X* follows a specific order with respect to the value of *Y* and the same order will be followed across the tree. 

**Max Heap:**([see implementation](https://github.com/jainayu/Data-Structures/blob/master/Trees/MaxHeap.cpp)) 

In this type of heap, the value of parent node will always be greater than or equal to the value of child node across the tree and the node with highest value will be the root node of the tree.

**Min Heap:** ([see implementation](https://github.com/jainayu/Data-Structures/blob/master/Trees/MinHeap.cpp)) 

In this type of heap, the value of parent node will always be less than or equal to the value of child node across the tree and the node with lowest value will be the root node of tree. 
