

#include <stdio.h>

int main()
{
	int x;
	int y;
	int a;
	int b;
	int c;
	int d;
	int z;

	printf("�� ���� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);

	z = x + y;
	printf("%d\n", z);

	d = x - y;
	printf("%d\n", d);

	c = x / y;
	printf("%d\n", c);

	a = x * y;
	printf("%d\n", a);

	return 0;
	
}