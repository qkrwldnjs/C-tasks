#include <stdio.h>
#pragma warning(disable:6031)
#pragma warning(disable:6385)
#define SIZE 16

struct user_info {
	int id;
	int password;
};

struct user_info user[SIZE];

int load_user_info()
{
	for (int i = 0; i < SIZE; i++) {
		user[i].id = 10 * (i + 1);
		user[i].password = 4 + 1000 * (i + 1);
	}
	return 0;
}

int check_login(int id, int password)
{
	int low = 0;
	int high = SIZE - 1;
	int median;

	while (low <= high) {
		median = (low + high) / 2;
		if (id == user[median].id) {
			if (password == user[median].password) return id;
			else return -2;
		}
		else if (id > user[median].id) low = median + 1;
		else high = median - 1;
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

int reserve(int seats[3][5], int row, int col, int id)
{
	if (0 <= col && 2 >= col && 0 <= row && row <= 4) {
		if (seats[col][row] == 0) return 1;
		else return -1;
	}
	else return -1;
}

int cancel(int seats[3][5], int row, int col, int id)
{
	if (0 <= col && 2 >= col && 0 <= row && row <= 4) {
		if (seats[col][row] == id) return 1;
		else return -1;
	}
	else return -1;
}

void login(int* id, int* pwd)
{
	int input_id, input_pwd;
	do {
		printf("�α����� ���ּ���.\n���̵�: ");
		scanf("%d", &input_id);
		printf("��й�ȣ: ");
		scanf("%d", &input_pwd);

		switch (check_login(input_id, input_pwd)) {
		case -1:
			printf("\n��ġ�ϴ� ���̵� ã�� �� �����ϴ�.\n\n");
			break;
		case -2:
			printf("\n��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n\n");
			break;
		}
	} while (check_login(input_id, input_pwd) < 0);

	*id = input_id;
	*pwd = input_pwd;
	printf("\n%d�� �ݰ����ϴ�.\n\n", input_id);
	return;
}

int prj4(void)
{
	int id, pwd, select, row, col;
	int seats[3][5] = {		// ��(row): 0, 1, 2, 3, 4
		{0, 0, 0, 0, 0},	// ��(col): 0, 1, 2
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0}
	};

	load_user_info();
	login(&id, &pwd);

	do {
		printf("1: �¼� Ȯ���ϱ�\n2: �����ϱ�\n3: ���� ����ϱ�\n4: �����ϱ�\n5: �α׾ƿ�\n");
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

			if (reserve(seats, row, col, id) == 1) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				seats[col][row] = id;
				print_seats(seats);
			}
			else printf("���࿡ �����Ͽ����ϴ�.\n\n");
			break;

		case 3:
			printf("���� ����ϱ�\n\n");
			printf("������ ����� �¼��� �Է��� �ּ���(�� ��): ");
			scanf("%d %d", &row, &col);

			if (cancel(seats, row, col, id) == 1) {
				printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				seats[col][row] = 0;
				print_seats(seats);
			}
			else printf("���� ��ҿ� �����Ͽ����ϴ�.\n\n");
			break;

		case 4:
			break;

		case 5:
			printf("�α׾ƿ�\n\n�̿��� �ּż� �����մϴ�.\n");
			login(&id, &pwd);
			break;

		default:
			printf("X\n�ùٸ��� ���� ��ȣ�Դϴ�.\n\n");
			break;
		}

	} while (select != 4);
	
	printf("�����ϱ�\n\n�̿��� �ּż� �����մϴ�.");
	return 0;
}