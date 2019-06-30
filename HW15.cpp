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
	printf("몸무게를 입력하세요(kg) :");
	scanf("%lf", &h);
	return h;
}
double inputHeight() {
	double w;
	printf("키를 입력하세요(m) :");
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
		printf("당신의 BMI는 %.1lf으로 고도비반입니다.", bmi);
	}
	else if (bmi > 30) {
		printf("당신의 BMI는 %.1lf으로 비만입니다.", bmi);
	}
	else if (bmi > 25) {
		printf("당신의 BMI는 %.1lf으로 과체중입니다.", bmi);
	}
	else if (bmi > 18.5) {
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.", bmi);
	}
	else {
		printf("당신의 BMI는 %.1lf으로 저체중입니다.", bmi);
	}
	return;
}