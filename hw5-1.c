#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#pragma warning(disable:6201)

int hw51(void)
{
	int product, input;
	printf("���� ���� �Է��ϼ���: ");
	scanf("%d", &product);
	printf("����ڰ� �� ���� �Է��ϼ���: ");
	scanf("%d", &input);

	int change = input - product;
	printf("�Ž�����: %d��\n", change);

	int moneyArr[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
	for (int i = 0; i < sizeof(moneyArr); i++)
	{
		int count = change / moneyArr[i];
		if (count > 0) printf("%d��: %d��\n", moneyArr[i], count);
		change %= moneyArr[i];
	}

	return 0;
}
