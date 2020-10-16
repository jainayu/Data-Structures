#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
	return;
}

void merge(vector<int> &v, int start, int mid, int end){
	
	int k = 0, p = start, q = mid + 1;
	
	vector<int> vec(end - start + 1, 0); // an aux memory
	
	for(int i = start; i <= end; i++){
		if(p > mid) {
			vec[k++] = v[q++];
		} else if(q > end) {
			vec[k++] = v[p++];
		} else if(v[p] < v[q]) {
			vec[k++] = v[p++];
		} else {
			vec[k++] = v[q++];
		}
	}
	
	for(int j = 0; j < k; j++){
		v[start++] = vec[j];
	}
	
	return;
}

void mergeSort(vector<int> &v, int start, int end) {
	
	if(start < end) {
		int mid = start + (end - start)/2;

		mergeSort(v, start, mid);
		mergeSort(v, mid + 1, end);

		merge(v, start, mid, end);
	}
	
	return;
}

int main() {
	vector<int> v{2, 5, 4, 6, 3, 1, 0};

	cout << "Original array:\t"; printVector(v);	
	mergeSort(v, 0, v.size() - 1);
	cout << "Sorted array:\t";	printVector(v);

	return 0;
}
