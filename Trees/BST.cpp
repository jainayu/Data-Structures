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
	int getData();
	BST* insertNode(BST*, int);
	BST* searchNode(BST*, int);
	BST* deleteNode(BST*, int);
	void inOrder(BST *);
	void preOrder(BST *);
	void postOrder(BST *);
};

BST :: BST() : data(0), left(NULL), right(NULL) {}

BST :: BST(int val) {
	data = val;
	left = right = NULL;
}
int BST :: getData() {
	return data;
}
BST* BST :: insertNode(BST* node, int val) {
	if(!node) {
		return new BST(val);
	}
	
	if(val > node->data) {
		node->right = insertNode(node->right, val);
	} else {
		node->left = insertNode(node->left, val);
	}
	return node;
}

BST* BST :: searchNode(BST* node, int val){
	if(node == NULL || node->data == val) return node;
	
	if(val > node->data) {
		return searchNode(node->right, val);
	} else {
		return searchNode(node->left, val);
	}
}

BST* BST :: deleteNode(BST* node, int val);

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
    root = bst.insertNode(root, 6); 
    bst.insertNode(root, 5); 
    bst.insertNode(root, 10); 
    bst.insertNode(root, 4); 
    bst.insertNode(root, 7); 
    bst.insertNode(root, 15); 
    bst.insertNode(root, 9); 
    
    cout << "In-order traversal: ";
	bst.inOrder(root);
	cout << endl;
	
	cout << "Pre-order traversal: ";
	bst.preOrder(root);
	cout << endl;

    cout << "Post-order traversal: ";
	bst.postOrder(root);
	cout << endl;
	
	BST* s = bst.searchNode(root, 10);
	if(s != NULL) cout << s->getData() << endl;

	return 0;
}
