#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //����(��������) ���
	//srand(10); //�õ�(seed) ����
	srand(time(NULL));

	/*int rndVal = rand();
	printf("%d\n", rndVal);*/
	
	int coin = rand() % 2;
	printf("%d\n", coin);

	//�ո� - 0, �޸� - 1
	if (coin % 2 == 0) {
		printf("�ո�\n");
	}
	else {
		printf("�޸�\n");
	}

	return 0;
}