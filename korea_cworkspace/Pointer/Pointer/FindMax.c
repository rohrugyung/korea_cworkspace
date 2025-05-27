#include <stdio.h>
/*
    1. 배열에서 최대값 찾기
	2. 포인터 배열에서 최대값 찾기
*/

int findMax(int[], int);
int findMax2(int*, int);

int main() {
	int arr[] = { 21, 35, 71, 2, 97, 66 };
	int max1, max2;

	max1 = findMax(arr, 6);  //배열과 개수를 전달함
	max2 = findMax2(arr, 6);

	printf("최대값 : %d %d\n", max1, max2);

	return 0;
}

//매개변수를 배열로 전달
int findMax(int arr[], int len) {

	int maxVal, i;
	maxVal = arr[0];  //최대값 설정
	for (i = 1; i < len; i++) {
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}

	return maxVal;
}

//매개변수를 포인터로 전달
int findMax2(int* arr, int len) {
	int maxVal, i;
	maxVal = *(arr + 0);

	//printf("%d\n", maxVal);

	for (i = 1; i < len; i++) {
		if (*(arr + i) > maxVal) {
			maxVal = *(arr + i);
		}
	}
	return maxVal;
}