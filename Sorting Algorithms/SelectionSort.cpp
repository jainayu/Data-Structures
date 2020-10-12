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

void selectionSort(vector<int> &v) {
	int minimum;
	for(int i = 0; i < v.size()-1; i++) {
		minimum = i;
		for(int j = i + 1; j < v.size(); j++){
			if(v[j] < v[minimum]){
				minimum = j;
			}
		}
		swap(v[minimum], v[i]);
	}
	return;
}

int main() {
	vector<int> v = {2, 5, 4, 6, 3, 1, 0};
	selectionSort(v);
	printVector(v);
}
