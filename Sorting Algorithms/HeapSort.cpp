#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
	return;
}

void swap(int *x, int *y) { 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void heapify(vector<int> &v, int n, int i) {
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	
	if(l < n && v[l] > v[largest]){
		largest = l;
	} 
	if(r < n && v[r] > v[largest]){
		largest = r;
	}
	
	if(largest != i){
		swap(v[i], v[largest]);
		heapify(v, n, largest);
	}
	
	return;
}

void heapSort(vector<int> &v){
	for(int i = v.size() / 2 - 1; i>=0; i--){
		heapify(v, v.size(), i);
	}
	
	for(int i = v.size() - 1; i > 0; i--){
		swap(v[0], v[i]);
		heapify(v, i, 0);
	}
	
	return;
}

int main() {
	vector<int> v{2, 5, 4, 6, 3, 1, 0};

	cout << "Original array:\t"; printVector(v);	
	heapSort(v);
	cout << "Sorted array:\t";	printVector(v);
	return 0;
}
