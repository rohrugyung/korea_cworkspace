#include <stdio.h>

int main() {

	int a = 10;
	int* b;

	printf("a�� ���� %d\n", a);

	b = &a;
	*b = 20;
	printf("b�� ���� %d\n", *b);
	printf("a�� ���� %d\n", a);

	return 0;
}