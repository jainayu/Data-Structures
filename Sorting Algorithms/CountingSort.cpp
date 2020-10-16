#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
	return;
}

int findMax(vector<int> v){
	int m = 0;
	for(int i = 0; i < v.size(); i++){
		m = max(m, v[i]);
	}
	return m;
}

void countingSort(vector<int> &v, vector<int> &aux, vector<int> &sortedV) {
	for(int i = 0; i < v.size(); i++){
		aux[v[i]]++;
	}
	int j = 0;
	for(int i = 0; i < aux.size(); i++){
		int temp = aux[i];
		while(temp--){
			sortedV[j] = i;
			j++;
		}
	}
	return;
}

int main() {
	vector<int> v{2, 5, 4, 6, 3, 1, 0};
	vector<int> sortedV(v.size(), 0);
	/*
	finding the maximum element and initializing 
	aux memory with (max + 1) size and with 
	value of each element as 0.
	*/
	int m = findMax(v);
	vector<int> aux(m + 1, 0);
	
	countingSort(v, aux, sortedV);
	cout << "Original array:\t"; printVector(v);
	cout << "Sorted array:\t";	printVector(sortedV);
	return 0;
}
