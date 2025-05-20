#include <stdio.h>

typedef struct {
	int id;         // 사원 아이디
	char name[20];  // 사원 이름
	int salary;     // 급여
} Employee;

int main() {

	//struct 없이 구조체 변수 선언
	/*Employee e1 = {1, "이사원", 3000000};

	printf("사원 ID : %d\n", e1.id);
	printf("이름 : %s\n", e1.name);
	printf("급여 : %d\n", e1.salary);*/

	//구조체 배열 3명
	Employee e[3] = {
		{1, "이정후", 3000000},
		{ 2, "김혜성", 4000000 },
		{ 3, "오타니", 6000000 }
	};

	int i;
	for (i = 0; i < 3; i++) {

		printf("사원 ID : %d, 이름 : %s, 급여 : %d\n", e[i].id, e[i].name, e[i].salary);
	}
	

	return 0;
}