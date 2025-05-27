#include <stdio.h>

int main() {


	//배열을 선언과 동시에 초기화(저장)
	int a[4] = { 10, 20, 30, 40 };
	int* pa; // 포인터(변수)
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