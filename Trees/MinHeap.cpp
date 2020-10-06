#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) { 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

class MaxHeap {
	int *harr;
	int capacity;
	int heapSize;

public: 
	MaxHeap(int);
	void maxHeapify(int);
	int parent(int i) {
		return (i-1)/2;
	}
	int left(int i) {
		return (2*i + 1);
	}
	int right(int i) {
		return (2*i);
	}
	int extractMax();
	int getMax() {
		return harr[0];
	}
	void deleteKey(int);
	void insertKey(int);
};

MaxHeap :: MaxHeap(int c) {
	heapSize = 0;
	capacity = c;
	harr = new int[c];
}

void MaxHeap :: insertKey(int val) {
	if(heapSize == capacity) {
		cout << "\nOverflow: Could not insertKey\n"; 
		return; 
	}
	
	harr [heapSize++] = val;
	int i = heapSize - 1;
	while(i != 0 && harr[parent(i)] < harr[i]){
		swap(&harr[i], &harr[parent(i)]);
		i = parent(i);
	}
}

void MaxHeap :: maxHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int largest = i;
	if(l <= heapSize && harr[l] > harr[i]){
		largest = l;
	} else {
		largest = i;
	}
	if(r <= heapSize && harr[r] > harr[largest]){
		largest = r;
	}
	if(largest != i){
		swap(harr[i], harr[largest]);
		maxHeapify(largest);
	}
	
}

int MaxHeap :: extractMax() {
	if(heapSize <= 0) {
		return INT_MIN;
	}
	if(heapSize == 1){
		return harr[heapSize--];
	}
	
	int root = harr[0];
	harr[0] = harr[	heapSize--];
	maxHeapify(0);
	
	return root;
}

void MaxHeap :: deleteKey(int i) {
	harr[i] = INT_MAX;
	while(i != 0 && harr[parent(i)] < harr[i]){
		swap(&harr[i], &harr[parent(i)]);
		i = parent(i);
	}
	extractMax();
}

int main() {
	MaxHeap h(10);
	
	h.insertKey(3); 
	h.insertKey(2); 
	
	h.deleteKey(1);
	
	h.insertKey(15);
	h.insertKey(5); 
	h.insertKey(4);
	h.insertKey(45);

	cout << h.extractMax() << " "; 
	cout << h.getMax() << " ";
	cout << endl; 

	return 0; 
}




