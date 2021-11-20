#include <iostream>
using namespace std;

int dp[1001];

int gcd(int a, int b) { // 최대공약수를 구하는 함수
	int r;
	while(a%b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	return b;
}

void countDot() {
	int n;
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		n = 0;
		for (int j = 1; j <= i; j++) {
			if (gcd(i, j) == 1)
				n++;
		}
		dp[i] = dp[i - 1] + n;
	}
}

int main() {
	int t;
	cin >> t;

	countDot();
	int n;
	while (t--) {
		cin >> n;
		cout << dp[n] * 2 + 1 << '\n';
	}
}
