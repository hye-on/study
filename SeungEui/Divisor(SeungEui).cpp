#include <stdio.h>

int i, j, temp, k, N = 0;
int div[50] = {};

int FindN(int num[]) {
	// 배열 크기가 짝수인지 홀수인지
	if (k != 1) {
		return num[0] * num[k-1];
	}
	else {	//제곱수면 중간만 제곱하기
		return num[0] * num[0];
	}

}

void Sort(int num[]) { //오름차순 정렬
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

	// 입력
	scanf_s("%d", &k);
	for (i = 0; i < k; i++) {
		scanf_s("%d", &div[i]);
	}
	Sort(div);
	N = FindN(div);
	
	//출력
	printf("%d", N);
}
