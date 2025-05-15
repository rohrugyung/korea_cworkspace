#include <Stdio.h>

void func1(int i, int j);
void func2(int* i, int* j);
int main() {

	int a = 3, b = 12;

	
	func1(a, b);
	printf("--- main() �� func1 ȣ���� ��� ---\n");
	printf("%d %d\n", a, b);

	func2(&a, &b);
	printf("--- main() �� func2 ȣ���� ��� ---\n");
	printf("%d %d\n", a, b);

	return 0;
}

void func1(int i, int j) {
	i *= 3;
	j /= 3;
	printf("--- func1() �Լ� �� ��� ---\n");
	printf("%d %d\n", i, j);
}

void func2(int* i, int* j)  //i = &a, j = &b
{
	*i = *i * 3;
	*j = *j / 3;
	printf("--- func2() �Լ� �� ��� ---\n");
	printf("%d %d\n", *i, *j);
}