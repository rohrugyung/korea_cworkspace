#include <stdio.h>
#include <math.h> //round(), floor(), ceil()

/*
    ���� ���� �Լ� - math.h ����
*/
int main() {
    
    //�ݿø�
    printf("%.1f\n", round(2.54));
    printf("%.1f\n", round(2.14));

    //����(����)
    printf("%.1f\n", floor(2.54));
    printf("%.1f\n", floor(2.14));

    //�ø�
    printf("%.f\n", ceil(2.54));
    printf("%.f\n", ceil(2.14));

    //���밪
    printf("%d\n", abs(-8));
    printf("%d\n", abs(8));

    //�ŵ�����
    printf("%.f\n", pow(2, 4));
    printf("%.f\n", pow(10, 3));

    //������
    printf("%.f\n", sqrt(16));
    printf("%.f\n", sqrt(100));

	return 0;
}