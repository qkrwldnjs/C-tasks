#include <stdio.h>
#pragma warning(disable:6031)

int hw101(void)
{
	int scores[100];
	int input;
	int count = 0;

	for (int i = 0; i < 100; i++) {
		printf("������ �Է��� �ּ���: ");
		scanf("%d", &input);

		if (input < 0) break;
		else {
			scores[i] = input;
			count++;
		}
	}

	int total = 0;

	for (int j = 0; j < count; j++) {
		total += scores[j];
	}
	printf("\n\n����� %d �Դϴ�.", total / count);
	return 0;
}