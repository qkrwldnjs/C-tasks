#include <stdio.h>
#pragma warning(disable:6031)

void loadSeats(int seats[5])
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", i);
	}

	printf("\n----------\n");

	for (int j = 0; j < 5; j++)
	{
		printf("%d ", seats[j]);
	}
	printf("\n\n===============\n");
}

int prj1(void)
{
	int select, reserve;
	int seats[5] = { 0, 0, 0, 0, 0 };

	do {
		printf("1: �¼� Ȯ���ϱ�\n2: �����ϱ�\n3: ���� ����ϱ�\n4: �����ϱ�\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &select);

		printf("\n���õ� �޴�: ");

		switch (select) {
		case 1:
			printf("�¼� Ȯ���ϱ�\n\n");
			loadSeats(seats);
			break;

		case 2:
			printf("�����ϱ�\n\n");
			printf("������ �¼��� �Է��� �ּ���: ");
			scanf("%d", &reserve);

			if (seats[reserve] != 0) printf("�̹� ����� �¼��Դϴ�.\n\n");
			else {
				seats[reserve] = 1;
				printf("\n������ �Ϸ�Ǿ����ϴ�.\n\n");
				loadSeats(seats);
			}
			break;

		case 3:
			printf("���� ����ϱ�\n\n");
			printf("������ ����� �¼��� �Է��� �ּ���: ");
			scanf("%d", &reserve);

			if (seats[reserve] != 1) printf("������� ���� �¼��Դϴ�.\n\n");
			else {
				seats[reserve] = 0;
				printf("\n���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				loadSeats(seats);
			}
			break;
		}

	} while (select != 4);
	printf("�����ϱ�\n\n�̿��� �ּż� �����մϴ�.");
	return 0;
}
