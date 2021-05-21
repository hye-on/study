#include <stdio.h> 
int n, i, j, sum, temp = 0;
int arr[2][50] = {};

// 오름차순으로 정렬하는 함수
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

// 합 구하는 함수 (A의 작은 거xB의 큰 거)
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
