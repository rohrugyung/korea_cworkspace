#include <Stdio.h>

int main() {

	char arr[] = { '1', 'B', 'C', 'D', 'E' };
	char* p;

	p = &arr[2];  //���� �ּҷ� ����

	printf("%c%c", *p, *(p - 2));




	return 0;
}