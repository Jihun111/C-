#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int his, lit, ent, tot;
	double avg;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &ent);
	tot = his + lit + ent;
	avg = tot / 3L;
	printf("������ %d�̰� ����� %.2lf�Դϴ�.", tot, avg);
	return 0;
}