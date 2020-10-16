#include<bits/stdc++.h>
using namespace std;

#define RANGE 10  //range for integers is 10 as digits range from 0-9

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

void countingSort(vector<int>& v, int place) {
	vector<int> output(v.size());
	vector<int> freq(RANGE, 0);
	
	for(int i = 0; i < v.size(); i++){
		freq[(v[i] / place) % RANGE]++;
	}
	for(int i = 1; i < RANGE; i++){
		freq[i] += freq[i - 1];
	}
	
	for(int i = v.size() - 1; i >= 0; i--){
		output[freq[(v[i] / place) % RANGE] - 1] = v[i];
		freq[(v[i] / place) % RANGE]--;
	}
	for(int i = 0; i < v.size(); i++){
		v[i] = output[i];
	}
	return;
}

void radixSort(vector<int>& v) {
	int m = findMax(v);
	int exp = 1;
	while(m){
		countingSort(v, exp);
		exp *= 10;
		m /= 10;
	}
}

int main() {
	vector<int> v{10, 21, 17, 34, 44, 11, 654, 123};
	cout << "Original array:\t"; printVector(v);	
	radixSort(v);
	cout << "Sorted array:\t";	printVector(v);
	return 0;
}
