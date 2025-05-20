#include <stdio.h>

void CallByVal(int, int);  //����� �Ű������� �ڷ����� ��� ����
void callByRef(int*, int*);
int main() {

	int x = 1, y = 2;
	int temp;

	printf("���� ���� ȣ��\n");
	CallByVal(x, y);
	printf("x = %d y = %d\n", x, y);

	printf("���ֿ� ���� ȣ��\n");
	callByRef(&x, &y);
	printf("x = %d y = %d\n", x, y);

	return 0;
}

void CallByVal(int a, int b) {
    //��ȯ
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void callByRef(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}