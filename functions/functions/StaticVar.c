#include <stdio.h>

/*
    ���� ����(������ ����) - static�� ���� �տ� ����(����)
	- ���� �����ϰ� �����ϰ� ���α׷��� ����Ǹ� �Ҹ��
*/

void call() //void�� ��ȯ�ڷ��� ����(return ����)
{
	static int x = 0;
	x += 1; //x = x + 1;

	printf("���� ȣ���� %d��°�Դϴ�.\n", x);
}

int main() {
	//call() ȣ��
	call();
	call();
	call();

	return 0;
}