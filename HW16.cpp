#pragma warning(disable:4996)
#include<stdio.h>

int input(void);
int calculate(int);
void output(int);

int main()
{
	int num,price;
	int i = 0;
	while (1)
	{
		num = input();
		price = calculate(num);
		output(price);
		i++;
		if (i >= 5) { break; }
	}
	return 0;
}
int input(void) {
	int num;
	printf("역수를 입력하시오: ");
	scanf("%d", &num);
	return num;
}
int calculate(int num)
{
	int price,add;
	if (num <= 5){
		price = 600;
	}
	else if(num<=10){
		price = 800;
	}
	else {
		add = num - 10;
		price = 800;
		while (add > 0){
			price += 100;
			add = add - 2;
		}
	}
	return price;
}
void output(int price)
{
	printf("요금 : %d원\n", price);
	return;
}
