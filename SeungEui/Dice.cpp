#include <stdio.h>

int main() {
	int l, m, n = 0;
	int arr1[20], arr2[20], arr3[40] = {};
	int sums[100] = {};
	int i, j, k = 0;
	int sum = 0;

	//���� �� index�� 1 �߰��ϱ�
	scanf_s("%d %d %d", &l, &m, &n);
	for(i=0;i<l;i++)
		for(j=0;j<m;j++)
			for (k = 0; k < n; k++) {
				sum += i + j + k + 3;
				sums[sum]++;
				sum = 0;
			}


	//sums[] �ִ� max ã��
	int max = 0;
	for (i = 0; i < (l + m + n - 1); i++)
		if (sums[i] != 0)
			for (j = i + 1; j < l + m + n; j++)
				if (sums[i] < sums[j])
					max = sums[j];

	//�ִ��� ���� ���� ���� index ã��
	for (i = 0; i < (l + m + n); i++)
		if (max == sums[i]) {
			printf("%d", i);
			return 0;
		}

}