#include <stdio.h>
#pragma warning(disable:6031)

int prj1e(void)
{
	int select, reserve;
	int s0 = 0;
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int s4 = 0;

	do {
		printf("1: �¼� Ȯ���ϱ�\n2: �����ϱ�\n3: ���� ����ϱ�\n4: �����ϱ�\n");
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &select);

		printf("\n���õ� �޴�: ");

		switch (select) {
		case 1:
			printf("�¼� Ȯ���ϱ�\n\n");
			printf("0 1 2 3 4\n----------\n%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			break;

		case 2:
			printf("�����ϱ�\n\n");
			printf("������ �¼��� �Է��� �ּ���: ");
			scanf("%d", &reserve);

			switch (reserve) {
			case 0:
				if (s0 != 0) printf("�̹� ����� �¼��Դϴ�.\n\n");
				else {
					s0 = 1;
					printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 1:
				if (s1 != 0) printf("�̹� ����� �¼��Դϴ�.\n\n");
				else {
					s1 = 1;
					printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 2:
				if (s2 != 0) printf("�̹� ����� �¼��Դϴ�.\n\n");
				else {
					s2 = 1;
					printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 3:
				if (s3 != 0) printf("�̹� ����� �¼��Դϴ�.\n\n");
				else {
					s3 = 1;
					printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 4:
				if (s4 != 0) printf("�̹� ����� �¼��Դϴ�.\n\n");
				else {
					s4 = 1;
					printf("������ �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;

			default:
				printf("�ùٸ��� ���� �¼��Դϴ�.");
				break;
			}

			printf("0 1 2 3 4\n----------\n%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
			break;

		case 3:
			printf("���� ����ϱ�\n\n");
			printf("������ ����� �¼��� �Է��� �ּ���: ");
			scanf("%d", &reserve);

			switch (reserve) {
			case 0:
				if (s0 != 1) printf("������� ���� �¼��Դϴ�.\n\n");
				else {
					s0 = 0;
					printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 1:
				if (s1 != 1) printf("������� ���� �¼��Դϴ�.\n\n");
				else {
					s1 = 0;
					printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 2:
				if (s2 != 1) printf("������� ���� �¼��Դϴ�.\n\n");
				else {
					s2 = 0;
					printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 3:
				if (s3 != 1) printf("������� ���� �¼��Դϴ�.\n\n");
				else {
					s3 = 0;
					printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;
			case 4:
				if (s4 != 1) printf("������� ���� �¼��Դϴ�.\n\n");
				else {
					s4 = 0;
					printf("���� ��Ұ� �Ϸ�Ǿ����ϴ�.\n\n");
				}
				break;

			default:
				printf("�ùٸ��� ���� �¼��Դϴ�.\n\n");
				break;
			}

			printf("0 1 2 3 4\n----------\n%d %d %d %d %d\n\n", s0, s1, s2, s3, s4);
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
