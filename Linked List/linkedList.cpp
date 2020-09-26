#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* head = NULL;

void printList(Node *node) {  
    while (node != NULL) {  
        cout << " " << node->data;  
        node = node->next;  
    }  
	cout << endl;
	return;
}

void insertAtStart(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = head;
	head = node;
	return;
}

void insertAfter(int prevData, int newData) {
	if(head == NULL) {
		cout << "List is empty, " << prevData << " not found!!" << endl;
		exit(1);
	}
	Node* node = new Node();
	node->data = newData;
	Node* temp;
	temp = head;
	while(temp->data != prevData && temp->next != NULL){
		temp = temp->next;
	}
	if(temp->next == NULL) {
		cout << prevData << " not found!!" << endl;
		exit(1);
	}
	node->next = temp->next;
	temp->next = node;
	return;
}

void insertAtEnd(int data) {
	Node* node = new Node();
	node->data = data;
	node->next = NULL;
	if(head == NULL) {
		head = node;
		return;
	}
	Node* temp;
	temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = node;
	return;
}

void deleteNode(int data) {
	if(head == NULL) {
		cout << "List is empty, " << data << " not found!!" << endl;
		exit(1);
	}
	Node* temp = head;
	if(temp != NULL && temp->data == data){
		head = temp->next;
		free(temp);
		return;
	}
	Node* prev;
	while(temp!=NULL && temp->data != data){
		prev = temp;
		temp = temp->next;
	}
	if(temp == NULL) {
		cout << data << " not found!!" << endl;
		exit(1);
	}
	prev->next = temp->next;
	free(temp);
	return;
}

int main() {
	insertAtEnd(5);
	insertAtStart(3);
	insertAtEnd(6);
	insertAtStart(2);
	insertAtEnd(7);
	insertAtStart(1);

	insertAfter(3, 4);

	printList(head);
	
	deleteNode(5);

	printList(head);
	return 0;
}
