## Sorting Algorithms

#### Bubble Sort

Bubble sort is based on the idea of repeatedly comparing pairs of adjacent elements and then swapping their positions if they exist in the wrong order. 

The complexity of bubble sort is O(n<sup>2</sup>)in both worst and average cases, because the entire array needs to be iterated for every element.

**see full implementation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Sorting%20Algorithms/BubbleSort.cpp)**

----------

#### Selection Sort

The Selection sort algorithm is based on the idea of finding the minimum or maximum element in an unsorted array and then putting it in its correct position in a sorted arra

To find the minimum element from the array of N elements, N - 1 comparisons are required. After putting the minimum element in its proper position, the size of an unsorted array reduces to N - 1and then N - 2 comparisons are required to find the minimum in the unsorted array.

Therefore (N - 1) + (N - 2) + ......... + 1 = (N. (N - 1))/2 comparisons and N swaps result in the overall complexity of O(N<sup>2</sup>).

**see full implementation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Sorting%20Algorithms/SelectionSort.cpp)**

----------

#### Insertion Sort

Insertion sort is based on the idea that one element from the input elements is consumed in each iteration to find its correct position i.e, the position to which it belongs in a sorted array.

It iterates the input elements by growing the sorted array at each iteration. It compares the current element with the largest value in the sorted array. If the current element is greater, then it leaves the element in its place and moves on to the next element else it finds its correct position in the sorted array and moves it to that position. This is done by shifting all the elements, which are larger than the current element, in the sorted array to one position ahead

In worst case,each element is compared with all the other elements in the sorted array. For N elements, there will be N<sup>2</sup> comparisons. Therefore, the time complexity is O(N<sup>2</sup>).

**see full implementation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Sorting%20Algorithms/InsertionSort.cpp)**

----------

#### Merge Sort

Merge sort is a **divide-and-conquer algorithm** based on the idea of breaking down a list into several sub-lists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

Idea:

- Divide the unsorted list into N sublists, each containing 1 element.
- Take adjacent pairs of two singleton lists and merge them to form a list of 2 elements. N will now convert into N/2 lists of size 2.
- Repeat the process till a single sorted list of obtained.

While comparing two sublists for merging, the first element of both lists is taken into consideration. While sorting in ascending order, the element that is of a lesser value becomes a new element of the sorted list. This procedure is repeated until both the smaller sublists are empty and the new combined sublist comprises all the elements of both the sublists.

The list of size N is divided into a max of *log(N)* parts, and the merging of all sublists into a single list takes *O(N)* time, the worst case run time of this algorithm is *O(NlogN)*

**see full implementation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Sorting%20Algorithms/MergeSort.cpp)**

----------

##### Quick Sort

Quick sort is based on the **divide-and-conquer approach** based on the idea of choosing one element as a pivot element and partitioning the array around it such that: Left side of pivot contains all the elements that are less than the pivot element Right side contains all elements greater than the pivot

It reduces the space complexity and removes the use of the auxiliary array that is used in merge sort. Selecting a random pivot in an array results in an improved time complexity in most of the cases.

The worst case time complexity of this algorithm is O(N<sup>2</sup>), but as this is randomized algorithm, its time complexity fluctuates between O(N<sup>2</sup>) and O(NlogN) and mostly it comes out to be O(NlogN).

**see full implementation [here](https://github.com/jainayu/Data-Structures-and-Algorithms/blob/master/Sorting%20Algorithms/QuickSort.cpp)**

----------


