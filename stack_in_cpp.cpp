#include<iostream>
#define max 5

using namespace std;

class Stack{
	private:
	int *arr;
	int top;
	
	public:
	Stack(){
		top = -1;
		arr = new int[max];
	}
	
	bool isEmpty(){
		return top == -1;
	}
	
	bool isFull(){
		return top == max -1;
	}
	
	void push(int val){
		if(!isFull()){
			top++;
			arr[top] = val;
			cout<<val<<" is pushed into the stack"<<endl;
			return;
		}
		else
			cout<<"The stack is full (Stack Overflow)"<<endl;
	}
	
	void pop(){
		if(!isEmpty()){
			cout<<arr[top]<<" is popped from the stack"<<endl;
			top--;
			return;
		}
		else
			cout<<"The stack is empty (Stack Underflow)"<<endl;
	}
	
	void display(){
		if(!isEmpty()){
			cout<<"The stack is empty"<<endl;
		}
		else{
			cout<<"The elements of the Stack are: ";
			for (int i = top; i >= 0; i++){
				cout<<arr[i]<<" ";
			}
		}
	}
};

int main(){
	Stack s;
	s.pop();
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.display();
	return 0;
}
