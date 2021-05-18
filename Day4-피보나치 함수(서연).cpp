#include <iostream>
using namespace std;

//백준 1003번: 피보나치 함수
//내용: 피보나치 함수에서 0과 1이 얼만큼 나오는지 검사
// fibo[41][3] >> 피보나치 계산 후 계산 여부[0], 0의 개수[1], 1의 개수[2]를 저장해주는 배열

long fibo[41][3] = { 0 };

void fibonacci(int n) {
	if (fibo[n][0] != 0) return;

	if (n == 0) {
		fibo[n][1] = 1;
		fibo[n][0] = 0;
		return ;
	}
	else if(n == 1) {
		fibo[n][2] = 1;
		fibo[n][0] = 1;
		return ;
	}
	else {
		if (fibo[n - 1][0] == 0)
			fibonacci(n - 1);
		if (fibo[n - 2][0] == 0)
			fibonacci(n - 2);
			
		fibo[n][0] = fibo[n - 1][0] + fibo[n - 2][0];
		fibo[n][1] = fibo[n - 1][1] + fibo[n - 2][1];
		fibo[n][2] = fibo[n - 1][2] + fibo[n - 2][2];
	}
}

int main() {
	int cnt;
	scanf_s("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		int n;
		scanf_s("%d", &n);

		//초기화
		for (int j = 0; j < 41; j++) {
			fibo[j][0] = 0;
			fibo[j][1] = 0;
			fibo[j][2] = 0;
		}

		fibonacci(n);
		printf(">> %d %d", fibo[n][1], fibo[n][2]);
	}

	return 0;
}