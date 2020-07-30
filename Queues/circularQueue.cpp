#include <iostream>
using namespace std;

// initializing front and rear as queue is empty.
int front = 0;
int rear = -1;
int count = 0;

//Size(): This function returns the size of a queue or the number of elements in a queue.
int size () {
	return count;
}

//IsEmpty(): If a queue is empty, this function returns 'true', else it returns 'false'.
bool isEmpty () {
	return count == 0;
}

//Enqueue(): If the queue is not full, this function adds an element to the back of the queue, else it prints “OverFlow”.
void enqueue (int* queue, int size, int value) {
	if(count == size){
		cout << "Queue is full, no new value can be added. Overflow condition!";
	} else {
		queue[++rear] = value;
		rear %= size;
		cout << "rear" << rear << " ";
		count++;
		cout << "count" << count << endl;
	}
	
	return;
}

//Dequeue(): If the queue is not empty, this function removes the element from the front of the queue, else it prints “UnderFlow”.
void dequeue (int* queue, int size) {
	if (isEmpty()) {
		cout << "Stack is empty, Underflow condition!";
	} else {
		queue[front++] = 0;
		front %= size;
		cout << "front" << front << " ";
		count--;
		cout << "count" << count << endl;
	}
	return;
}

//Front():This function returns the front element of the queue, if stack is empty then -1 is returned.
int qFront(int* queue) {
	return isEmpty() ? -1 : queue[front];
}

