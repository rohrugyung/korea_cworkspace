#include <stdio.h>
/*
    ���ڿ� �迭�����ͷ� �ܾ� �����ϱ�
*/
int main() {
	/*char word[][6] = {"cow", "dog", "horse"};

	printf("%s\n", word[0]);
	printf("%s\n", word[1]);
	printf("%s\n", word[2]);*/

	char* word[] = { "cow", "dog", "horse" };
	int i;
	//printf("%s\n", word[0]);
	//printf("%s\n", word[1]);
	//printf("%s\n", word[2]);

	//������ ��� �������̹Ƿ� 8Byte��.
	int size = sizeof(word) / sizeof(word[0]); 
	printf("%d %d\n", sizeof(word), sizeof(word[0]));

	for (i = 0; i < size; i++) {
		printf("%s\n", word[i]);
	}

	return 0;
}