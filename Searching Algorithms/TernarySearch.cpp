#include <bits/stdc++.h>
using namespace std;

int ternarySearch(vector<int> vec, int l, int r, int s){
	if(r < l) return -1;
	
	int mid1 = l + (r - l) / 3;
	int mid2 = r - (r - l) / 3;

	if(vec[mid1] == s) {
		return mid1;
	}
	if(vec[mid2] == s) {
		return mid2;
	}
	
	if(vec[mid1] > s ) {
		return ternarySearch(vec, l, mid1 - 1, s);
	}
	if(vec[mid2] < s ) {
		return ternarySearch(vec, mid2 + 1, r, s);
	}
	
	return ternarySearch(vec, mid1 + 1, mid2 - 1, s);
}

int main() {
	vector<int> vec = { 2, 3, 4, 10, 40 }; // sorted array used
	int s = 10; 
	
	int result = ternarySearch(vec, 0, vec.size() - 1, s); 
	(result == -1) 	? cout << "Element is not present in array"
					: cout << "Element is present at index " << result; 
	return 0; 
} 
