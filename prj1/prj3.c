#include <stdio.h>
#pragma warning(disable:6031)
#pragma warning(disable:6385)

int print_seats(int seats[3][5])
{
	printf("  | 0 1 2 3 4\n--------------\n");
	for (int i = 0; i < 3; i++) {
		printf("%d |", i);
		for (int j = 0; j < 5; j++) {
			printf(" %d", seats[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 1;
}

int reserve(int seats[3][5], int row, int col)
{	
	if (0 <= col <= 2 && 0 <= row <= 4) {
		if (seats[col][row] == 0) return 1;
		else return -1;
	}
	else return -1;
}

int cancel(int seats[3][5], int row, int col)
{
	if (0 <= col <= 2 && 0 <= row <= 4) {
		if (seats[col][row] == 1) return 1;
		else return -1;
	}
	else return -1;
}

int main(void)
{
	int select, row, col;
	int seats[3][5] = {		// ��(row): 0, 1, 2, 3, 4
		{0, 0, 0, 0, 0},	// ��(col): 0, 1, 2
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0}
	};

	do {
		printf("1: �¼� Ȯ���ϱ�\n2: �����ϱ�\n3: ���� ����ϱ�\n4: �����ϱ�\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &select);

		printf("\n���õ� �޴�: ");

		switch (select) {
		case 1:
			printf("�¼� Ȯ���ϱ�\n\n");
			print_seats(seats);
			break;

		case 2:
			printf("�����ϱ�\n\n");
			printf("������ �¼��� �Է��� �ּ���(�� ��): ");
			scanf("%d %d", &row, &col);

			if (reserve(seats, row, col) == 1) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				seats[col][row] = 1;
				print_seats(seats);
			}
			else printf("���࿡ �����Ͽ����ϴ�.\n\n");
			break;

		case 3:
			printf("���� ����ϱ�\n\n");
			printf("������ ����� �¼��� �Է��� �ּ���: ");
			scanf("%d %d", &row, &col);

			if (cancel(seats, row, col) == 1) {
				printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				seats[col][row] = 0;
				print_seats(seats);
			}
			else printf("���� ��ҿ� �����Ͽ����ϴ�.\n\n");
			break;

		case 4:
			break;

		default:
			printf("X\n�ùٸ��� ���� ��ȣ�Դϴ�.\n\n");
		}

	} while (select != 4);
	printf("�����ϱ�\n\n�̿��� �ּż� �����մϴ�.");
	return 0;
}
