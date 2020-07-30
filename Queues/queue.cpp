#include <iostream>
using namespace std;

// initializing front and rear as queue is empty.
int front = 0;
int rear = -1;

//Size(): This function returns the size of a queue or the number of elements in a queue.
int size () {
	return rear - front + 1;
}

//IsEmpty(): If a queue is empty, this function returns 'true', else it returns 'false'.
bool isEmpty () {
	return front > rear;
}

//Enqueue(): If the queue is not full, this function adds an element to the back of the queue, else it prints “OverFlow”.
void enqueue (int* queue, int size, int value) {
	if(rear + 1 == size){
		cout << "Queue is full, no new value can be added. Overflow condition!";
	} else {
		queue[++rear] = value;
	}
	
	return;
}

//Dequeue(): If the queue is not empty, this function removes the element from the front of the queue, else it prints “UnderFlow”.
void dequeue (int* queue) {
	if (isEmpty()) {
		cout << "Stack is empty, Underflow condition!";
	} else {
		queue[front++] = 0;
	}
	return;
}

//Front():This function returns the front element of the queue, if stack is empty then -1 is returned.
int qFront(int* queue) {
	return isEmpty() ? -1 : queue[front];
}

int main () {
	int size = 10; // Size of the queue
	int queue[size];
	
	enqueue(queue, size, 97); // adding 97 in the queue.
	enqueue(queue, size, 98); // adding 98 in the queue.
	enqueue(queue, size, 99); // adding 99 in the queue.
	enqueue(queue, size, 100); // adding 100 in the queue.
    
    int N = 5; //to show the example randome number of steps                    
    for(int i = 0; i < N; ++i) {
    
        int value = qFront(queue);
		cout << value<< " " ;
        //enqueue(queue, size, value);
        dequeue(queue);
        
    }
    cout << endl;    
    for(int i = 0; i < rear + 1; ++i) {
        cout << queue[i] << " ";
    }
    
    cout << endl;
    
    return 0;
    
}



