#include <stdio.h>
#include <string.h>

int check(char s[], char a[], char ch)
{
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == ch) a[i] = ch;
	}

	for (int i = 0; i < len; i++) {
		if (a[i] == '_') return 0;
	}

	return 1;
}

int hw122(void) {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";  // ���� �ַ�ǰ� ���̰� ��ġ
	char ch;
	while (1) {
		printf("���ڿ��� �Է��Ͻÿ�: %s\n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = getchar();
		if (check(solution, answer, ch) == 1) {
			printf("����: %s\n", answer);
				break;
		}
		while (ch = getchar() != '\n' && ch != EOF) {}; // ���� ����
	}
	return 0;
}
