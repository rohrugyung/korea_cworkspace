#include <stdio.h>
int main()
{
	int num;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	if (num > 10) {
		if (num % 2 == 0)
		{
			printf("%d��(��) 10���� ū ¦���Դϴ�.\n", num);
		}
		else
		{
			printf("%d��(��) 10���� ū Ȧ���Դϴ�.\n", num);
		}
	}
	else {
		if (num % 2 == 0)
		{
			printf("%d��(��) 10���� ���� ¦���Դϴ�.\n", num);
		}
		else
		{
			printf("%d��(��) 10���� ���� Ȧ���Դϴ�.\n", num);
		}
	return 0;
}