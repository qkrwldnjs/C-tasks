#include <stdio.h>
#pragma warning(disable:6031)

int hw71(void)
{	
	int n, i, sum;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	sum = 0;
	i = 1;
	while (i <= n) {
		if (i % 2 == 0) sum += i;
		i += 1;
	}
	printf("1���� %d������ ¦������ %d�Դϴ�.", n, sum);
	return 0;
}