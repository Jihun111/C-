#pragma warning(disable:4996)
#include<stdio.h>

int input1(void);
int input2(void);
void output(int, int);

int main() {
	int age, num;
	age = input1();
	num = input2();
	output(age, num);
	return 0;
}
int input1(void) {
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%d", &age);
	return age;
}
int input2(void) {
	int num;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	return num;
}
void output(int age, int num)
{
	int tot, price, discount;
	discount = 0;
	if (age <= 7) {
		price = 500;
	}
	else if (age <= 13) {
		price = 700;
	}
	else if (age <= 19) {
		price = 1000;
	}
	else if (age <= 55) {
		price = 1500;
	}
	else {
		price = 500;
	}
	if (num >= 5) { discount = price * 0.1; }
	tot = num * price;
	printf("����� => %d��\n", tot);
	printf("���αݾ� => %d��\n", num * discount);
	printf("�����ݾ� => %d��\n", tot - num * discount);
	return;
}