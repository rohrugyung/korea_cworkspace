#include <Stdio.h>

//�Ű������� �迭 �����͸� ����
void changeArray(int* ptr) //int a[] - ���� ����
{
	ptr[1] = 50;
}

int main() {

	int arr[] = { 10, 20, 30 };

	changeArray(arr); //int* ptr = arr

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}