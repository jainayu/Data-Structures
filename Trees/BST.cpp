#include<bits/stdc++.h>
using namespace std;

class BST {
private:
	int data;
	BST* left;
	BST* right;
public:
	BST();
	BST(int);
	insert(int);
}

BST :: BST() : data(0), left(NULL), right(NULL) {}

BST :: BST(int val) {
	data = val;
	left = right = NULL:
}

void BST :: insert(int data) {
	
}

int mian(){

	return 0;
}
