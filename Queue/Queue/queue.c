#include <stdio.h>
#include <stdlib.h>

#define Q_SIZE 5


int	size[Q_SIZE] = { 0 };
int front=0, rear=0;
int item;

void print_queue() {
	int i,last, first;
	first = ((front + 1) % Q_SIZE);
	last = ((rear + 1) % Q_SIZE);
	printf("[");
	for (i = first; i != last; i = (i + 1) % Q_SIZE) {
		
		printf(" %d ", size[i]);
		
	}
	printf("]\n");
}


void enqueue(item) {
	if ((rear + 1) % Q_SIZE == front) {
	printf("overflow\n");
	return;
	}
	rear = (rear + 1) % Q_SIZE;
	size[rear] = item;
}


int dequeue() {
	if (front == rear) {
		printf("underflow\n");
		return -1;
	}

	return size[++front];
	
}

int main() {
	enqueue(1); print_queue();
	enqueue(2); print_queue();
	enqueue(3); print_queue();
	enqueue(4); print_queue();
	enqueue(5); print_queue();
	dequeue(); print_queue();
	dequeue(); print_queue();
	dequeue(); print_queue();
	dequeue(); print_queue();
	dequeue(); print_queue();
	
}