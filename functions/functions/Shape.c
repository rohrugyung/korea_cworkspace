#include <stdio.h>

//실습 문제 풀이

int square(int x) {
	return x * x;
}

float triangle(int size, int height) {
	//강제형변환 해야 실수로 반환됨
	float area = (float)(size * height) / 2;
	return area;
}

int main() {

	int rectArea;
	float triArea;

	rectArea = square(4);
	triArea = triangle(3, 5);

	printf("정사각형의 넓이 : %dcm\n", rectArea);
	printf("삼각형의 넓이 : %.1fcm\n", triArea);

	return 0;
}



