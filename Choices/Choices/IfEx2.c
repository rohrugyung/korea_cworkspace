#include <stdio.h>


int main()
{
	/*짝수 / 홀수를 판정하는 프로그램
	 짝수 - 2, 4, 6, 8... (2로 나눈 나머지 0), 2의 배수
	 홀수 - 1, 3, 5, 7... (2로 나눈 나머지 1)*/
	
	//int num = 12;
	int num;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);

	if (num > 10) {
		if (num % 2 == 0)
		{
			printf("%d는 10보다 큰 짝수입니다.\n", num);
		}
		else
		{
			printf("%d는 10보다 큰 홀수입니다.\n", num);
		}
	}
	return 0;
}