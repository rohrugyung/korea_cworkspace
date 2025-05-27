#include <stdio.h>
#include <math.h> //round(), floor(), ceil()

/*
    수학 관련 함수 - math.h 포함
*/
int main() {
    
    //반올림
    printf("%.1f\n", round(2.54));
    printf("%.1f\n", round(2.14));

    //내림(버림)
    printf("%.1f\n", floor(2.54));
    printf("%.1f\n", floor(2.14));

    //올림
    printf("%.f\n", ceil(2.54));
    printf("%.f\n", ceil(2.14));

    //절대값
    printf("%d\n", abs(-8));
    printf("%d\n", abs(8));

    //거듭제곱
    printf("%.f\n", pow(2, 4));
    printf("%.f\n", pow(10, 3));

    //제곱근
    printf("%.f\n", sqrt(16));
    printf("%.f\n", sqrt(100));

	return 0;
}