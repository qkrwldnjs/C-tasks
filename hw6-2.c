#include <stdio.h>
#include <math.h>
#pragma warning(disable:6031)

int hw62(void)
{
	int a, b, c;
	printf("a�� ���, b�� ���, c�� ����� ���ʴ�� �Է��ϼ���: ");
	scanf("%d %d %d", &a, &b, &c);
	double discriminant = pow(b, 2.0) - (4 * a * c);

	if (a == 0) {
		double result = -1 * (double) (c / b);
		printf("�������� ���� %lf�Դϴ�.", result);
	}
	else if (discriminant < 0) printf("�Ǳ��� �������� �ʽ��ϴ�.");
	else {
		double root_1 = (-1 * b + sqrt(discriminant)) / 2 * a;
		double root_2 = (-1 * b - sqrt(discriminant)) / 2 * a;
		printf("�������� ���� %lf�Դϴ�.\n", root_1);
		if (root_1 != root_2) printf("�������� ���� %lf�Դϴ�.", root_2);
	}

	return 0;
}