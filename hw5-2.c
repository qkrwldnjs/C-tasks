#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int hw52(void)
{
	double f_temp;
	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%lf", &f_temp);

	double c_temp = (f_temp - 32) * 5 / 9;
	printf("���� �µ��� %lf�Դϴ�.", c_temp);
	return 0;
}