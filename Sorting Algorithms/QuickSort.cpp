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

int partition(vector<int> &v, int start, int end){
	int i = start + 1;
	int piv = v[start];
	
	for(int j = start + 1; j <=end; j++) {
		if(v[j] < piv) {
			swap(v[i], v[j]);
			i += 1;
		}
	}
	swap(v[start], v[i - 1]);
	return i-1;
}

void quickSort(vector<int> &v, int start, int end) {
	if(start < end) {
		int pivPos = partition(v, start, end);
		quickSort(v, start, pivPos - 1);
		quickSort(v, pivPos + 1, end);
	}
	return;
}

int main() {
	vector<int> v{2, 5, 4, 6, 3, 1, 0};
	quickSort(v, 0, v.size() - 1);
	printVector(v);
	return 0;
}
