//Calculator.c

//�Լ� ������
int add(int x, int y) {
	return x + y;
}

//���丮�� - ���(3! = 3*2*1)
//1���� Ư�������� ���ϱ�
int factorial(int n) {
	int facto = 1; //���ϱ�� 1�� �ʱ�ȭ
	for (int i = 1; i <= n; i++) {
		facto *= i; //facto = facto * i;
	}
	return facto;
} 