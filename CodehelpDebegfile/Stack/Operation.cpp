#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value) {
	//base case
	if(s.empty()) {
		s.push(value);
		return;
	}

	//1 case main solve krunga, baaaki recursion
	int topValue = s.top();
	s.pop();
	///recursion
	insertAtBottom(s, value);
	//wapas - backtracking
	s.push(topValue);
}

void reverseStack(stack<int>& s) {
	//base case
	if(s.empty()) {
		return;
	}

	//1 case main solve krunga and baaki recursion 
	int value = s.top();
	s.pop();
	//recursion - reverseStack
	reverseStack(s);
	//wapasi - backtracking 
	insertAtBottom(s,value);
	
}

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	reverseStack(s);
	
	cout << "printing stack: " << endl;
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	
	// int value = 101;
	// insertAtBottom(s, value);
	// //stack bottom -> 101 -> 10 -> 20 -> 30 ->40
	// //print Stack 
	// while(!s.empty()) {
	// 	cout << s.top() << " ";
	// 	s.pop();
	// }
	// cout << endl;









	return 0;
}


// class Stack{
// public:
// 	int* arr;
// 	int top1;
// 	int top2;
// 	int size;

// 	Stack(int capacity) {
// 		arr = new int[capacity];
// 		size = capacity;
// 		top1 = -1;
// 		top2 = size;
// 	}

// 	void push1(int value) {
// 		//normal push or overflow 
// 		if(top2-top1 == 1) {
// 			cout << "Stack Overflow" << endl;
// 		}
// 		else {
// 			top1++;
// 			arr[top1] = value;
// 		}
		
// 	}

// 	void push2(int value) {
// 		//normal push or overflow 
// 		if(top2-top1 == 1) {
// 			cout << "Stack Overflow" << endl;
// 		}
// 		else {
// 			top2--;
// 			arr[top2] = value;
// 		}
// 	}

// 	void pop1() {
// 		//normal pop or underflow 
// 		if(top1 == -1) {
// 			cout << "Stack Underflow" << endl;
// 		}
// 		else {
// 			top1--;
// 		}
// 	}

// 	void pop2() {
// 		//normal pop or undertflow 
// 		if(top2 == size) {
// 			cout << "Stack Underflow " << endl;
// 		}
// 		else {
// 			top2++;
// 		}
// 	}

// 	void print() {
// 		for(int i=0; i<size; i++) {
// 			cout << arr[i] << " ";
// 		}
// 		cout << endl;
// 		cout << "Top1: " << top1 << endl;
// 		cout << "Top2: " << top2  << endl;
// 	}

// };

// int main() {

// 	Stack s(10);

// 	s.push1(11);
// 	s.print();
// 	s.push2(17);
// 	s.print();
// 	s.push1(21);
// 	s.push1(31);
// 	s.push1(41);
// 	s.push1(51);
// 	s.push1(61);
// 	s.print();

// 	s.push2(111);
// 	//s.print();

// 	s.push2(112);
// 	//s.print();

// 	s.push2(113);
// 	//s.print();
	
// 	s.push1(311);
// 	//s.print();

// 	s.pop1();
// 	s.print();



// 	return 0;
// }

// class Stack{
// 	public:
// 		int *arr;
// 		int top;
// 		int size;
	
// 	Stack(int capacity) {
// 		arr = new int[capacity];
// 		top = -1;
// 		size = capacity;
// 	}

// 	void push(int value) {
// 		//normal push or Overflow
// 		if(top == size-1) {
// 			cout << "Stack Overflow" << endl;
// 		}
// 		else {
// 			top++;
// 			arr[top] = value;
// 		}
// 	}

// 	void pop() {
// 		//normal removal or undetflow
// 		if(top == -1) {
// 			//empty stack 
// 			cout << "Stack Underflow" << endl;
// 		}
// 		else {
// 			top--;
// 		}
// 	}

// 	int getSize() {
// 		return top+1;
// 	}
// 	bool isEmpty() {
// 		if(top == -1) {
// 			//empty stack 
// 			return true;
// 		}
// 		else {
// 			return false;
// 		}
// 	}
// 	int getTopElement() {
// 		if(top == -1) {
// 			//empty stack 
// 			cout << "Empty Stack" << endl;
// 			return -1;
// 		}
// 		else {
// 			return arr[top];
// 		}
// 	}

// };


// int main() {

// 	//creation 
// 	Stack s(100);

// 	s.push(10);
// 	s.push(20);
// 	s.push(30);
// 	cout << s.getSize() << endl;
// 	cout << s.getTopElement() << endl;
// 	s.pop();
	
// 	cout << s.getSize() << endl;
// 	cout << s.getTopElement() << endl;
// 	s.pop();
// 	cout << s.getSize() << endl;
// 	cout << s.getTopElement() << endl;
// 	s.pop();
// 	cout << s.getSize() << endl;
// 	cout << s.getTopElement() << endl;
// 	// stack<int> s;

// 	// s.push(10);
// 	// s.push(20);
// 	// s.push(30);

// 	// cout << s.size() << endl;

// 	// //remove
// 	// s.pop();

// 	// cout << s.size() << endl;

// 	// //top element
// 	// cout << s.top() << endl;

// 	// s.pop();

// 	// cout << s.top() << endl;

// 	// if(s.empty()) {
// 	// 	cout << "stack is empty" << endl;
// 	// }
// 	// else {
// 	// 	cout << "Stack is not empty" << endl;
// 	// }

	
	


// 	return 0;
// }
