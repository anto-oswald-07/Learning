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
	if(!isFull(s)){
		s->top++;
		s->arr[s->top] = val;
		printf("%d is pushed in the stack\n", val);
		return;
	}
	else{
		printf("The stack is full\n	");
	}
}

void pop(struct Stack *s){
	if(!isEmpty(s)){
		printf("%d is popped from the stack\n", s->arr[s->top]);
		s->top--;
		return;
	}
	else{
		printf("The stack is empty\n");
	}
}

void display(struct Stack *s){
	if(!isEmpty(s)){
		printf("The elements in the stack are: ");
		for(int i = s->top; i >= 0; i--){
			printf("%d ", s->arr[i]);
		}
		printf("\n");
	}
	else{
		printf("The stack is empty\n");
	}
}

int main(){
	struct Stack n;
	initialize(&n);
	pop(&n);
	push(&n, 10);
	push(&n, 20);
	push(&n, 30);
	pop(&n);
	display(&n);
}
