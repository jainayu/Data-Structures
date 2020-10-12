#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
	return;
}

void bubleSort(vector<int> &v) {
	int temp;
	for(int i = 0; i < v.size()-1; i++) {
	// (size-i-1) is for ignoring comparisons of elements which 
	// have already been compared in earlier iterations
		for(int j = 0; j < v.size()-i-1; j++){
			if(v[j] > v[j+1]){
				temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
		}
	}
	return;
}

int main() {
	vector<int> v = {2, 5, 4, 6, 3, 1, 0};
	bubleSort(v);
	printVector(v);
}
