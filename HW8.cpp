#pragma warning(disable:4996)
#include<stdio.h>

int main() {
	int his, lit, ent, tot;
	double avg;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &ent);
	tot = his + lit + ent;
	avg = tot / 3L;
	printf("총점은 %d이고 평균은 %.2lf입니다.", tot, avg);
	return 0;
}