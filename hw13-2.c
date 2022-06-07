#include <stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

struct student get_max_stu(struct student list[3])
{
	struct student super_stu = list[0];
	for (int i = 1; i < 3; i++) {
		if (list[i].grade > super_stu.grade)
			super_stu = list[i];
	}
	return super_stu;
}

int hw132(void)
{
	struct student list[3] = {
		   { 20180001, "ȫ�浿", 3.1 },
		   { 20180002, "��ö��", 3.2 },
		   { 20180003, "�迵��", 3.9 }
	};
	struct student super_stu;
	super_stu = get_max_stu(list);

	printf("������ ���� ���� �л��� (�̸�%s, �й�%d, ����%f)�Դϴ�\n",
		super_stu.name, super_stu.number, super_stu.grade);
	return 0;
}
