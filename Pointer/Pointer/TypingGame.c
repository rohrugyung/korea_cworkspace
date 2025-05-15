#include <stdio.h>
#include <stdlib.h> //srand(), rand()
#include <time.h>   //time(), clock()
#include <string.h>  //strcmp()
/*
    ���� Ÿ�� ����
	- ���� �ܾ �����ϰ� ������
	- ����ڰ� �Է��ؼ� �ܾ ��ġ�ϸ� "���", �ƴϸ� "�ٽ� ����!"
	- �õ�Ƚ���� 10ȸ�̰�, ���� �ҿ�ð��� ������
*/

int main() {
	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox", "horse", "monkey", "lion", "tiger" };
	char* question;  //����(�����ϰ� ����� �ܾ�)
	char answer[30];  //����ڰ� �Է��� �ܾ�
	int n = 1; //���� ��ȣ
	clock_t start, end;  //����, ����ð�
	double elapsedTime;  //�ҿ�ð�

	//���� �õ� ����
	srand(time(NULL));
	int size = sizeof(words) / sizeof(words[0]); 

    printf("���� Ÿ�� ����, �غ�Ǹ� ����");
	getchar();  //'\n'

	start = clock(); //���� �ð�
	while (n <= 10) {

		printf("\n���� %d\n",n);
		int rndIdx = rand() % size;  //�ε���(0 ~ 9)
		question = words[rndIdx];
		printf("%s\n", question);

		//sizeof(answer) -���� �����÷ο� ���� ����
		scanf_s("%s", answer, sizeof(answer));  //���� �Է�

	    //���� ��ġ ��(==), ���� ��ġ ��(strcmp() == 0(��ġ), 1(����ġ))
		if (strcmp(question, answer) == 0) {
			printf("���!\n");
			n++; //���� ���� ����
		}
		else {
			printf("��Ÿ! �ٽ� ����!\n");
		}
	}
	end = clock(); //���� �ð�
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð�: %.2lf��\n", elapsedTime);

	return 0;
}