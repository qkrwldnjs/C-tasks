#include <stdio.h>
#include <string.h>
#pragma warning(disable:6031)
#pragma warning(disable:6385)
#define SIZE 10

struct user_info {
	int id_num;
	char id[10];
	char password[10];
};


int load_user_info(struct user_info user[SIZE])
{
	for (int i = 0; i < SIZE; i++) {
		user[i].id_num = (i + 1) * 10;
		sprintf(user[i].id, "user%d", i);
		sprintf(user[i].password, "pass%d", i);
	}
	return 0;
}

int check_login(char id[10], char password[10], struct user_info user[SIZE])
{
	int high, low, mid;
	high = SIZE - 1;
	low = 0;

	while (high >= low) {
		mid = (high + low) / 2;
		int temp = strcmp(id, user[mid].id);
		if (temp > 0) {
			low = mid + 1;
		}
		else if (temp < 0) {
			high = mid - 1;
		}
		else {
			if (strcmp(password, user[mid].password) == 0) return user[mid].id_num;
			else return -2;
		}
	}

	return -1;
}

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

int reserve(int seats[3][5], int row, char col, int id)
{
	int newCol;
	switch (col) {
	case 'A':
		newCol = 0;
		break;
	case 'B':
		newCol = 1;
		break;
	case 'C':
		newCol = 2;
		break;
	default:
		return -1;
	}

	if (0 <= row && row <= 4) {
		if (seats[newCol][row] == 0) {
			seats[newCol][row] = id;
			return 1;
		}
		else return -1;
	}
	else return -1;
}

int cancel(int seats[3][5], int row, char col, int id)
{
	int newCol;
	switch (col) {
	case 'A':
		newCol = 0;
		break;
	case 'B':
		newCol = 1;
		break;
	case 'C':
		newCol = 2;
		break;
	default:
		return -1;
	}

	if (0 <= row && row <= 4) {
		if (seats[newCol][row] == id) {
			seats[newCol][row] = 0;
			return 1;
		}
		else return -1;
	}
	else return -1;
}

int main(void)
{
	char col, pwd[10], id[10];
	int select, row, id_num;
	int seats[3][5] = {		// ��(row): 0, 1, 2, 3, 4
		{0, 0, 0, 0, 0},	// ��(col): A, B, C
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0}
	};

	struct user_info user[10];
	load_user_info(user);


	do {
		printf("�α����� ���ּ���.\n���̵�: ");
		scanf("%s", &id);
		printf("��й�ȣ: ");
		scanf("%s", &pwd);

		switch (check_login(id, pwd, user)) {
		case -1:
			printf("\n��ġ�ϴ� ���̵� ã�� �� �����ϴ�.\n\n");
			break;
		case -2:
			printf("\n��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n\n");
			break;
		}
	} while (check_login(id, pwd, user) < 0);

	id_num = check_login(id, pwd, user);


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
			printf("������ �¼��� �Է��� �ּ���: ");
			scanf_s("%c%d", &col, 1, &row);

			if (reserve(seats, row, col, id_num) == 1) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				print_seats(seats);
			}
			else printf("���࿡ �����Ͽ����ϴ�.\n\n");
			break;

		case 3:
			printf("���� ����ϱ�\n\n");
			printf("������ ����� �¼��� �Է��� �ּ���: ");
			scanf_s("%c%d", &col, 1, &row);

			if (cancel(seats, row, col, id_num) == 1) {
				printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				print_seats(seats);
			}
			else printf("���� ��ҿ� �����Ͽ����ϴ�.\n\n");
			break;

		case 4:
			break;

		default:
			printf("X\n�ùٸ��� ���� ��ȣ�Դϴ�.\n\n");
			break;
		}

	} while (select != 4);

	printf("�����ϱ�\n\n�̿��� �ּż� �����մϴ�.");
	return 0;
}