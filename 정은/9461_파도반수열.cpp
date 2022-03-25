#include <iostream>
#define MAX 110
using namespace std;

int N; 
long long dp[MAX];

void solution() {
	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = dp[5] = 2;

	for (int i = 6; i <= N; i++)
		dp[i] = dp[i - 1] + dp[i - 5];

	cout << dp[N] << '\n';
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		solution();
	}
}
