#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vec, int l, int r, int s){
	while(r >= l){
		int mid = l + (r - l) / 2;
		if(vec[mid] == s) {
			return mid;
		}
		if(vec[mid] > s ) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
		
	}
	return -1;
}

int main() {
	vector<int> vec = { 2, 3, 4, 10, 40 }; // sorted array used
	int s = 4; 
	
	int result = binarySearch(vec, 0, vec.size() - 1, s); 
	(result == -1) 	? cout << "Element is not present in array"
					: cout << "Element is present at index " << result; 
	return 0; 
} 
