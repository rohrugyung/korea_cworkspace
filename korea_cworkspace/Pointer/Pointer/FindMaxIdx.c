#include <stdio.h>

int findMaxIdx(int[], int);
int findMaxIdx2(int*, int);

int main() {

	int arr[] = { 21, 35, 71, 2, 97, 66 };
	int maxIdx1, maxIdx2 = 0;

	//최대값
	maxIdx1 = findMaxIdx(arr, 6);
	maxIdx2 = findMaxIdx2(arr, 6);

	printf("최대값의 위치 : %d %d\n", maxIdx1, maxIdx2);

	return 0;
}

//매개변수를 배열로 전달
int findMaxIdx(int arr[], int len) {

	int maxIdx, i;
	maxIdx = 0;
	for (i = 1; i < len; i++) {
		if (arr[i] > arr[maxIdx]) {
			maxIdx = i;
		}
	}
	return maxIdx;
}

//매개변수를 포인터로 전달
int findMaxIdx2(int* arr, int len) {
	int maxIdx, i;
	maxIdx = 0;
	for (i = 1; i < len; i++) {
		if (*(arr + i) > *(arr + maxIdx)) {
			maxIdx = i;
		}
	}
	return maxIdx;
}