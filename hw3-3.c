#include <stdio.h>
#pragma warning(disable:6031)

int hw33(void)
{
	double width;
	double height;

	printf("�Ʒ� ������ �Է����ּ���.\n�簢���� ����: ");
	scanf("%lf", &width);
	printf("�簢���� ����: ");
	scanf("%lf", &height);

	double area = width * height;
	double circumstance = (width + height) * 2;

	printf("���̴� %lf �Դϴ�.\n�ѷ��� %lf �Դϴ�.", area, circumstance);
	return 0;
}