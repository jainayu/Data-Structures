#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
	return;
}

void insertionSort(vector<int> &v) {
	for(int i = 0; i < v.size(); i++) {
		int temp = v[i];
		int j = i;
		while(j > 0 && temp < v[j - 1]){
			v[j] = v[j - 1];
			j = j - 1;
		}
		v[j] = temp;
	}
	return;
}

int main() {
	vector<int> v{2, 5, 4, 6, 3, 1, 0};

	cout << "Original array:\t"; printVector(v);	
	insertionSort(v);
	cout << "Sorted array:\t";	printVector(v);
	return 0;
}
