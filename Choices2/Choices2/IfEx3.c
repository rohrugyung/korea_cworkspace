#include <stdio.h>
int main()
{
	int num;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);

	if (num > 10) {
		if (num % 2 == 0)
		{
			printf("%d는(은) 10보다 큰 짝수입니다.\n", num);
		}
		else
		{
			printf("%d는(은) 10보다 큰 홀수입니다.\n", num);
		}
	}
	else {
		if (num % 2 == 0)
		{
			printf("%d는(은) 10보다 작은 짝수입니다.\n", num);
		}
		else
		{
			printf("%d는(은) 10보다 작은 홀수입니다.\n", num);
		}
	return 0;
}