#include <stdio.h>

int main() {


	//�迭�� ����� ���ÿ� �ʱ�ȭ(����)
	int a[4] = { 10, 20, 30, 40 };
	int* pa; // ������(����)
	int i;

	for (i = 0; i < 4; i++) {
		printf("%x %d\n", pa + i, *(pa + i));
	}

	pa = a;

	for (i = 0; i < 4; i++) {

		printf("%dbyte %dbyte\n", sizeof(a), sizeof(pa));
	}

	return 0;
}