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

In place of a data type, **struct LinkedList** is written before next. That's because its a **self-referencing pointer**. It means a pointer that points to whatever it is a part of. Here **next** is a part of a node and it will point to the next node.

In C++ language,
```c++
class Node {
public:
	int data;
	Node* next;
};
```

**To see the code written in C++ language click [here](https://github.com/jainayu/Data-Structures/blob/master/Linked%20List/linkedList.cpp), this code has full implementation how to insert a data at the end, or at the beginning, or after some data, how to delete an element from the list and how to traverse or print the list.**
