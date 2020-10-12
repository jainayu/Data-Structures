## Sorting Algorithms

#### Bubble Sort

Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order. 

The complexity of bubble sort is O(n<sup>2</sup>)in both worst and average cases, because the entire array needs to be iterated for every element.

see full implementation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Sorting%20Algorithms/BubbleSort.cpp)

#### Selection Sort

The Selection sort algorithm is based on the idea of finding the minimum or maximum element in an unsorted array and then putting it in its correct position in a sorted arra

To find the minimum element from the array of N elements, N - 1 comparisons are required. After putting the minimum element in its proper position, the size of an unsorted array reduces to N - 1and then N - 2 comparisons are required to find the minimum in the unsorted array.

Therefore (N - 1) + (N - 2) + ......... + 1 = (N. (N - 1))/2 comparisons and N swaps result in the overall complexity of O(N<sup>2</sup>).

see full implementation [here]()
