#include <stdio.h> 
int n, i, j, sum, temp = 0;
int arr[2][50] = {};

// ������������ �����ϴ� �Լ�
void Sort(int array[]) {
	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

// �� ���ϴ� �Լ� (A�� ���� ��xB�� ū ��)
void NewA() {
	Sort(arr[0]);
	Sort(arr[1]);
	for (i = 0; i < n; i++) {
		for (j = n-1; j >=0; j--) {
			if (i+j==n-1) {
				sum += arr[0][i] * arr[1][j];
			}
		}
	}

}

int main() {
	scanf_s("%d", &n);
	for (i = 0; i < 2; i++) 
		for(j=0;j<n;j++)
			scanf_s("%d", &arr[i][j]);
	NewA();
	printf("%d", sum);
}