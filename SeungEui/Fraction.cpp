#include <stdio.h>
int x, n, left = 0;
int i, j, sum = 0;
int fraction[2] = {1, 1};
int main() {
	scanf_s("%d", &x);
	n = x;

	//�� ��° n, ������ left ���ϱ�
	i = 1;
	while (n > 0) {
		n -= i;
		i++;
	}
	n = i - 1;
	for (j = 0; j < i - 1; j++) {
		sum += j;
	}
	left = x - sum;
	//printf("%d�� %d���� %d��°�̴�.", x, n, left);

	// ¦�� ��° ���̸� (1/n���� ����)
	if (n % 2 == 0) {
		fraction[1] = n;
		for (i = 0; i < left-1; i++) {
			fraction[0] += 1;
			fraction[1] -= 1;
		}
		printf("%d/%d", fraction[0], fraction[1]);
	}
	// Ȧ���� (n/1���� ����)
	else {
		fraction[0] = n;
		for (i = 0; i < left-1; i++) {
			fraction[0] -= 1;
			fraction[1] += 1;
		}
		printf("%d/%d", fraction[0], fraction[1]);
	}
}