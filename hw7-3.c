#include <stdio.h>
#include <math.h>

int hw73(void)
{
	int a, b, c;
	int total = 0;
	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
					printf("�����ﰢ�� %d, %d, %d\n", a, b, c);
					total++;
				}
			}
		}
	}
	printf("\n�� %d�� �Դϴ�.", total);
	return 0;
}