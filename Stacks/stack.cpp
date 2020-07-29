#include<iostream>
using namespace std;

int top = -1;

//isEmpty() : Check whether a stack is empty
bool isEmpty(){
	//if top is equals to -1 then it means stack is empty.
	if(top == -1) return true;
	return false;
}

//size(): Determines the current size of a stack
int size(){
	// size of stack is equals to one more than the top, as indexing starts from 0.
	return top + 1;
}

// push(value): Insert element value at the top of a stack
void push(int value, int* stack, int size){
	if(top == size - 1){
		//if stack is full, i.e. if top = size of stack minus 1, then no new value can be added (it is overflow condition).
		cout << "Stack is full. Overflow condition!" << endl;
	} else { 
		//if stack have space then we'll increment the top value by one and insert the new value.
		stack[++top] = value;
	}
	return;
}

// pop(): Removes an element from the top of a stack
void pop(){
	if(isEmpty()){
		//if stack is empty, i.e. if top = -1, then there is no value to be removed (it is underflow condition).
		cout<<"Stack is empty. Underflow Condition!" << endl;
	} else {
		//if stack have value(s) then we'll decrement the top value by one.
		--top;
	}
	return;
}

//topElement(): Access the top element of a stack
int topElement(int* stack){
	//return the top element if stack is not empty.
	if(isEmpty()) cout << "Stack is empty, no value retrieved";
	return stack[top];
}

//Driver program.
int main(){

	int stack[ 3 ];
    // pushing element 2 in the stack .
    push(2, stack, 3 );
	
	cout << "Current size of stack is " << size() << endl ;

    push (4, stack, 3);
    push (6, stack, 3) ;

	cout << "Current size of stack is " << size() << endl ;

	//As the stack is full, further pushing will show an overflow condition.
	push(8, stack, 3) ;

	//Accessing the top element
	cout << "The current top element in stack is " << topElement(stack) << endl;

	//Removing all the elements from the stack
	for(int i = 0 ; i < 3;i++ ) pop();
	
	cout << "Current size of stack is " << size() << endl ;

	//As the stack is empty , further popping will show an underflow condition.
	pop();  

}


