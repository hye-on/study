#include<iostream>
#include<algorithm>
using namespace std;
#define INF 1000000000
#define MAX 501

int T, K;
int file[MAX];
int sum[MAX];  // 1��°���� i��° ���ϱ����� ũ�� ��
int dp[MAX][MAX];  // i��°���� j��°������ ���ϵ��� ��ġ�µ� �ʿ��� �ּҺ��

int main() {
	cin >> T;

	while (T--) {
		cin >> K;

		for (int i = 1; i <= K; i++) {
			cin >> file[i];
			sum[i] = sum[i - 1] + file[i];
		}

		for (int i = 1; i <= K; i++) {
			for (int j = 1; j <= K - i; j++) {
				dp[j][i + j] = INF;
				for (int k = j; k < i + j; k++)
					dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + sum[i + j] - sum[j - 1]);
			}
		}

		cout << dp[1][K] << "\n";
	}

	return 0;
}
