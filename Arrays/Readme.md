# Arrays

## 1-D Array

An array is a sequential collection of elements of same data type and stores data elements in a continuous memory location. The elements of an array are accessed by using an index. The index of an array of size N can range from 0 to N-1.

Array can be initialized either at the time of declaration or after that.

The sample format if an array is initialized at the time of declaration is
```
type arr[size] = {elements}
```

An array can be initialized after declaration by assigning values to each index of the array as follows
```
 type arr[size]
 arr[index] = 12
```
A sample of processing an array by looping over the array and printing its elements is as follows:
```
type arr[size] = {elements}
for idx from 0 to size
    print arr[idx]
```
**see full code from [here](https://github.com/jainayu/Data-Structures/blob/master/Array/array1D.cpp).**
 
## Multi-dimensional

A multi-dimensional array is an array of arrays. 2-dimensional arrays are the most commonly used. They are used to store data in a tabular manner.

For an array of size *N x M*, the rows and columns are numbered from *0* to *N - 1* and columns are numbered from *0* to *M - 1* , respectively. Any element of the array can be accessed by *arr[i][j]* where *0 ≤ i ≤ N* and *0 ≤ j ≤ M*.

A sample form of declaration is as follows:

```
type arr[row_size][column_size]
```

The format of initializing an array during declaration is as follows:

```
type arr[row_size][column_size] = {{elements}, {elements} ... }
```

Initializing an array after declaration can be done by assigning values to each cell of 2D array, as follows.

```
type arr[row_size][column_size]
arr[i][j] = 14

```

The most basic form of processing is to loop over the array and print all its elements, which can be done as follows:
```
type arr[row_size][column_size] = {{elements}, {elements} ... }
for i from 0 to row_size
    for j from 0 to column_size
        print arr[i][j]
```

**see full code from [here](https://github.com/jainayu/Data-Structures/blob/master/Array/array2D.cpp).**
