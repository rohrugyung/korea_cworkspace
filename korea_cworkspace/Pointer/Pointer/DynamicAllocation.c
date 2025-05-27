#include <stdio.h>
#include <stdlib.h>  //malloc() 사용

void delBl(char[]);


int main() {

	//정수형 배열 4개 선언 - 정적 할당
	/*int n[4];
	
	n[0] = 10;
	n[1] = 20*/

	//정수형 배열 4개 선언 - 동적할당
	//int* pn = (int *)malloc(sizeof(int) * 4);

	////2의 배수로 저장
	//for (int i = 0; i < 4; i++) {
	//	pn[i] = i * 2;
	//}

	////출력
	//for (int i = 0; i < 4; i++) {
	//	printf("%d\n", pn[i]);
	//}

	//free(pn);  //메모리 해제


	//int* ip;
	//int i;

	//ip = (int*)malloc(sizeof(int) * 4);

	//if (ip == NULL) {
	//	printf("동적 메모리 할당에 실패했습니다.\n");
	//	exit(1);
	//}

	////배열로 저장하기
	//ip[0] = 10;
	//ip[1] = 20;
	//ip[2] = 30;
	//ip[3] = 40;

	//for (i = 0; i < 4; i++) {
	//	printf("%d\n", ip[i]);
	//}

	////역참조로 출력
	//for (i = 0; i < 4; i++) {
	//	printf("%d\n", *(ip + i));
	//}
	//printf("\n");

	////값 변경
	//*ip = 50;
	//*(ip + 1) = 60;
	//*(ip + 2) = 70;
	//*(ip + 3) = 80;

	//for (i = 0; i < 4; i++) {
	//	printf("%d %d\n", ip[i], *(ip + i));
	//}

	//free(ip);  //메모리 해제

	//char* pc;
	//pc = (char *)malloc(sizeof(char) * 26);
	//int i;

	//if (pc == NULL) {
	//	printf("동적 메모리 할당에 실패했습니다.\n");
	//	exit(1);  //강제 종료
	//}

	//// 저장
	//for (i = 0; i < 26; i++) {
	//	*(pc + i) = 'A' + i;
	//}

	////출력
	//for (i = 0; i < 26; i++) {
	//	printf("%c ", *(pc + i));
	//}

	//free(pc);  //메모리 해제
	char a[] = "A B c D e F !";
	delBl(a);
	printf("%s\n", a);

	//2차원 포인터 배열 동적 할당
	int** pp;  //정수형 포인터의 포인터

	pp = (int**)malloc(sizeof(int*) * 2); //8B x 2 = 16B
	
	for (int i = 0; i < 2; i++) {
		pp[i] = (int*)malloc(sizeof(int) * 2);  //정수형 포인터
	}

	pp[0][0] = 1;
	pp[0][1] = 2;
	pp[1][0] = 3;
	pp[1][1] = 4;

	//값 출력
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d\n", pp[i][j]);
		}
	}

	//메모리 해제
	/* free(pp[1]);
	* free(pp[0]);*/
	for (int i = 0; i < 2; i++) {
		free(pp[i]);
	}

	return 0;
}

void delBl(char a[]) {
	int len = strlen(a);
	char* str = (char*)malloc(sizeof(char) * len);
	int i, k = 0;

	for (i = 0; i < len; i++) {
		if (a[i] != ' ')  //a[i] 공백문자가 아니면
			str[k++] = a[i];
	}
	str[k] = '\0';
	strcpy(a, str);

	free(str);
}
