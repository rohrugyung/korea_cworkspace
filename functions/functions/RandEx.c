#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //난수(무작위수) 사용
	//srand(10); //시드(seed) 배정
	srand(time(NULL));

	/*int rndVal = rand();
	printf("%d\n", rndVal);*/
	
	int coin = rand() % 2;
	printf("%d\n", coin);

	//앞면 - 0, 뒷면 - 1
	if (coin % 2 == 0) {
		printf("앞면\n");
	}
	else {
		printf("뒷면\n");
	}

	return 0;
}