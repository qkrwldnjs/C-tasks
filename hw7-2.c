#include <stdio.h>
#pragma warning(disable:6031)

int hw72(void)
{
	int big, small, remain;
	printf("�ΰ��� ������ �Է��ϼ���(ū��, ������): ");
	scanf("%d %d", &big, &small);

	if (small == 0) printf("�ִ� ������� %d�Դϴ�.", big);
	else {
		remain = big % small;
		while (remain != 0) {
			big = small;
			small = remain;
			remain = big % small;
		}
		printf("%d %d %d", big, small, remain);
		printf("�ִ� ������� %d�Դϴ�.", small);
	}
	return 0;
}