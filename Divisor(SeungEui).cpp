#include <stdio.h>

int i, j, temp, k, N = 0;
int div[50] = {};

int FindN(int num[]) {
	// �迭 ũ�Ⱑ ¦������ Ȧ������
	if (k != 1) {
		return num[0] * num[k-1];
	}
	else {	//�������� �߰��� �����ϱ�
		return num[0] * num[0];
	}

}

void Sort(int num[]) { //�������� ����
	for (i = 0; i < k - 1; i++) {
		for (j = i + 1; j < k; j++) {
			if (num[i] > num[j]) {
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
}
int main() {

	// �Է�
	scanf_s("%d", &k);
	for (i = 0; i < k; i++) {
		scanf_s("%d", &div[i]);
	}
	Sort(div);
	N = FindN(div);
	
	//���
	printf("%d", N);
}