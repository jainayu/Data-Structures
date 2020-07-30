#include <iostream>
using namespace std;

// initializing front and rear as queue is empty.
int front = 0;
int rear = -1;

int size () {
	return rear - front + 1;
}

bool isEmpty () {
	return front > rear;
}

void insert_at_front (int* queue, int size, int value) {

	if (rear + 1 == size) {
		cout << "Queue is full, no new value can be added. Overflow condition!";
	} else {
		++rear;
		for (int i = rear; i >= front; i--) {
			queue[i] = queue[i - 1];
		}
		queue[front] = value;
	}
	
	return;
}

void insert_at_back (int* queue, int size, int value) {
	if (rear + 1 == size) {
		cout << "Queue is full, no new value can be added. Overflow condition!";
	} else {
		queue[++rear] = value;
	}
	
	return;
}

void delete_from_front (int* queue) {
	if ( isEmpty() ) {
		cout << "Stack is empty, Underflow condition!";
	} else {
		queue[front++] = 0;
	}
	return;
}

void delete_from_back (int* queue) {
	if ( isEmpty() ) {
		cout << "Stack is empty, Underflow condition!";
	} else {
		queue[rear--] = 0;
	}
	return;
}

int qFront (int* queue) {
	return queue[front];
}

int qRear (int* queue) {
	return queue[rear];
}

int main () {
	int size = 10; // Size of the queue
	int queue[size];
	
	insert_at_back(queue, size, 97); // adding 97 in the queue.
	insert_at_front(queue, size, 98); // adding 98 in the queue.
	insert_at_back(queue, size, 99); // adding 99 in the queue.
	insert_at_front(queue, size, 100); // adding 100 in the queue.
  
    int N = 4; //to show the example randome number of steps                    
    for(int i = 0; i < N; ++i) {
        int value = qFront(queue);
        cout << value<< " ";
       	delete_from_front(queue);
    }

    cout << endl;
    
    return 0;
    
}



