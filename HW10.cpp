#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int in1, in2;
	double res;
	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &in1, &in2);
	res = (double)in1 / in2;
	printf("%d + %d = %d\n", in1, in2, in1 + in2);
	printf("%d - %d = %d\n", in1, in2, in1 - in2);
	printf("%d * %d = %d\n", in1, in2, in1 * in2);
	printf("%d / %d = %.2lf", in1, in2, res);
	return 0;
}
