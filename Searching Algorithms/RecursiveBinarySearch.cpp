#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vec, int l, int r, int s){
	if(r < l) return -1;
	
	int mid = l + (r - l) / 2;

	if(vec[mid] == s) {
		return mid;
	}
	
	if(vec[mid] > s ) {
		return binarySearch(vec, l, mid - 1, s);
	}
	
	return binarySearch(vec, mid + 1, r, s);
}

int main() {
	vector<int> vec = { 2, 3, 4, 10, 40 }; // sorted array used
	int s = 10; 
	
	int result = binarySearch(vec, 0, vec.size() - 1, s); 
	(result == -1) 	? cout << "Element is not present in array"
					: cout << "Element is present at index " << result; 
	return 0; 
} 
