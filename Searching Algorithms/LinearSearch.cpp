#include<bits/stdc++.h>
using namespace std;

int search (int *arr, int arrSize, int toSearch){
	for(int i = 0; i < arrSize; i++) {
		if(toSearch == arr[i]) {
			return i+1;
		}
	}
	return -1;
}

int main() {
	int arrSize = 7;
	int arr[arrSize] = {2, 4, 5, 6, 3, 1, 0};
	
	int s = search(arr, arrSize, 5);
	if(s != -1) {
		cout << "Found at " << s << " position" << endl;
	} else {
		cout << "Not found..." << endl;
	}
	
	s = search(arr, arrSize, 8);
	if(s != -1) {
		cout << "Found at " << s << " position" << endl;
	} else {
		cout << "Not found..." << endl;
	}
	return 0;
}
