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
	BST* insert(BST*, int);
	void inOrder(BST *);
	void preOrder(BST *);
	void postOrder(BST *);
};

BST :: BST() : data(0), left(NULL), right(NULL) {}

BST :: BST(int val) {
	data = val;
	left = right = NULL;
}

BST* BST :: insert(BST* node, int val) {
	if(!node) {
		return new BST(val);
	}
	
	if(val > node->data) {
		node->right = insert(node->right, val);
	} else {
		node->left = insert(node->left, val);
	}
	return node;
}

void BST :: inOrder(BST *root) { 
    if(!root) return; 
    
	inOrder(root->left); 
	cout << root->data << " "; 
	inOrder(root->right);
}

void BST :: preOrder(BST *root) { 
    if(!root) return; 
    
    cout << root->data << " "; 
	preOrder(root->left); 
	preOrder(root->right);
} 
 
void BST :: postOrder(BST *root) { 
    if(!root) return; 
    
	postOrder(root->left); 
	postOrder(root->right);
	cout << root->data << " "; 
}

int main() {
	BST bst, *root = NULL; 
    root = bst.insert(root, 6); 
    bst.insert(root, 5); 
    bst.insert(root, 10); 
    bst.insert(root, 4); 
    bst.insert(root, 7); 
    bst.insert(root, 15); 
    bst.insert(root, 9); 
    
    cout << "In-order traversal: ";
	bst.inOrder(root);
	cout << endl;
	
	cout << "Pre-order traversal: ";
	bst.preOrder(root);
	cout << endl;

    cout << "Post-order traversal: ";
	bst.postOrder(root);
	cout << endl;

	return 0;
}
