# include <stdio.h>
/*
    ���ڿ��� ������
*/

int main() {

	char msg[] = "Good Luck";  //���ڿ��� ũ�� = 10
	char* p = msg;  //&msg[0]
	int i;

	printf("%dByte %dByte\n", sizeof(msg), sizeof(p));
	printf("%s\n", msg);


	//���ڿ��� ���� �ּҿ� �迭�� �̸��� �����ϴ�
	//�����͸� ����� ��� - ���Ĺ��� %p�� �̿��ص� ��
	printf("%p %p\n", msg, p);


	//p �����ͷ� ���
	printf("%s\n", p);
	printf("%s\n", p+1);
	printf("%s\n", p+2);
	printf("%s\n", p+3);

	//p ������ �������� ��� - �ѱ��ھ� ���
	//printf("%c\n", *p);
	//printf("%c\n", *(p+1));
	
	int size = sizeof(msg) / sizeof(msg[0]);  //10 / 1 = 10
	for (i = 0; i < size; i++) {
		printf("%c", *(p + i));
	}

	return 0;
}