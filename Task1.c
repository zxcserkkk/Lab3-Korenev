#include <stdio.h>
#include <locale.h>
#define D_ENG 2.54
#define D_ESP 2.32166
#define D_LIT 2.7076

int main()
{
	setlocale(LC_ALL, "Rus");
	task1();
	task2();
	task3();
	return 0;
}
int task1()
{
	int num1, num2;
	puts("введите число");
	scanf_s("%d", &num1);
	printf("введено число %d\n", num1);
	puts("введите второе число");
	scanf_s("%d", &num2);
	printf("Сумма: %d\n", num1 + num2);
	printf("Разность: %d\n", num1 - num2);
	printf("Произведение: %d\n", num1 * num2);
	printf("Частное: %d\n", num1 / num2);
	printf("Остаток от деления: %d\n", num1 % num2);
	return 0;
}
int task2()
{
	int dym;
	float res_eng, res_esp, res_lit;
	puts("Введите значение дюймов для расчета:");
	scanf_s("%d", &dym);
	res_eng = D_ENG * dym;
	res_esp = D_ESP * dym;
	res_lit = D_LIT * dym;
	printf("%d английских дюймов - это %.2f см\n", dym, res_eng);
	printf("%d испанских дюймов - это %.2f см\n", dym, res_esp);
	printf("%d старолитовских дюймов - это %.2f см\n", dym, res_lit);
	return 0;
}
int task3()
{
	double a, b;
	printf("Введите значение а:");
	scanf_s("%lf", &a);
	printf("Введите значение b:");
	scanf_s("%lf", &b);
	printf("\n");
	printf("---------------------------------------------------------------\n");
	printf("|   a*b     |   a+b     |   a-b     |\n");
	printf("--------------------------------------------------------------\n");
	printf("|  %4.2f*%-4.2f  |  %4.2f+%--4.2f  |  %4.2f-%--4.2f  |\n", a, b, a, b, a, b);
	printf("--------------------------------------------------------------\n");
	printf("|   %-11.2f    |   %-11.2f     |   %-11.2f    |\n", a * b, a + b, a - b);
	printf("---------------------------------------------------------------\n");
	return 0;
}