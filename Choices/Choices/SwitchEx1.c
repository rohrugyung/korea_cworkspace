#include <stdio.h>
/*
    switch(����){
	    case: ���๮; break;
		default: ���๮; break;
	}
*/
int main()
{
	//���������� Ÿ�� - �ǹ� ��(1 ~ 3)
	int floor = 2;

	switch (floor) {
	case 1:
		printf("1���� �������ϴ�.\n");
		break;
	case 2:
		printf("2���� �������ϴ�.\n");
		break;
	case 3:
		printf("3���� �������ϴ�.\n");
		break;
	default:
		printf("�ǹ��� ���� ���Դϴ�.\n");
		break;
	}

	return 0;
}