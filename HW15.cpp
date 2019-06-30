#pragma warning(disable:4996)
#include<stdio.h>

double inputHeight();
double inputWeight();
double calculate(double, double);
void output(double);

int main() {
	double height;
	double weight;
	double bmi;
	weight = inputWeight();
	height = inputHeight();
	bmi = calculate(weight, height);
	output(bmi);
	return 0;
}
double inputWeight() {
	double h;
	printf("�����Ը� �Է��ϼ���(kg) :");
	scanf("%lf", &h);
	return h;
}
double inputHeight() {
	double w;
	printf("Ű�� �Է��ϼ���(m) :");
	scanf("%lf", &w);
	return w;
}
double calculate(double w, double n) {
	double bmi;
	bmi = w / (n*n);
	return bmi;
}
void output(double bmi) {
	if (bmi > 40) {
		printf("����� BMI�� %.1lf���� ������Դϴ�.", bmi);
	}
	else if (bmi > 30) {
		printf("����� BMI�� %.1lf���� ���Դϴ�.", bmi);
	}
	else if (bmi > 25) {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	}
	else if (bmi > 18.5) {
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.", bmi);
	}
	else {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", bmi);
	}
	return;
}