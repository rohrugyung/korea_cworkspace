# include <stdio.h>
/*
    �������� ���(����)
*/

int main() {

	int x = 10, y = 20, z;
	int* arr[3];  //������ �迭

	arr[0] = &x;  //������ �ּ� ����
	arr[1] = &y;
	arr[2] = &z;

	*arr[2] = *arr[0] + *arr[1];  //�������� ����

	printf("arr[2]�� �� : %d\n", *arr[2]);
	printf("z�� �� : %d\n", z);


	//�迭�� �������� ����
	int a[5] = { 1, 2, 3, 4, 5 };
	int* b;
	int i;

	printf("���� �迭 a�� �� ���\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	printf("���� �迭 a�� �� ��ҿ� 10�� ���ϱ�\n");

	b = a; //&a[0]

	//*b = *b + 10;
	//*(b + 0) = *(b + 0) + 10;

	/*printf("%d\n", *(b + 0));*/

	for (i = 0; i < 5; i++)
		*(b + i) += 10;

	for (i = 0; i < 5; i++)
		printf("%d ", *(b + i));



	return 0;
}