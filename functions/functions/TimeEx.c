#include <stdio.h>
#include <time.h> //time()
#include <Windows.h> //Sleep()

/*
    �ð� �Լ� - time.h ����
	- time_t �ڷ����� ���
*/

int main() {

	time_t now;
	//long now;
	now = time(NULL); //time(NULL) - �ð��� ��� �帧�� �ǹ�

	//ld - long decimal
	//���н�(�ü��)�� ����� �������� ��
	//��(second) ����
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� : %ld��\n", 
		now);
	//��(day)�� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� : %ld��\n", 
		now / (24 * 60 * 60));
	//��(year)�� ȯ��
	printf("1970�� 1�� 1��(0�� 0�� 0��)���� : %ld��\n", 
		now / (365 * 24 * 60 * 60));

	////���� �ð� ����
	//time_t start, end;

	//start = time(NULL); //���� �ð�
	//printf("���� �ð�: %ld��\n", start);

	////1~10���� ���
	//for (int i = 1; i <= 10; i++) {
	//	printf("%d\n", i);
	//	Sleep(500); //1�� - 1000
	//}

	//end = time(NULL); //���� �ð�
	//printf("���� �ð�: %ld��\n", end);
	//printf("%ld��\n", (end - start));

	//������ ����ð� ����
	clock_t start, end;
	double elapsedTime; //�ҿ� �ð�

	start = clock(); //���� �ð�
	//1~10���� ���
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
		Sleep(500); //1�� - 1000
	}

	end = clock(); //���� �ð�

	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("�ҿ� �ð�: %.2f��\n", elapsedTime);

	return 0;
}