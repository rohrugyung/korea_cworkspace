#include <stdio.h>

typedef struct {
	int id;         // ��� ���̵�
	char name[20];  // ��� �̸�
	int salary;     // �޿�
} Employee;

int main() {

	//struct ���� ����ü ���� ����
	/*Employee e1 = {1, "�̻��", 3000000};

	printf("��� ID : %d\n", e1.id);
	printf("�̸� : %s\n", e1.name);
	printf("�޿� : %d\n", e1.salary);*/

	//����ü �迭 3��
	Employee e[3] = {
		{1, "������", 3000000},
		{ 2, "������", 4000000 },
		{ 3, "��Ÿ��", 6000000 }
	};

	int i;
	for (i = 0; i < 3; i++) {

		printf("��� ID : %d, �̸� : %s, �޿� : %d\n", e[i].id, e[i].name, e[i].salary);
	}
	

	return 0;
}