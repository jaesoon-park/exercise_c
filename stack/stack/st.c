#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STACK_SIZE 10
char stack[STACK_SIZE][10];
int top = -1;


void push(char *item) {
	if (top == STACK_SIZE - 1) {
		printf("stack is full.\n");
		exit(1);
	}

	strcpy(stack[++top], item);
}

char* pop() {
	if (top == -1) {
		printf("stack is Empty.\n");
		exit(1);
	}
	return stack[top--];
}

void print_stack() {
	int i;
	
	for (i = 0; i <= top; i++) {
		printf("%s", stack[i]);
	}
}

int main()
{
	char *item;
	print_stack();
	push(" main "); print_stack();
	puts("");
	push("a"); print_stack();
	puts("");
	push("b"); print_stack();
	puts("");
	push("c"); print_stack();
	puts("");

	item = pop(); print_stack();
	puts("");
	item = pop(); print_stack();
	puts("");
	item = pop(); print_stack();
	puts("");

}


