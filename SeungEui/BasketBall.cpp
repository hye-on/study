#include <stdio.h>
int n; // ������ ��
char name[150][40] = {}; // ��� ������ ��
int count[26] = {}; // ���ĺ� ����
int i, j = 0;
char a = 'a';
int main() { 
	scanf_s("%d", &n);

	//������ 5�� �̸��̸� ���
	if (n < 5) {
		printf("PREDAJA");
		return 0;
	}

	for (i = 0; i <= n; i++)
		gets_s(name[i]);

	// ������ ����ŭ �ݺ�
	for (i = 1; i <= n; i++) {
		// ������ ù ���� ���ĺ���ŭ �ݺ�
		for (j = 0; j < 26; j++)
			if (name[i][0] == a + j) count[j]++;
	}

	j = 0;
	for (i = 0; i < 26; i++) {
		if (count[i] >= 5) { 
			printf("%c", a + i);
		}
		else j++;
	}

	if (j == 26) printf("PREDAJA");
}