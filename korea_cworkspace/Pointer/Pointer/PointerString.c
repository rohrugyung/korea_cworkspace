# include <stdio.h>
/*
    문자열과 포인터
*/

int main() {

	char msg[] = "Good Luck";  //문자열의 크기 = 10
	char* p = msg;  //&msg[0]
	int i;

	printf("%dByte %dByte\n", sizeof(msg), sizeof(p));
	printf("%s\n", msg);


	//문자열의 시작 주소와 배열의 이름은 동일하다
	//포인터를 사용할 경우 - 서식문자 %p를 이용해도 됨
	printf("%p %p\n", msg, p);


	//p 포인터로 출력
	printf("%s\n", p);
	printf("%s\n", p+1);
	printf("%s\n", p+2);
	printf("%s\n", p+3);

	//p 포인터 역참조로 출력 - 한글자씩 출력
	//printf("%c\n", *p);
	//printf("%c\n", *(p+1));
	
	int size = sizeof(msg) / sizeof(msg[0]);  //10 / 1 = 10
	for (i = 0; i < size; i++) {
		printf("%c", *(p + i));
	}

	return 0;
}