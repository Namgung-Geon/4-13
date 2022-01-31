#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << b : %d\n", a << 1);
	printf("a >> b : %d\n", a >> 2);

	return 0;
}