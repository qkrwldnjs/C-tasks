#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int hw61(void)
{
	int year;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);

	if (year % 4 == 0) printf("%d���� �����Դϴ�.\n��, 1���� 366���Դϴ�.", year);
	else printf("%d���� ������ �ƴմϴ�.\n��, 1���� 365���Դϴ�.", year);

	return 0;
}