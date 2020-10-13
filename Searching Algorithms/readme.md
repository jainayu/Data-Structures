## Searching Algorithms

#### Linear Search

Linear search is used on a collections of items. It relies on the technique of traversing a list from start to end by exploring properties of all the elements that are found on the way.

see full implemtation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Searching%20Algorithms/LinearSearch.cpp)

----------

#### Binary Search

Binary search is the most popular Search algorithm.It is efficient and also one of the most commonly used techniques that is used to solve problems.
 
Binary search works only on a sorted set of elements. To use binary search on a collection, the collection must first be sorted. 

As we dispose off one part of the search case during every step of binary search, and perform the search operation on the other half, this results in a worst case time complexity of O(log<sub>2</sub>(N)). 

- **see *iterative* implemtation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Searching%20Algorithms/IterativeBinarySearch.cpp)**
- **see *recursive* implemtation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Searching%20Algorithms/RecursiveBinarySearch.cpp)**

----------

#### Ternary Search

In binary search, the sorted array is divided into two parts while in ternary search, it is divided into **3** parts and then you determine in which part the element exists.

Ternary search, like binary search, is a divide-and-conquer algorithm. It is mandatory for the array (in which you will search for an element) to be sorted before you begin the search. In this search, after each iteration it neglects **⅓** part of the array and repeats the same operations on the remaining **⅔**.

O(log<sub>3</sub>N)where N is the size of the array.

**see full implemtation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Searching%20Algorithms/TernarySearch.cpp)**

----------
