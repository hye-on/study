#include <stdio.h>
int x, n, left = 0;
int i, j, sum = 0;
int fraction[2] = {1, 1};
int main() {
	scanf_s("%d", &x);
	n = x;

	//몇 번째 n, 나머지 left 구하기
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
	//printf("%d는 %d줄의 %d번째이다.", x, n, left);

	// 짝수 번째 줄이면 (1/n에서 시작)
	if (n % 2 == 0) {
		fraction[1] = n;
		for (i = 0; i < left-1; i++) {
			fraction[0] += 1;
			fraction[1] -= 1;
		}
		printf("%d/%d", fraction[0], fraction[1]);
	}
	// 홀수면 (n/1에서 시작)
	else {
		fraction[0] = n;
		for (i = 0; i < left-1; i++) {
			fraction[0] -= 1;
			fraction[1] += 1;
		}
		printf("%d/%d", fraction[0], fraction[1]);
	}
}