#include <stdio.h>


int main() 
{
	push("main");
	printf("before calling a()\n");
	print_stack();
	a();

	pop();
	printf("after calling a()\n");
	print_stack();
}

int a() {
	b();
}

int b() {
	c();
}

int c() {
	return 0;
}