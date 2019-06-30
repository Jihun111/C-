#pragma warning(disable:4996)
#include<stdio.h>

int input(void);
int yearCheck(int);
void output(int,int);

int main() {
	int year,check;
	int i = 0;
	while (1) {
		year = input();
		check = yearCheck(year);
		output(year, check);
		if (i >= 10) { break; }
		i++;
	}
	return 0;
}
int input(void) {
	int year;
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);
	return year;
}
int yearCheck(int year) {
	int check;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				check = 1;
			}
			else {
				check = 0;
			}
		}
		else {
			check = 1;
		}
	}
	else {
		check = 0;
	}
	return check;
}
void output(int num, int check) {
	if (check == 0) {
		printf("%d���� ���(Common year)�Դϴ�.\n", num);
	}
	else {
		printf("%d���� ����(Leep year)�Դϴ�.\n", num);
	}
	return;
}
