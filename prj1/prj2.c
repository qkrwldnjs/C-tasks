#include <stdio.h>
#pragma warning(disable:6031)

int s0 = 0;
int s1 = 0;
int s2 = 0;
int s3 = 0;
int s4 = 0;

int print_seats_prj2()
{
	printf("0 1 2 3 4\n----------\n%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
	return 1;
}

int reserve_prj2(int seat) 
{
	switch (seat) {
	case 0:
		if (s0 != 0) return -1;
		else {
			s0 = 1;
			return 1;
		}
		break;
	case 1:
		if (s1 != 0) return -1;
		else {
			s1 = 1;
			return 1;
		}
		break;
	case 2:
		if (s2 != 0) return -1;
		else {
			s2 = 1;
			return 1;
		}
		break;
	case 3:
		if (s3 != 0) return -1;
		else {
			s3 = 1;
			return 1;
		}
		break;
	case 4:
		if (s4 != 0) return -1;
		else {
			s4 = 1;
			return 1;
		}
		break;

	default:
		return -1;
	}
}

int cancel_prj2(int seat)
{
	switch (seat) {
	case 0:
		if (s0 != 1) return -1;
		else {
			s0 = 0;
			return 1;
		}
		break;
	case 1:
		if (s1 != 1) return -1;
		else {
			s1 = 0;
			return 1;
		}
		break;
	case 2:
		if (s2 != 1) return -1;
		else {
			s2 = 0;
			return 1;
		}
		break;
	case 3:
		if (s3 != 1) return -1;
		else {
			s3 = 0;
			return 1;
		}
		break;
	case 4:
		if (s4 != 1) return -1;
		else {
			s4 = 0;
			return 1;
		}
		break;

	default:
		return -1;
	}
}

int prj2(void)
{
	int select, s, result;

	do {
		printf("1: �¼� Ȯ���ϱ�\n2: �����ϱ�\n3: ���� ����ϱ�\n4: �����ϱ�\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &select);

		printf("\n���õ� �޴�: ");

		switch (select) {
		case 1:
			printf("�¼� Ȯ���ϱ�\n\n");
			print_seats();
			break;

		case 2:
			printf("�����ϱ�\n\n");
			printf("������ �¼��� �Է��� �ּ���: ");
			scanf("%d", &s);

			if (reserve(s) == 1) {
				printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				print_seats();
			}
			else printf("���࿡ �����Ͽ����ϴ�.\n\n");
			break;

		case 3:
			printf("���� ����ϱ�\n\n");
			printf("������ ����� �¼��� �Է��� �ּ���: ");
			scanf("%d", &s);

			if (cancel(s) == 1) {
				printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				print_seats();
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
