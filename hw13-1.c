#include <stdio.h>
#include <math.h>
#pragma warning(disable:6031)

struct point {
	int x;
	int y;
};

int hw131(void)
{
	struct point p1, p2;
	printf("���� �ϴ��� ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ����� ��ǥ�� �Է��ϼ���: ");
	scanf("%d %d", &p2.x, &p2.y);

	int xdiff = p2.x - p1.x;
	int ydiff = p2.y - p1.y;
	
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.", xdiff * ydiff, (xdiff + ydiff) * 2);
	return 0;
}