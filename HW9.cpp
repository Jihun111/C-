#pragma warning(disable:4996)
#include<stdio.h>
int input(void);
int main()
{
	int number;
	number = input();
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16������ %#x�Դϴ�.\n", number);
	return 0;
}
int input(void) {
	int num;
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &num);
	return num;
}