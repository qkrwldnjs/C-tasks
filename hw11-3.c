#include <stdio.h>
#define SIZE 5


void calculate(double* e, double* m, double* e100, double* m100, double* a)
{
	for (int i = 0; i < SIZE; i++) {
		e100[i] = (e[i] / 4.5) * 100;
		m100[i] = (m[i] / 4.5) * 100;
		a[i] = (e100[i] + m100[i]) / 2;
	}
	return;
}

void print_grade(double* arr)
{
	for (int i = 0; i < SIZE; i++) {
		if (i != 0) printf(", ");
		printf("%f", arr[i]);
	}
	printf("\n");
}

int hw113(void)
{
	double eng[SIZE] = { 4.1, 3.0, 2.8, 4.2, 3.5 };
	double math[SIZE] = { 3.1, 3.5, 3.3, 3.2, 2.7 };
	double eng100[SIZE];
	double math100[SIZE];
	double avg[SIZE];

	calculate(eng, math, eng100, math100, avg);
	printf("���� ����: ");
	print_grade(eng);
	printf("���� ����: ");
	print_grade(math);
	printf("���� ����� ����: ");
	print_grade(eng100);
	printf("���� ����� ����: ");
	print_grade(math100);
	printf("��� ����� ����: ");
	print_grade(avg);
}