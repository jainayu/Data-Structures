#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) { 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

class MinHeap {
	int *harr;
	int capacity;
	int heapSize;

public: 
	MinHeap(int);
	void minHeapify(int);
	int parent(int i) {
		return (i-1)/2;
	}
	int left(int i) {
		return (2*i + 1);
	}
	int right(int i) {
		return (2*i);
	}
	int extractMin();
	int getMin() {
		return harr[0];
	}
	void deleteKey(int);
	void insertKey(int);
};

MinHeap :: MinHeap(int c) {
	heapSize = 0;
	capacity = c;
	harr = new int[c];
}

void MinHeap :: insertKey(int val) {
	if(heapSize == capacity) {
		cout << "\nOverflow: Could not insertKey\n"; 
		return; 
	}
	
	harr [heapSize++] = val;
	int i = heapSize - 1;
	
	while(i != 0 && harr[parent(i)] > harr[i]){
		swap(&harr[i], &harr[parent(i)]);
		i = parent(i);
	}
}

void MinHeap :: minHeapify(int i) {
	int l = left(i);
	int r = right(i);
	int smallest = i;
	if(l < heapSize && harr[l] < harr[i]){
		smallest = l;
	}
	if(r < heapSize && harr[r] < harr[smallest]){
		smallest = r;
	}
	if(smallest != i){
		swap(harr[i], harr[smallest]);
		minHeapify(smallest);
	}
	
}

int MinHeap :: extractMin() {
	if(heapSize <= 0) {
		return INT_MAX;
	}
	if(heapSize == 1){
		return harr[heapSize--];
	}
	
	int root = harr[0];
	harr[0] = harr[heapSize-1];
	heapSize--;
	minHeapify(0);
	
	return root;
}

void MinHeap :: deleteKey(int i) {
	harr[i] = INT_MIN;
	while(i != 0 && harr[parent(i)] > harr[i]){
		swap(&harr[i], &harr[parent(i)]);
		i = parent(i);
	}
	extractMin();
}

int main() {
	MinHeap h(10);
	
	h.insertKey(3); 
	h.insertKey(2); 
	
	h.deleteKey(1);
	
	h.insertKey(15);
	h.insertKey(5); 
	h.insertKey(4);
	h.insertKey(45);
	
	cout << h.extractMin() << " "; 
	cout << h.getMin() << " ";

	return 0; 
}




