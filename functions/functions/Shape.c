#include <stdio.h>

//�ǽ� ���� Ǯ��

int square(int x) {
	return x * x;
}

float triangle(int size, int height) {
	//��������ȯ �ؾ� �Ǽ��� ��ȯ��
	float area = (float)(size * height) / 2;
	return area;
}

int main() {

	int rectArea;
	float triArea;

	rectArea = square(4);
	triArea = triangle(3, 5);

	printf("���簢���� ���� : %dcm\n", rectArea);
	printf("�ﰢ���� ���� : %.1fcm\n", triArea);

	return 0;
}



