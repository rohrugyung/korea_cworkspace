#include <stdio.h>

int main() {

	int a = 10;
	int* b;

	printf("a의 값은 %d\n", a);

	b = &a;
	*b = 20;
	printf("b의 값은 %d\n", *b);
	printf("a의 값은 %d\n", a);

	return 0;
}