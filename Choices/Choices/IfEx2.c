#include <stdio.h>


int main()
{
	/*¦�� / Ȧ���� �����ϴ� ���α׷�
	 ¦�� - 2, 4, 6, 8... (2�� ���� ������ 0), 2�� ���
	 Ȧ�� - 1, 3, 5, 7... (2�� ���� ������ 1)*/
	
	//int num = 12;
	int num;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	if (num > 10) {
		if (num % 2 == 0)
		{
			printf("%d�� 10���� ū ¦���Դϴ�.\n", num);
		}
		else
		{
			printf("%d�� 10���� ū Ȧ���Դϴ�.\n", num);
		}
	}
	return 0;
}