#include <stdio.h>
//����� ���� ��������� �ֵ���ǥ ����ؾ� ��
#include "Calculator.h"


int main() 
{
	//����(����) ����
	int x = 3, y = 4;
	int value1, value2;
	
	//���� �� �Լ� ȣ��
	count++;
	value1 = add(x, y);
	value2 = factorial(y);

	printf("count = %d\n", count);
	printf("value1 = %d\n", value1);
	printf("%d! = %d\n", y, value2);
	printf("5! = %d\n", factorial(5));

	system("pause"); //exe ���������� ������ �ʵ��� ��(����)

	return 0;
}