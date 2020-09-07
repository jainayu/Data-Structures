## Linked List

A linked list is a way to store a collection of elements. Like an array these can be character or integers. Each element in a linked list is stored in the form of a node.

**Node:**

A node is a collection of two sub-elements or parts. A **data** part that stores the element and a *next* part that stores the link to the next node.

**Linked List:**

A linked list is formed when many such nodes are linked together to form a chain. Each node points to the next node present in the order. The first node is always used as a reference to traverse the list and is called **HEAD**. The last node points to **NULL**.

**Declaring a Linked list :**

In C language, a linked list can be implemented using structure and pointers .
```c
struct LinkedList{
    int data;
    struct LinkedList *next;
 };
```
The above definition is used to create every node in the list. The data field stores the element and the next is a pointer to store the address of the next node. 
