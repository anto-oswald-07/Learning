#include<stdio.h>
#define max 5

struct Stack {
	int arr[max];
	int top;
};

void initialize(struct Stack *s){
	s->top = -1;
}

int isEmpty(struct Stack *s){
	return s->top == -1;
}

int isFull(struct Stack *s){
	return s->top == max - 1;
}

void push(struct Stack *s, int val){
	if(!isFull){
		s->top++;
		s->arr[s->top] = val;
		printf("%d is pushed in the stack", val);
	}
	else{
		printf("The stack is full");
	}
}

void pop(struct Stack *s){
	if(!isEmpty){
		printf("%d is pushed in the stack", s->arr[s->top]);
		s->top++;
	}
	else{
		printf("The stack is empty");
	}
}

int main(){
	struct Stack n;
	initialize(&n);
}
